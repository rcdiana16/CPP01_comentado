/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diana <diana@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 16:10:13 by diana             #+#    #+#             */
/*   Updated: 2025/10/24 15:42:36 by diana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <string>
#include <iostream>
#include "Weapon.hpp" //incluimos la clase weapon

class HumanA
{
	public:
	//constructor recibe nombre y referencia a un arma
	//la referencia no crea una copia del string, lo que ahorra memoria y tiempo.
	//...Si hubiéramos escrito solo std::string name, C++ haría una copia del string cada vez que llamas al constructor.
	//aqui const -como parametro- garantiza que la funcion no va a modificar ese string
	HumanA(const std::string& name, Weapon& weapon);
	~HumanA();
	// Método attack: imprime "<name> attacks with their <weapon type>"
	//aqui const significa que este metodo no puede modificar ningun atributo de la clase solo lee la info
	void attack() const;

	private:
	std::string _name; //nombre del humano
	Weapon& _weapon; //referencia al arma
};

#endif