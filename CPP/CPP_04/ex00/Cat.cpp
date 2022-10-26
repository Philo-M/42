/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmandel <pmandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 13:22:29 by pmandel           #+#    #+#             */
/*   Updated: 2022/08/08 20:04:34 by pmandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

	Cat::Cat(): Animal()
	{
		this->_type = "Cat";
		std::cout << "Default Cat constructor called" << std::endl;
	}
	Cat::Cat(std::string theType): Animal(theType)
	{
		std::cout << "This type of cat was constructed : " << this->_type << std::endl;
	}
	Cat::Cat(Cat const & other): Animal(other)
	{
		std::cout << "This type of cat was copied : " << this->_type << std::endl;
	}
	Cat::~Cat()
	{
		std::cout << "This type of cat was destructed : " << this->_type << std::endl;

	}
	Cat	& Cat::operator=(Cat const & rhs)
	{
		if(this != &rhs)
		{
			this->_type = rhs.getType();
			std::cout << "Affection operator was called for this type : " << this->_type << std::endl;
		}
		else
		{
			std::cout << "You cannot copy an cat into the same cat" << std::endl;
		}
		return *this;
	}
	void	Cat::makeSound() const
	{
		std::cout << "You can hear the Cat sound" << std::endl;
	}