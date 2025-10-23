/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diana <diana@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 18:06:40 by diana             #+#    #+#             */
/*   Updated: 2025/10/23 10:30:22 by diana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie
{
	public:
	Zombie();
	~Zombie();
	void setName(std::string name);
	void announce();
	
	private:
	//este es un atributo
	std::string _name;

};

Zombie* zombieHorde( int N, std::string name);

#endif