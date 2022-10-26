/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmandel <pmandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 15:34:02 by pmandel           #+#    #+#             */
/*   Updated: 2022/04/06 17:49:57 by pmandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"
#include <string>

HumanB::HumanB( )
{

}
HumanB::HumanB( std::string theName ) : _nameB( theName )
{
	
}
HumanB::~HumanB( )
{

}
void	HumanB::setWeapon( Weapon & theWeapon )
{
	_weaponB = & theWeapon;
}
void	HumanB::attack() const
{
	std::cout << _nameB << " attacks with their " << _weaponB->getType() << std::endl;
}
