/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmandel <pmandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 14:28:30 by pmandel           #+#    #+#             */
/*   Updated: 2022/04/21 13:05:34 by pmandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP
#include "Fixed.hpp"

class Point {
	
	public:

		Point();
		Point(float x, float y);
		Point(Point const & other);
		~Point();
		Point	& operator=(Point const & rhs);

		/// member fuctions
		
		Fixed	getx(void) const;
		Fixed	gety(void) const;

	private:

		Fixed	const _x;
		Fixed	const _y;
};

#endif
