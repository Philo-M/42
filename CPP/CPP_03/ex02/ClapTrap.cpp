/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmandel <pmandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 15:48:31 by pmandel           #+#    #+#             */
/*   Updated: 2022/05/03 17:23:35 by pmandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

	ClapTrap::ClapTrap(): _name("noName"), _hitPoints(10), _energyPoints(10), 
			_attackDamage(0)
	{
		std::cout << "ClapTrap default constructor" << std::endl;
	}
	ClapTrap::ClapTrap(std::string const & theName):
			_name(theName), _hitPoints(10), _energyPoints(10), _attackDamage(0)
	{
		std::cout << "ClapTrap " << this->_name << " has been constructed" <<
				std::endl;
	}
	ClapTrap::ClapTrap(ClapTrap const & other)
	{
		if (this != &other)
		{
			std::cout << "ClapTrap copy constructor called from " << 
					other.getName() << std::endl;

			this->_name = other.getName();
			this->_hitPoints = other.getHitPoints();
			this->_energyPoints = other.getEnergyPoints();
			this->_attackDamage = other.getAttackDamage();
		}
	}
	ClapTrap::~ClapTrap()
	{
		std::cout << "ClapTrap " << this->_name << " has been destroyed" <<
				std::endl;
	}
	ClapTrap		& ClapTrap::operator=(ClapTrap const & rhs)
	{
		if (this != &rhs)
		{
			std::cout << "ClapTrap assignation operator used from " <<
					rhs.getName() << std::endl;
				
			this->_name = rhs.getName();
			this->_hitPoints = rhs.getHitPoints();
			this->_energyPoints = rhs.getEnergyPoints();
			this->_attackDamage = rhs.getAttackDamage();
		}	
		return *this;
	}
	void			ClapTrap::attack(const std::string& target)
	{
		if (this->getEnergyPoints() > 0)
		{	
			this->setEnergyPoints(this->getEnergyPoints() - 1); 
			std::cout << "ClapTrap " << this->_name << " attacks " << target
					<< ", causing " << this->_attackDamage <<
					" points of damage" << std::endl;
			std::cout << "ClapTrap " << this->_name << " update: " <<
					this->getEnergyPoints()
					<< " Energy points and " << this->getHitPoints()
					<< " Hit points left" << std::endl;
		}
		else
			std::cout << "ClapTrap " << this->_name <<
					" doesn't have any Energy points left " << "for attacking "
					<< target << std::endl;
	}
	void			ClapTrap::takeDamage(unsigned int amount)
	{
		std::cout << "ClapTrap " << this->_name << " takes " << 
				std::min((int)(this->getHitPoints()), (int)amount)
				<< " points of damage!" << std::endl;
		this->setHitPoints(std::max(0, (int)(this->getHitPoints() - amount)));
		std::cout << "ClapTrap " << this->_name << " update: " <<
				this->getEnergyPoints()	<< " Energy points and " <<
				this->getHitPoints() << " Hit points left" << std::endl;
	}
	void			ClapTrap::beRepaired(unsigned int amount)
	{
		if (this->getEnergyPoints() > 0)
		{	
			this->setEnergyPoints(this->getEnergyPoints() - 1); 
			this->setHitPoints(this->getHitPoints() + amount);
			std::cout << "ClapTrap " << this->_name << " is repaired with " << amount
					<< " hit points!" << std::endl;
			std::cout << "ClapTrap " << this->_name << " update: " <<
					this->getEnergyPoints() << " Energy points and " <<
					this->getHitPoints() << " Hit points left" << std::endl;
		}
		else
			std::cout << "ClapTrap " << this->_name << " doesn't have any Energy " <<
					"points left for being repaired" << std::endl;
	}
	void			ClapTrap::setName(const std::string& theName)
	{
		this->_name = theName;
	}
	void			ClapTrap::setHitPoints(unsigned int hitPoints)
	{
		this->_hitPoints = hitPoints;
	}
	void			ClapTrap::setEnergyPoints(unsigned int energyPoints)
	{
		this->_energyPoints = energyPoints;
	}
	void			ClapTrap::setAttackDamage(unsigned int attackDamage)
	{
		this->_attackDamage = attackDamage;
	}
	std::string		ClapTrap::getName() const
	{
		return this->_name;
	}
	unsigned int	ClapTrap::getHitPoints() const
	{
		return this->_hitPoints;
	}
	unsigned int	ClapTrap::getEnergyPoints() const
	{
		return this->_energyPoints;
	}
	unsigned int	ClapTrap::getAttackDamage() const
	{
		return this->_attackDamage;
	}
