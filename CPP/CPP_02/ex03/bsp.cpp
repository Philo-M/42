/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmandel <pmandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 13:04:09 by pmandel           #+#    #+#             */
/*   Updated: 2022/04/28 14:57:56 by pmandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsp.h"

/// Pour une abscisse x, calcule f(x) sur la droite ab
Fixed	fx(Fixed const x , Point const a, Point const b)
{
	return (((b.gety() - a.gety()) / (b.getx() - a.getx())) * x 
			+ (b.gety() - ((b.gety() - a.gety()) / (b.getx() - a.getx())) * b.getx()));
}

/// Check si point1 et point2 sont tous deux du meme cote de la droite ab
bool	sup_or_inf(Point const a, Point const b, Point const point1, Point const point2)
{
	/// dans le cas ou a et b n'ont pas la meme abscisse
	if (a.getx() != b.getx() &&
			((point1.gety() > fx(point1.getx(), a, b) && point2.gety() > fx(point2.getx(), a, b)) ||
			(point1.gety() < fx(point1.getx(), a, b) && point2.gety() < fx(point2.getx(), a, b))))
		return true;
	/// dans le cas ou a et b ont la meme abscisse
	else if (a.getx() == b.getx() &&
			((point1.getx() > a.getx() && point2.getx() > a.getx()) ||
			(point1.getx() < a.getx() && point2.getx() < a.getx())))
		return true;
	else
		return false;
}
/// Check si point est dans le triangle forme par a, b et c
bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	if (sup_or_inf(a, b, c, point) == true && sup_or_inf(a, c, b, point) == true && 
			sup_or_inf(b, c, a, point) == true)
		return true;
	else
		return false;
}
