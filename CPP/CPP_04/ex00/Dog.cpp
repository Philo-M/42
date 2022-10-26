/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmandel <pmandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 13:22:29 by pmandel           #+#    #+#             */
/*   Updated: 2022/08/08 18:58:17 by pmandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

	Dog::Dog(): Animal()
	{
		this->_type = "Dog";
		std::cout << "Default Dog constructor called" << std::endl;
	}
	Dog::Dog(std::string theType): Animal(theType)
	{
		std::cout << "This type of dog was constructed : " << this->_type << std::endl;
	}
	Dog::Dog(Dog const & other): Animal(other)
	{
		std::cout << "This type of dog was copied : " << this->_type << std::endl;
	}
	Dog::~Dog()
	{
		std::cout << "This type of dog was destructed : " << this->_type << std::endl;

	}
	Dog	& Dog::operator=(Dog const & rhs)
	{
		if(this != &rhs)
		{
			this->_type = rhs.getType();
			std::cout << "Affection operator was called for this type : " << this->_type << std::endl;
		}
		else
		{
			std::cout << "You cannot copy an dog into the same dog" << std::endl;
		}
		return *this;
	}
	void	Dog::makeSound() const
	{
		std::cout << "You can hear the Dog sound" << std::endl;
	}