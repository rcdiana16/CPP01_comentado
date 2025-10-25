/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diana <diana@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 18:37:59 by diana             #+#    #+#             */
/*   Updated: 2025/10/25 22:28:22 by diana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::complain(std::string level)
{
	//defino el arreglo que asocia strings con punteros a funcion
	Level levels[4] = {
        {"DEBUG", &Harl::debug},
        {"INFO", &Harl::info},
        {"WARNING", &Harl::warning},
        {"ERROR", &Harl::error}
    };
	bool found = false;
	//recorrer el arreglo
	for (int i = 0; i < 4; i++)
	{
		//como dentro del buble for ya tenemos el elemento actual del arreglo levels[i]
		//ese elementos contiene el string y el puntero a funcion
		//entonces comparammos con el string que esta en el arreglo
		if (level == levels[i].level)
		{
			//el string "DEBUG", "INFO", etc. del arreglo.
			(this->*levels[i].func)();//el puntero a función correspondiente.
			found = true;
			break;
		}
	}
	if(!found)
		std::cout << "Invalid level." << std::endl;
}

void Harl::debug(void)
{
	std::cout << "I love having extra bacon for my "
	"7XL-double-cheese-triple-pickle-special-ketchup burger."
	" I really do! " <<std::endl;
}

void Harl::info (void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. "
	"You did not put enough bacon in my burger! "
	"If you did, I would not be asking for more!" << std::endl;
}

void Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free."
	" I have been coming for years, whereas you started working here "
	"just last month. " << std::endl;
}

void Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the "
	"manager now." << std::endl;
}