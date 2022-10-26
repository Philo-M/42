/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmandel <pmandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 15:33:54 by pmandel           #+#    #+#             */
/*   Updated: 2022/04/06 17:49:19 by pmandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"
#include <string>

HumanA::HumanA( std::string theName, Weapon & theWeapon ) : _nameA( theName ), _weaponA( theWeapon )
{

}
HumanA::~HumanA( )
{
	
}
void	HumanA::attack( ) const
{
	std::cout << this->_nameA << " attacks with their " << _weaponA.getType( ) << std::endl;
}
