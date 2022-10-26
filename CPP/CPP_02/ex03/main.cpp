/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmandel <pmandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 15:29:50 by pmandel           #+#    #+#             */
/*   Updated: 2022/04/28 14:56:03 by pmandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"
#include "bsp.h"
#include <iostream>

int main( void ) {

	{
		/// point dans le triangle forme par a, b et c	
		Point	a(1, 1);
		Point	b(4, 4);
		Point	c(5, 2);
		Point	point(4, 2);
		bool	result(bsp(a, b, c, point));
		
		if (result == false)
			std::cout << "Your point is out of the triangle." << std::endl;
		else if (result == true)
			std::cout << "Your point is in the triangle." << std::endl;
		else
			std::cout << "Unexpected behavior." << std::endl;
	}
	// {
	// 	/// point hors du triangle forme par a, b et c	
	// 	Point	a(1, 1);
	// 	Point	b(4, 4);
	// 	Point	c(5, 2);
	// 	Point	point(4, 1);
	// 	bool	result(bsp(a, b, c, point));
		
	// 	if (result == false)
	// 		std::cout << "Your point is out of the triangle." << std::endl;
	// 	else if (result == true)
	// 		std::cout << "Your point is in the triangle." << std::endl;
	// 	else
	// 		std::cout << "Unexpected behavior." << std::endl;
	// }
	// {
	// 	/// point dans le triangle rectangle (a et b avec meme abscisse) forme par a, b et c	
	// 	Point	a(2, 1);
	// 	Point	b(2, 3);
	// 	Point	c(6, 1);
	// 	Point	point(3, 2);
	// 	bool	result(bsp(a, b, c, point));
		
	// 	if (result == false)
	// 		std::cout << "Your point is out of the triangle." << std::endl;
	// 	else if (result == true)
	// 		std::cout << "Your point is in the triangle." << std::endl;
	// 	else
	// 		std::cout << "Unexpected behavior." << std::endl;
	// }
	// {
	// 	/// point dans le triangle rectangle (a et b avec meme abscisse) forme par a, b et c	
	// 	Point	a(2, 1);
	// 	Point	b(2, 3);
	// 	Point	c(6, 1);
	// 	Point	point(3, 3);
	// 	bool	result(bsp(a, b, c, point));
		
	// 	if (result == false)
	// 		std::cout << "Your point is out of the triangle." << std::endl;
	// 	else if (result == true)
	// 		std::cout << "Your point is in the triangle." << std::endl;
	// 	else
	// 		std::cout << "Unexpected behavior." << std::endl;
	// }
	return 0;
}