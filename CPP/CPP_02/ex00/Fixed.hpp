/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmandel <pmandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 16:18:52 by pmandel           #+#    #+#             */
/*   Updated: 2022/04/28 14:48:04 by pmandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed {
	
	public:

		Fixed();
		Fixed(Fixed const & other);
		~Fixed();
		Fixed	& operator=(Fixed const & rhs);
		int	getRawBits(void) const;
		void	setRawBits(int const raw);

	private:

		int					_nb;
		static const int	_bits = 8;
};

#endif
