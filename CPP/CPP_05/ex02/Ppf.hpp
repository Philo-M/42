/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ppf.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmandel <pmandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 16:11:36 by pmandel           #+#    #+#             */
/*   Updated: 2022/08/08 14:53:22 by pmandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PPF_HPP
#define PPF_HPP
// #include <string>
// #include <exception>
#include <iostream>
#include "Bureaucrat.hpp"
#include "AForm.hpp"

class AForm;

class Ppf: public AForm
{
	public:
		Ppf();
		Ppf(std::string const & target);
		Ppf(Ppf const & other);
		virtual ~Ppf();
		Ppf		& operator=(Ppf const & rhs);
		// virtual void	beSigned(Bureaucrat & theBureaucrat);
		virtual void	beExcuted() const;

	private:
		std::string	_target;
		
};

// Out of Ppf class

// std::ostream & operator<<(std::ostream & o, Ppf const & rhs);


#endif