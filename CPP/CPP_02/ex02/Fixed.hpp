/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmandel <pmandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 15:29:44 by pmandel           #+#    #+#             */
/*   Updated: 2022/04/19 15:41:54 by pmandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
#include <iostream>
#include <ostream>
#include <cmath>

class Fixed {
	
	public:

		Fixed();
		Fixed(const int nb_int);
		Fixed(const float nb_float);
		Fixed(Fixed const & other);
		~Fixed();
		Fixed	& operator=(Fixed const & rhs);
		Fixed	operator+(Fixed const & rhs);
		Fixed	operator-(Fixed const & rhs);
		Fixed	operator*(Fixed const & rhs);
		Fixed	operator/(Fixed const & rhs);
		Fixed	& operator++(void);
		Fixed	operator++(int);
		Fixed	& operator--(void);
		Fixed	operator--(int);
		bool	operator>(Fixed const & rhs) const;
		bool	operator<(Fixed const & rhs) const;
		bool	operator>=(Fixed const & rhs) const;
		bool	operator<=(Fixed const & rhs) const;
		bool	operator==(Fixed const & rhs) const;
		bool	operator!=(Fixed const & rhs) const;

		static	Fixed min(Fixed & lhs, Fixed & rhs);
		static	Fixed min(Fixed const & lhs, Fixed const & rhs);
		static	Fixed max(Fixed & lhs, Fixed & rhs);
		static	Fixed max(Fixed const & lhs, Fixed const & rhs);

		int	getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int	toInt(void) const;

	private:

		int					_nb;
		static const int	_bits = 8;
};

/// out of Fixed class 

std::ostream & operator<<(std::ostream & o, Fixed const & rhs);

#endif
