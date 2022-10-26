/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmandel <pmandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 11:38:09 by pmandel           #+#    #+#             */
/*   Updated: 2022/03/29 11:23:59 by pmandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP
#include <iostream>
#include <string>

class Harl
{
	public:
		
		Harl( void );
		~Harl( void );
		void	complain( std::string level );

	private:
	
		void	debug( void );
		void	info( void );
		void	warning( void );
		void	error( void );

	
};

#endif