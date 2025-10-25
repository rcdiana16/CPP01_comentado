/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diana <diana@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 17:48:17 by diana             #+#    #+#             */
/*   Updated: 2025/10/25 18:07:26 by diana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

int main(int argc, char **argv)
{
	if(argc != 4)
	{
		std::cout << "Usage: ./replace <filename> <s1> <s2>" << std::endl;
		return 1;
	}
	//guardo los argmentos en strings
	std::string filename = argv[1];	
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	//para abrir un archivo se usa:
	std::ifstream input(filename);
	//para comprobar que se abrio correctamente uso el objeto que cree -input-
	if (!input.is_open())
	{
		std::cout << "Error: could not open input file." << std::endl;
		return 1;
	}			
	//leemos todo el contenido del archivo en un string		
						//crea un iterador al inicio del archivo input
		std::string content((std::istreambuf_iterator<char>(input)),
                    std::istreambuf_iterator<char>());//crea un iterador final vacio marca eof
		input.close(); //cerramos el archivo de entrada
		//solo procesamos si el archivo no esta vacio
		if(!content.empty())
		{
			//busca dentro de content la primera aparición de la subcadena s1 y devuelve su posición
			size_t pos = content.find(s1);
			//std...significa no encontrado
			if (s1.empty())
			{
				std::cout << "Error: s1 cannot be empty" << std::endl;
				return 1;
			}
			while (pos != std::string::npos)
			{
					//      da el texto antes de s1          da el texto despues de s1
				//asi se cre un  nuevo string con s1 remplazado por s2 en la pos encontrada
				content = content.substr(0, pos) + s2 + content.substr(pos + s1.length());
				//empieza a buscar apartir de aqui para no hacer bucle infinito
    			pos = content.find(s1, pos + s2.length());
			}
		}
		std::string newFileName = filename + ".replace";
		std::ofstream output(newFileName);
		if(!output.is_open())
		{
			std::cout << "Error: could not create output file." << std::endl;
			return 1;
		}
		output << content;
		output.close();
		std::cout << "File successfully created: " << newFileName << std::endl;
		return 0;
}
