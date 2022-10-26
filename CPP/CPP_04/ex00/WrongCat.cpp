/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmandel <pmandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 13:22:29 by pmandel           #+#    #+#             */
/*   Updated: 2022/08/08 19:20:33 by pmandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include <iostream>

	WrongCat::WrongCat(): WrongAnimal()
	{
		this->_type = "WrongCat";
		std::cout << "Default WrongCat constructor called" << std::endl;
	}
	WrongCat::WrongCat(std::string theType): WrongAnimal(theType)
	{
		std::cout << "This type of wrongcat was constructed : " << this->_type << std::endl;
	
	}
	WrongCat::WrongCat(WrongCat const & other): WrongAnimal(other)
	{
		std::cout << "This type of wrongcat was copied : " << this->_type << std::endl;
	}
	WrongCat::~WrongCat()
	{
		std::cout << "This type of wrongcat was destructed : " << this->_type << std::endl;

	}
	WrongCat	& WrongCat::operator=(WrongCat const & rhs)
	{
		if(this != &rhs)
		{
			this->_type = rhs.getType();
			std::cout << "Affection operator was called for this type : " << this->_type << std::endl;
		}
		else
		{
			std::cout << "You cannot copy an wrongcat into the same wrongcat" << std::endl;
		}
		return *this;
	}
	void	WrongCat::makeSound() const
	{
		std::cout << "You can hear the WrongCat sound" << std::endl;
	}