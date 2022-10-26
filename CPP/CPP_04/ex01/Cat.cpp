/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmandel <pmandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 13:22:29 by pmandel           #+#    #+#             */
/*   Updated: 2022/08/09 18:20:48 by pmandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>


	Cat::Cat(): Animal("Cat"), _cat_brain(new Brain)
	{
		std::cout << "Default Cat constructor called" << std::endl;
	}
	Cat::Cat(std::string theType): Animal(theType)
	{
		std::cout << "This type of cat was constructed : " << this->_type << std::endl;
	}
	Cat::Cat(Cat const & other): Animal(other)
	{
		this->_cat_brain = new Brain(*(other._cat_brain));
		std::cout << "This type of cat was copied : " << this->_type << std::endl;
	}
	Cat::~Cat()
	{
		delete _cat_brain;
		std::cout << "This type of cat was destructed : " << this->_type << std::endl;
	}
	Cat	& Cat::operator=(Cat const & rhs)
	{
		if(this != &rhs)
		{
			this->_type = rhs.getType();
			
			delete _cat_brain;
			this->_cat_brain = new Brain(*(rhs._cat_brain));
			std::cout << "Affection operator was called for this type : " << this->_type << std::endl;
		}
		else
		{
			std::cout << "You cannot affect an cat to the same cat" << std::endl;
		}
		return *this;
	}
	std::string Cat::getIdea(int i)
	{
		return	this->_cat_brain->getIdea(i);
	}
	void Cat::setIdea(std::string str)
	{
		_cat_brain->setIdea(str);
	}
	void	Cat::makeSound() const
	{
		std::cout << "You can hear the Cat sound" << std::endl;
	}