/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diana <diana@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 13:31:17 by diana             #+#    #+#             */
/*   Updated: 2025/10/22 17:39:25 by diana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie z1("Foo");
	z1.announce();

	Zombie* z2 = newZombie("Alice"); //HEAP
	z2->announce(); //utilizamos '->' cuando es stack y es un puntero a un objeto
	delete z2;
	
	randomChump("Bob"); //STACK
}