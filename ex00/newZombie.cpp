/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diana <diana@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 13:31:37 by diana             #+#    #+#             */
/*   Updated: 2025/10/22 18:15:21 by diana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

//nueva funcion fuera de clase Zombie 
Zombie* newZombie(std::string name)
{
	Zombie* z = new Zombie(name); //crea un zombie en el HEAP
	return z; //devuelve el puntero
}
//se crea en memoria dinamica con new 
//Heap: objetos “viven” hasta que tú los destruyes con delete.
//destructor se llma solo cuando haces delete
//útil para zombies que necesitas mantener más tiempo.

//ver explicacion general en randomchump

//