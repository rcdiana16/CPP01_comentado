/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diana <diana@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 13:31:44 by diana             #+#    #+#             */
/*   Updated: 2025/10/22 17:33:14 by diana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(){}

//member function -metodo
//que agrege la palabra Zombie al inicio de la funcion es lo que hace qye esta este vinculada a la clase Zombie
void Zombie::announce(void)
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." <<std::endl; 
}

//DEFINICION del CONSTRUCTOR con parametro, es el cuerpo real de la funcion 
//Aqui guardamos el nombre en el atributo privado 
Zombie::Zombie(std::string name)
{
	_name = name;
}

//implementacion del destructor
Zombie::~Zombie()
{
    std::cout << _name << " destroyed" << std::endl;
}


//La clase (Zombie) define cómo es un zombie, qué atributos tiene (_name) y qué métodos tiene (announce()).
//El constructor (Zombie::Zombie(...)) crea e inicializa un objeto de esa clase.
//El destructor (Zombie::~Zombie()) se llama cuando el objeto se destruye, ya sea en stack o heap.
//Los métodos (announce()) son funciones que pertenecen a la clase y pueden usar los atributos del objeto.
//En resumen: la clase es el plano, los constructores crean los objetos, los métodos definen su comportamiento.