/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmandel <pmandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 15:40:22 by pmandel           #+#    #+#             */
/*   Updated: 2022/05/03 16:34:44 by pmandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ClapTrap.hpp"


FragTrap::FragTrap(): ClapTrap()
{
	std::cout << "FragTrap default constructor" << std::endl;
	
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}
FragTrap::FragTrap(std::string const & theName): ClapTrap(theName)
{
	std::cout << "FragTrap " << this->_name << " has been constructed" << std::endl;

	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}
FragTrap::FragTrap(FragTrap const & other): ClapTrap(other)
{
	std::cout << "FragTrap copy constructor called from " << 
			other.getName() << std::endl;
}
FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << this->_name << " has been destroyed" << std::endl;
}
FragTrap	& FragTrap::operator=(FragTrap const & rhs)
{
	std::cout << "FragTrap assignation operator used from " <<
			rhs.getName() << std::endl;

	this->_name = rhs.getName();
	this->_hitPoints = rhs.getHitPoints();
	this->_energyPoints = rhs.getEnergyPoints();
	this->_attackDamage = rhs.getAttackDamage();
		
	return *this;
}
void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->_name << " demands a high five" << std::endl;
}
void			FragTrap::attack(const std::string& target)
	{
		std::cout << this->_name << " is a FragTrap and wants to attack " << target << std::endl;
		ClapTrap::attack(target);
	}