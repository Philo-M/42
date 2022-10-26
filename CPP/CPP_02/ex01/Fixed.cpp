/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmandel <pmandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 16:19:06 by pmandel           #+#    #+#             */
/*   Updated: 2022/04/20 16:19:07 by pmandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->_nb = 0;
}
Fixed::Fixed(int const nb_int)
{
	std::cout << "Int constructor called" << std::endl;
	this->_nb = nb_int * (1 << _bits);
}
Fixed::Fixed(float const nb_float)
{
	std::cout << "Float constructor called" << std::endl;
	this->_nb = roundf(nb_float * (1 << _bits));
}
Fixed::Fixed(Fixed const & other)
{
	std::cout << "Copy constructor called " << std::endl;
	*this = other; 
}
Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}
Fixed	& Fixed::operator=(Fixed const & rhs)
{
	std::cout << "Copy assignment operator called " << std::endl;
	this->_nb = rhs.getRawBits();
	return *this;
}
int	Fixed::getRawBits(void) const
{
	return this->_nb;
}
void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_nb = raw;
}
float	Fixed::toFloat(void) const
{
	float	toF = (float)(this->_nb) / (float)(1 << _bits);
	return toF;
}
int	Fixed::toInt(void) const
{
	int	toI = (int)(this->_nb) / (int)(1 << _bits);
	return toI;
}

/// out of Fixed class 

std::ostream & operator<<(std::ostream & o, Fixed const & rhs)
{
	o << rhs.toFloat();
	return o;
}
