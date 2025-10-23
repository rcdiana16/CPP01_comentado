/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diana <diana@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 18:06:43 by diana             #+#    #+#             */
/*   Updated: 2025/10/23 10:29:32 by diana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name )
{
	Zombie* a = new Zombie[N]; //crea N zombies en el heap
	for(int i = 0; i < N; i++) //recorro los N zombies
	{
		a[i].setName(name); //asigna el nombre pasado como parametro
	}
	return (a); // retorna el puntero al primer zombie
}
