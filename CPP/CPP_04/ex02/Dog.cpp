/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmandel <pmandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 13:22:29 by pmandel           #+#    #+#             */
/*   Updated: 2022/08/09 18:34:40 by pmandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>


	Dog::Dog(): AAnimal("Dog"), _dog_brain(new Brain())
	{
		std::cout << "Default Dog constructor called" << std::endl;
	}
	Dog::Dog(std::string theType): AAnimal(theType)
	{
		std::cout << "This type of dog was constructed : " << this->_type << std::endl;
	}
	Dog::Dog(Dog const & other): AAnimal(other)
	{
		this->_dog_brain = new Brain(*(other._dog_brain));
		std::cout << "This type of dog was copied : " << this->_type << std::endl;
	}
	Dog::~Dog()
	{
		delete _dog_brain;
		std::cout << "This type of dog was destructed : " << this->_type << std::endl;
	}
	Dog	& Dog::operator=(Dog const & rhs)
	{
		if(this != &rhs)
		{
			this->_type = rhs.getType();
			
			delete _dog_brain;
			this->_dog_brain = new Brain(*(rhs._dog_brain));
			std::cout << "Affection operator was called for this type : " << this->_type << std::endl;
		}
		else
		{
			std::cout << "You cannot affect an dog to the same dog" << std::endl;
		}
		return *this;
	}
	std::string Dog::getIdea(int i)
	{
		return	this->_dog_brain->getIdea(i);
	}
	void Dog::setIdea(std::string str)
	{
		_dog_brain->setIdea(str);
	}
	void	Dog::makeSound() const
	{
		std::cout << "You can hear the Dog sound" << std::endl;
	}