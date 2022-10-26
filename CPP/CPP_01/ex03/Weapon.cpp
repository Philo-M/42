/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmandel <pmandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 15:33:40 by pmandel           #+#    #+#             */
/*   Updated: 2022/04/06 17:50:36 by pmandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( )
{
	
}
Weapon::Weapon( std::string theType ) : _type( theType )
{	

}
Weapon::~Weapon( )
{

}
void	Weapon::setType( std::string theType )
{
	this->_type = theType;
}
std::string	const & Weapon::getType( void )
{
	std::string const & typeRef = this->_type;
	return typeRef;
}
