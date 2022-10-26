/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmandel <pmandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 16:11:36 by pmandel           #+#    #+#             */
/*   Updated: 2022/08/08 14:20:11 by pmandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	public:
		Form();
		Form(std::string const theName, int theGradeForSign, int theGradeForExecute);
		Form(Form const & other);
		virtual ~Form();
		Form		& operator=(Form const & rhs);
		std::string	getName() const;
		int			getSignature() const;
		int			getGradeForSign() const;
		int			getGradeForExecute() const;
		
		void		beSigned(Bureaucrat & theBureaucrat);
		
		class GradeTooHighException: public std::exception
		{
			const char* what() const throw()
			{
				return ("The grade is too high");
			}
		};
		
		class GradeTooLowException: public std::exception
		{
			const char* what() const throw()
			{
				return ("The grade is too low");
			}
		};

		class AlreadySignedException: public std::exception
		{
			const char* what() const throw()
			{
				return ("The form is already signed");
			}
		};

	private:
		std::string	const _name;
		bool		_signature;
		int			const _gradeForSign;
		int			const _gradeForExecute;
		
};

// Out of Form class

std::ostream & operator<<(std::ostream & o, Form const & rhs);


#endif