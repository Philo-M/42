/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scf.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmandel <pmandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 16:11:36 by pmandel           #+#    #+#             */
/*   Updated: 2022/08/08 14:48:31 by pmandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCF_HPP
#define SCF_HPP
// #include <string>
// #include <exception>
#include <iostream>
#include "Bureaucrat.hpp"
#include "AForm.hpp"

class AForm;

class Scf: public AForm
{
	public:
		Scf();
		Scf(std::string const & target);
		Scf(Scf const & other);
		virtual ~Scf();
		Scf		& operator=(Scf const & rhs);
		// virtual void	beSigned(Bureaucrat & theBureaucrat);
		virtual void	beExcuted() const;

		class NoShrubberyException: public std::exception
		{
			virtual const char* what() const throw()
			{
				return ("The file could not be created");
			}
		};

	private:
		std::string	_target;
		
};

// Out of Scf class

// std::ostream & operator<<(std::ostream & o, Scf const & rhs);


#endif