/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmandel <pmandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 13:06:54 by pmandel           #+#    #+#             */
/*   Updated: 2022/08/08 19:00:06 by pmandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>

	Animal::Animal()
	{
		this->_type = "Animal";
		std::cout << "Default Animal constructor called" << std::endl;
	}
	Animal::Animal(std::string theType)
	{
		this->_type = theType;
		std::cout << "This type of animal was constructed : " << this->_type << std::endl;
	
	}
	Animal::Animal(Animal const & other)
	{
			this->_type = other.getType();
			std::cout << "This type of animal was copied : " << this->_type << std::endl;
	}
	Animal::~Animal()
	{
		std::cout << "This type of animal was destructed : " << this->_type << std::endl;

	}
	Animal	& Animal::operator=(Animal const & rhs)
	{
		if(this != &rhs)
		{
			this->_type = rhs.getType();
			std::cout << "Affection operator was called for this type : " << this->_type << std::endl;
		}
		else
		{
			std::cout << "You cannot copy an animal into the same animal" << std::endl;
		}
		return *this;
	}
	std::string	Animal::getType() const
	{
		return this->_type;
	}
	void	Animal::makeSound() const
	{
		std::cout << "You can hear the Animal sound" << std::endl;
	}