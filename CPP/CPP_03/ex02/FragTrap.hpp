/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmandel <pmandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 15:40:17 by pmandel           #+#    #+#             */
/*   Updated: 2022/05/02 16:52:37 by pmandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
	public:
	
		FragTrap();
		FragTrap(std::string const & theName);
		FragTrap(FragTrap const & other);
		~FragTrap();
		FragTrap	& operator=(FragTrap const & rhs);
		void	highFivesGuys(void);
		void	attack(const std::string& target);
};

#endif