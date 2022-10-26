/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmandel <pmandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 15:33:59 by pmandel           #+#    #+#             */
/*   Updated: 2022/04/06 17:50:12 by pmandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
	public:
	
		HumanB( );
		HumanB( std::string theName );
		~HumanB( );
		void	setWeapon( Weapon & theWeapon );
		void	attack( ) const;

	private:
	
		std::string	_nameB;
		Weapon*		_weaponB;

};

#endif