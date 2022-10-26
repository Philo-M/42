/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Rrf.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmandel <pmandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 16:11:36 by pmandel           #+#    #+#             */
/*   Updated: 2022/08/08 14:53:17 by pmandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RRF_HPP
#define RRF_HPP
// #include <string>
// #include <exception>
#include <iostream>
#include "Bureaucrat.hpp"
#include "AForm.hpp"

class AForm;

class Rrf: public AForm
{
	public:
		Rrf();
		Rrf(std::string const & target);
		Rrf(Rrf const & other);
		virtual ~Rrf();
		Rrf		& operator=(Rrf const & rhs);
		// virtual void	beSigned(Bureaucrat & theBureaucrat);
		virtual void	beExcuted() const;

	private:
		std::string	_target;
		
};

// Out of Rrf class

// std::ostream & operator<<(std::ostream & o, Rrf const & rhs);


#endif