/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diana <diana@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 18:06:33 by diana             #+#    #+#             */
/*   Updated: 2025/10/23 10:29:39 by diana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(){}
Zombie::~Zombie(){}

//mi metodo pertenece a la clase zombie, por eso le tengo que añadir la palabra 
void Zombie::setName(std::string name)
{
	this->_name = name;
}

void Zombie::announce(void)
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." <<std::endl; 
}
