/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmandel <pmandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 15:40:17 by pmandel           #+#    #+#             */
/*   Updated: 2022/05/02 16:52:09 by pmandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
	public:
	
		ScavTrap();
		ScavTrap(std::string const & theName);
		ScavTrap(ScavTrap const & other);
		~ScavTrap();
		ScavTrap	& operator=(ScavTrap const & rhs);
		void	guardGate();
		void	attack(const std::string& target);

};

#endif