/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmandel <pmandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 16:19:10 by pmandel           #+#    #+#             */
/*   Updated: 2022/04/20 16:19:11 by pmandel          ###   ########.fr       */
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
