/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmandel <pmandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 11:38:03 by pmandel           #+#    #+#             */
/*   Updated: 2022/04/06 17:44:55 by pmandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl( void )
{
	
}
Harl::~Harl( void )
{
	
}
void	Harl::complain( std::string level )
{
	void (Harl::*complaint[4])( void ) = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };

	std::string complaintLevel[4] = { "debug", "info", "warning", "error" };
	
	for (int i = 0; i < 4; i++)
	{
		if (level == complaintLevel[i])
			(this->*(complaint[i]))();
	}
}
void	Harl::debug( void )
{
	std::cout << "I love having extra bacon " << std::endl;
}
void	Harl::info( void )
{
	std::cout << "I cannot believe adding extra bacon" << std::endl;
}
void	Harl::warning( void )
{
	std::cout << "I think I deserve to have some extra bacon" << std::endl;
}
void	Harl::error( void )
{
	std::cout << "This is unacceptable! I want to speak" << std::endl;
}
