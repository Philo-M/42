/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmandel <pmandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 15:33:38 by pmandel           #+#    #+#             */
/*   Updated: 2022/04/06 17:50:44 by pmandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>
#include <iostream>

class Weapon
{
	public:
	
		Weapon( );
		Weapon( std::string theType );
		~Weapon( );
		void		setType( std::string theType );
		std::string	const & getType( void );


	private:
	
		std::string	_type;
};

#endif

