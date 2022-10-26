/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmandel <pmandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 12:16:39 by pmandel           #+#    #+#             */
/*   Updated: 2022/03/22 14:50:24 by pmandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{

}
Zombie::Zombie(std::string blaz)
{
	m_name = blaz;
}

Zombie::~Zombie()
{
	std::cout << "Le zombie " << m_name << " numero " << m_N << " a ete supprime." << std::endl;
}
void Zombie::announce( void )
{
	std::cout << m_name << " numero " << m_N << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
void	Zombie::setname(std::string name)
{
	m_name = name;
}
void	Zombie::setnumber(int	N)
{
	m_N = N;
}