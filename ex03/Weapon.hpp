/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diana <diana@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 16:10:35 by diana             #+#    #+#             */
/*   Updated: 2025/10/24 14:18:02 by diana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon
{
	public:
	Weapon(const std::string& type);//un constructor que reciba el tipo
	~Weapon();
	const std::string& getType() const;//getter que devuleve el valor del atributo sin modificarlo ver abajo
	void setType(const std::string& newType);//setter permite cambiar el valor del atributo

	private:
	std::string _type;
};

#endif

//const std::string& → devolvemos una referencia constante para no copiar el string 
//y no permitir que quien lo reciba lo modifique.El segundo const después de los paréntesis 
//indica que el método no modificará la clase.