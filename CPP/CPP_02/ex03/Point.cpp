/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmandel <pmandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 14:28:03 by pmandel           #+#    #+#             */
/*   Updated: 2022/04/21 13:05:54 by pmandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

Point::Point(): _x(0), _y(0)
{
	// std::cout << "Point: Default constructor called" << std::endl;
}
Point::Point(float x, float y): _x(Fixed(x)), _y(Fixed(y))
{
	// std::cout << "Point: Float constructor called" << std::endl;
}
Point::Point(Point const & other): _x(other.getx()), _y(other.gety())
{
	// std::cout << "Point: Copy constructor called" << std::endl;
}
Point::~Point()
{
	// std::cout << "Point: Destructor called" << std::endl;
}
Point	& Point::operator=(Point const & rhs)
{
	// std::cout << "Point: Affectation operator overload called" << std::endl;
	(void)rhs;
	return *this;
}


/// member functions

Fixed	 Point::getx(void) const
{
	// std::cout << "getx called" << std::endl;

	return this->_x;
}
Fixed	 Point::gety(void) const
{
	// std::cout << "gety called" << std::endl;

	return this->_y;
}

