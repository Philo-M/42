/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmandel <pmandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 16:18:47 by pmandel           #+#    #+#             */
/*   Updated: 2022/04/28 14:47:59 by pmandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->_nb = 0;
}
Fixed::Fixed(Fixed const & other)
{
	std::cout << "Copy constructor called" << std::endl;
	this->_nb = other.getRawBits(); 
}
Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}
Fixed	& Fixed::operator=(Fixed const & rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_nb = rhs.getRawBits();
	return (*this);
}
int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_nb);
}
void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_nb = raw;
}
