/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmandel <pmandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 11:19:02 by pmandel           #+#    #+#             */
/*   Updated: 2022/05/02 17:06:53 by pmandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <string>
#include <iostream>

class ClapTrap
{
	public:
	
		ClapTrap();
		ClapTrap(std::string const & theName);
		ClapTrap(ClapTrap const & other);
		~ClapTrap();
		ClapTrap		& operator=(ClapTrap const & rhs);
		void			attack(const std::string& target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
		void			setName(const std::string& theName);
		void			setHitPoints(unsigned int hitPoints);
		void			setEnergyPoints(unsigned int energyPoints);
		void			setAttackDamage(unsigned int attackDamage);
		std::string		getName() const;
		unsigned int	getHitPoints() const;
		unsigned int	getEnergyPoints() const;
		unsigned int	getAttackDamage() const;


	protected:

		std::string		_name;
		unsigned int	_hitPoints;
		unsigned int	_energyPoints;
		unsigned int	_attackDamage;	
};

#endif