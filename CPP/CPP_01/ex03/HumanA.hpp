/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmandel <pmandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 15:33:45 by pmandel           #+#    #+#             */
/*   Updated: 2022/04/06 10:35:16 by pmandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
	public:
	
		HumanA( std::string theName, Weapon & theWeapon );
		~HumanA( );
		void	attack( ) const;

	private:
	
		std::string _nameA;
		Weapon &	_weaponA;

};

#endif