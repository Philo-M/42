/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmandel <pmandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 16:11:36 by pmandel           #+#    #+#             */
/*   Updated: 2022/08/04 17:31:37 by pmandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "AForm.hpp"

class AForm;

class Bureaucrat
{
	public:
		Bureaucrat();
		Bureaucrat(std::string const theName, int theGrade);
		Bureaucrat(Bureaucrat const & other);
		virtual ~Bureaucrat();
		Bureaucrat	& operator=(Bureaucrat const & rhs);
		std::string	getName() const;
		int			getGrade() const;
		void		increment(int value);
		void		decrement(int value);
		void		signForm(AForm & theForm);
		void		executeForm(AForm const & theForm);

		class GradeTooHighException: public std::exception
		{
			virtual const char* what() const throw()
			{
				return ("Grade too high");
			}
		};
		
		class GradeTooLowException: public std::exception
		{
			virtual const char* what() const throw()
			{
				return ("Grade too low");
			}
		};

	protected:
		std::string	const _name;
		int			_grade;
		
};

// Out of Bureaucrat class

std::ostream & operator<<(std::ostream & o, Bureaucrat const & rhs);


#endif