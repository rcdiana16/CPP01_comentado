/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diana <diana@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 13:31:41 by diana             #+#    #+#             */
/*   Updated: 2025/10/22 17:37:30 by diana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
//tambien es una funcion fuera de la clase 
void randomChump(std::string name)
{
	Zombie y(name); //se crea en STACK
	y.announce(); // se utiliza punto '.' solo en stack, para lamar al metodo /es el objeto mismo
	//Esto significa: “llama al método announce que pertenece a este objeto y”.
}
//Stack: objetos “viven” solo dentro del scope donde se crearon; destructor se llama automáticamente.
//se crea dentro de la funcion como variable local - util para zombies temporales
//Destructor se llama automáticamente al salir de la función.

//explicacion general:
//El hecho de que newZombie o randomChump estén fuera de la clase no significa que no estén creando zombies de la clase Zombie.
//Están usando la clase que definiste en .hpp, simplemente no son métodos de la clase, son funciones libres que crean y usan objetos de esa clase.

