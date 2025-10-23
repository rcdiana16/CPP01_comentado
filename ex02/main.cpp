/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diana <diana@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 14:53:44 by diana             #+#    #+#             */
/*   Updated: 2025/10/23 15:55:56 by diana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main()
{
	//creo la variable y la inicializo
	std::string brain = "HI THIS IS BRAIN";
	//creo un puntero que apunte a la direccion de la anterior variable
	std::string *pointer = &brain;
	//creo una referencia a la misma variable
	std::string &reference = brain;
	//imprimo las direcciones de memoria
	std::cout << &brain << std::endl;
	std::cout << pointer << std::endl;
	std::cout << &reference << std::endl;
	//imprimo el valor de cada variable
	std::cout << brain << std::endl;
	std::cout << *pointer << std::endl;
	std::cout << reference << std::endl;
}


