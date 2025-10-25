/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diana <diana@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 18:38:06 by diana             #+#    #+#             */
/*   Updated: 2025/10/25 22:23:28 by diana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
	Harl harl;//ver fin del archivo
	harl.complain("DEBUG");
	harl.complain("INFO");
	harl.complain("WARNING");
	harl.complain("ERROR");
	harl.complain("NOTHING");
	return 0;
}

//harl harl : Estás creando un objeto de tipo Harl —es decir, una instancia de la clase.
//Si tu clase no necesita un constructor especial, el compilador genera uno por defecto automáticamente.
// y como mi clase Harl NO tiene atributos no necesito inicializacion especial.

//cuando haces Harl::harl(...){...} Estás definiendo el constructor de la clase —es decir, 
//cómo se inicializa un objeto Harl cuando se crea. Lo usas solo cuando necesitas preparar algo 
//(por ejemplo, inicializar variables privadas o imprimir un mensaje cuando el objeto se construye)
