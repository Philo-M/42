/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmandel <pmandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 13:06:54 by pmandel           #+#    #+#             */
/*   Updated: 2022/08/08 19:02:19 by pmandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include <iostream>

	WrongAnimal::WrongAnimal()
	{
		this->_type = "WrongAnimal";
		std::cout << "Default WrongAnimal constructor called" << std::endl;
	}
	WrongAnimal::WrongAnimal(std::string theType)
	{
		this->_type = theType;
		std::cout << "This type of wronganimal was constructed : " << this->_type << std::endl;
	}
	WrongAnimal::WrongAnimal(WrongAnimal const & other)
	{
		this->_type = other.getType();
		std::cout << "This type of wronganimal was copied : " << this->_type << std::endl;
	}
	WrongAnimal::~WrongAnimal()
	{
		std::cout << "This type of wronganimal was destructed : " << this->_type << std::endl;

	}
	WrongAnimal	& WrongAnimal::operator=(WrongAnimal const & rhs)
	{
		if(this != &rhs)
		{
			this->_type = rhs.getType();
			std::cout << "Affection operator was called for this type : " << this->_type << std::endl;
		}
		else
		{
			std::cout << "You cannot copy an wronganimal into the same wronganimal" << std::endl;
		}
		return *this;
	}
	std::string	WrongAnimal::getType() const
	{
		return this->_type;
	}
	void	WrongAnimal::makeSound() const
	{
		std::cout << "You can hear the WrongAnimal sound" << std::endl;
	}