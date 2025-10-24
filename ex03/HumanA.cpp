/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diana <diana@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 16:04:07 by diana             #+#    #+#             */
/*   Updated: 2025/10/24 17:20:20 by diana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
//este es el constructor
//despues del ')' eso es la lista de inicializacion y esto quiere decir:
//inicializa _name con name y _weapon con weapon antes de ejecutar el cuerpo del constructor
//una referencia debe inicializarse obligatoriamente en el constructor
HumanA::HumanA(const std::string& name, Weapon& weapon) : _name(name), _weapon(weapon)
{
	//ya inicialize los atributos asi que no necesito nada 
}

HumanA::~HumanA(){}

void HumanA::attack() const
{
	//atributo de nombre: _name -> imprime nombre del humano
	//para acceder al tipo de weapon llamo al getter desde la referencia _weapon: "weapon.getType()"
	//...->obtiene el tipo actual del arma
	std::cout << _name  << " attacks with their " << _weapon.getType() << std::endl;
}