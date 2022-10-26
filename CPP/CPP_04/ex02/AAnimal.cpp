/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmandel <pmandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 13:06:54 by pmandel           #+#    #+#             */
/*   Updated: 2022/08/08 20:45:45 by pmandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include <iostream>

	AAnimal::AAnimal()
	{
		this->_type = "AAnimal";
		std::cout << "Default AAnimal constructor called" << std::endl;
	}
	AAnimal::AAnimal(std::string theType)
	{
		this->_type = theType;
		std::cout << "This type of animal was constructed : " << this->_type << std::endl;
	
	}
	AAnimal::AAnimal(AAnimal const & other)
	{
		this->_type = other.getType();
		std::cout << "This type of animal was copied : " << this->_type << std::endl;
	}
	AAnimal::~AAnimal()
	{
		std::cout << "This type of animal was destructed : " << this->_type << std::endl;

	}
	AAnimal	&	AAnimal::operator=(AAnimal const & rhs)
	{
		if(this != &rhs)
		{
			this->_type = rhs.getType();
			std::cout << "Affection operator was called for this type : " << this->_type << std::endl;
		}
		else
		{
			std::cout << "You cannot affect an animal to the same animal" << std::endl;
		}
		return *this;
	}
	std::string	AAnimal::getType() const
	{
		return this->_type;
	}
	void	AAnimal::makeSound() const
	{
		std::cout << "You can hear the AAnimal sound" << std::endl;
	}