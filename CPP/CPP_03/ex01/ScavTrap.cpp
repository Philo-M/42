/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmandel <pmandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 15:40:22 by pmandel           #+#    #+#             */
/*   Updated: 2022/05/03 16:39:56 by pmandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"


ScavTrap::ScavTrap(): ClapTrap()
{
	std::cout << "ScavTrap default constructor" << std::endl;
	
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}
ScavTrap::ScavTrap(std::string const & theName): ClapTrap(theName)
{
	std::cout << "ScavTrap " << this->_name << " has been constructed" << std::endl;

	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}
ScavTrap::ScavTrap(ScavTrap const & other): ClapTrap(other)
{
	std::cout << "ScavTrap copy constructor called from " << 
			other.getName() << std::endl;
}
ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << this->_name << " has been destroyed" << std::endl;
}
ScavTrap	& ScavTrap::operator=(ScavTrap const & rhs)
{
	std::cout << "ScavTrap assignation operator used from " <<
			rhs.getName() << std::endl;

	this->_name = rhs.getName();
	this->_hitPoints = rhs.getHitPoints();
	this->_energyPoints = rhs.getEnergyPoints();
	this->_attackDamage = rhs.getAttackDamage();
		
	return *this;
}
void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->_name << " has started Gate keeper mode" << std::endl;
}
void			ScavTrap::attack(const std::string& target)
	{
		std::cout << this->_name << " is a ScavTrap and wants to attack " << target << std::endl;
		ClapTrap::attack(target);
	}