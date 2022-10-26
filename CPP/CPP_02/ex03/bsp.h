/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmandel <pmandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 13:04:48 by pmandel           #+#    #+#             */
/*   Updated: 2022/04/21 13:06:52 by pmandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSP_HPP
# define BSP_HPP
#include "Fixed.hpp"
#include "Point.hpp"

Fixed	fx(Fixed const x , Point const a, Point const b);
bool	sup_or_inf(Point const a, Point const b, Point const point1, Point const point2);
bool	bsp(Point const a, Point const b, Point const c, Point const point);


#endif