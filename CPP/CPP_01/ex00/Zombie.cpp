/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmandel <pmandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 12:16:39 by pmandel           #+#    #+#             */
/*   Updated: 2022/03/23 15:42:39 by pmandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie()
{

}
Zombie::Zombie(std::string blaz)
{
	name = blaz;
}

Zombie::~Zombie()
{
	std::cout << "Le zombie " << name << " a ete definitivement supprime." << std::endl;
}
void Zombie::announce( void )
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}