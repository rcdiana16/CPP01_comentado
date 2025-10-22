/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diana <diana@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 13:31:47 by diana             #+#    #+#             */
/*   Updated: 2025/10/22 15:53:28 by diana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
	public:
	Zombie();
	~Zombie();
	Zombie(std::string name); //este es el PROTOTIPO/DECLARACION del CONSTRUCTOR que recibe el nombre
	void announce(void);

	private:
	std::string _name;

};

Zombie* newZombie(std::string name);
void 	randomChump(std::string name);

#endif