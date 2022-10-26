/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmandel <pmandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 15:29:37 by pmandel           #+#    #+#             */
/*   Updated: 2022/04/21 12:15:50 by pmandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/// Constructors, Desctructors

Fixed::Fixed()
{
	// std::cout << "Fixed: Default constructor called" << std::endl;
	this->_nb = 0;
}
Fixed::Fixed(int const nb_int)
{
	// std::cout << "Fixed: Int constructor called" << std::endl;
	this->_nb = nb_int * (1 << _bits);
}
Fixed::Fixed(float const nb_float)
{
	// std::cout << "Fixed: Float constructor called" << std::endl;
	this->_nb = roundf(nb_float * (1 << _bits));
}
Fixed::Fixed(Fixed const & other)
{
	// std::cout << "Fixed: Copy constructor called " << std::endl;
	
	*this = other;
}
Fixed::~Fixed()
{
	// std::cout << "Fixed: Destructor called" << std::endl;
}

/// Operators overloads

Fixed	& Fixed::operator=(Fixed const & rhs)
{
	this->_nb = rhs.getRawBits();
	return *this;
}
Fixed	Fixed::operator+(Fixed const & rhs)
{
	Fixed	result;

	result.setRawBits(this->_nb + rhs.getRawBits());
	return result;
}
Fixed	Fixed::operator-(Fixed const & rhs)
{
	Fixed	result;

	result.setRawBits(this->_nb - rhs.getRawBits());
	return result;
}
Fixed	Fixed::operator*(Fixed const & rhs)
{
	Fixed	result;

	// std::cout << "multiplication operation called " << std::endl;

	result.setRawBits(this->_nb * (rhs.getRawBits() / (1 << _bits)));
	return result;
}
Fixed	Fixed::operator/(Fixed const & rhs)
{
	Fixed	result;

	result.setRawBits(this->_nb / (rhs.getRawBits() / (1 << _bits)));
	return result;
}
Fixed	& Fixed::operator++(void)
{
	this->_nb++;
	return *this;
}
Fixed	Fixed::operator++(int)
{
	Fixed	tmp(*this);
	operator++();
	return tmp;
}
Fixed	& Fixed::operator--(void)
{
	this->_nb--;
	return *this;
}
Fixed	Fixed::operator--(int)
{
	Fixed	tmp(*this);
	operator--();
	return tmp;
}
bool	Fixed::operator>(Fixed const & rhs) const
{
	return (this->_nb > rhs.getRawBits());
}
bool	Fixed::operator<(Fixed const & rhs) const
{
	return (this->_nb < rhs.getRawBits());
}
bool	Fixed::operator>=(Fixed const & rhs) const
{
	return (this->_nb >= rhs.getRawBits());
}
bool	Fixed::operator<=(Fixed const & rhs) const
{
	return (this->_nb <= rhs.getRawBits());
}
bool	Fixed::operator==(Fixed const & rhs) const
{
	return (this->_nb == rhs.getRawBits());
}
bool	Fixed::operator!=(Fixed const & rhs) const
{
	return (this->_nb != rhs.getRawBits());
}

/// Member Functions

Fixed Fixed::min(Fixed & lhs, Fixed & rhs)
{
	if (lhs > rhs)
		return rhs;
	else
		return lhs;
}	
Fixed Fixed::min(Fixed const & lhs, Fixed const & rhs)
{
	if (lhs > rhs)
		return rhs;
	else
		return lhs;
}
Fixed Fixed::max(Fixed & lhs, Fixed & rhs)
{
	if (lhs < rhs)
		return rhs;
	else
		return lhs;
}	
Fixed Fixed::max(Fixed const & lhs, Fixed const & rhs)
{
	if (lhs < rhs)
		return rhs;
	else
		return lhs;
}	
int	Fixed::getRawBits(void) const
{

	// std::cout << "getRawBits member function called " << this->_nb << std::endl;

	return this->_nb;
}
void	Fixed::setRawBits(int const raw)
{
	// std::cout << "setRawBits member function called " << raw << std::endl;

	this->_nb = raw;
}
float	Fixed::toFloat(void) const
{
	float	toF = (float)(this->_nb) / (float)(1 << _bits);

	// std::cout << "toFloat member function called " << toF << std::endl;

	return toF;
}
int	Fixed::toInt(void) const
{
	int	toI = (int)(this->_nb) / (int)(1 << _bits);

	// std::cout << "toInt member function called " << toI << std::endl;

	return toI;
}

/// out of Fixed class 

std::ostream & operator<<(std::ostream & o, Fixed const & rhs)
{
	o << rhs.toFloat();
	return o;
}
