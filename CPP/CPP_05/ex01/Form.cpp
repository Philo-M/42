/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmandel <pmandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 16:11:33 by pmandel           #+#    #+#             */
/*   Updated: 2022/07/26 19:20:45 by pmandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include <iostream>

	Form::Form(): _name("DefaultFormName"), _signature(false), _gradeForSign(150), _gradeForExecute(150)
	{
		std::cout << "Form Constructor with default values" << std::endl;
	}
	Form::Form(std::string const theName,
			int theGradeForSign, int theGradeForExecute):
			_name(theName), _signature(false),
			_gradeForSign(theGradeForSign), _gradeForExecute(theGradeForExecute)
	{
		if (theGradeForSign < 1)
		{
			std::cout << "Form Constructor failed because: ";
			throw Form::GradeTooHighException();
		}
		else if (theGradeForSign > 150)
		{
			std::cout << "Form Constructor failed because: ";
			throw Form::GradeTooLowException();
		}

		if (theGradeForExecute < 1)
		{
			std::cout << "Form Constructor failed because: ";
			throw Form::GradeTooHighException();
		}
		else if (theGradeForExecute > 150)
		{
			std::cout << "Form Constructor failed because: ";
			throw Form::GradeTooLowException();
		}
		std::cout << "Form Constructor with these name: " << _name << ", grade for sign: "
				<< _gradeForSign << " and grade for execute: " << _gradeForExecute << std::endl;
	}
	Form::Form(Form const & other): _name(other._name), _signature(other._signature), 
			_gradeForSign(other._gradeForSign), _gradeForExecute(other._gradeForExecute)
	{
		std::cout << "Form with these name: " << _name << ", grade for sign: "
				<< _gradeForSign << ", grade for execute: " << _gradeForExecute << 
				" and signature " << _signature << " was copied" << std::endl;
	}
	Form::~Form()
	{
		std::cout << "Form Destructor" << std::endl;
	}
	Form	& Form::operator=(Form const & rhs)
	{
		if (this != &rhs)
		{
			this->_signature = rhs._signature;
			std::cout << "Only signature: " << _signature <<
					" was affected (other parameters are constants)" << std::endl;
		}
		else
			std::cout << "You cannot affect a form to the same form" << std::endl;
		return *this;
	}
	std::string	Form::getName() const
	{
		return(_name);
	}
	int		Form::getSignature() const
	{
		return(_signature);
	}
	int		Form::getGradeForSign() const
	{
		return(_gradeForSign);
	}
	int		Form::getGradeForExecute() const
	{
		return(_gradeForExecute);
	}
	void	Form::beSigned(Bureaucrat & theBureaucrat)
	{
		if (_signature == true)
			throw Form::AlreadySignedException();
		if (theBureaucrat.getGrade() > this->_gradeForSign)
			throw Form::GradeTooLowException();
		_signature = true;
	}

// Out of Form class

std::ostream & operator<<(std::ostream & o, Form const & rhs)
{
	o << rhs.getName() << ", form grade for sign " << rhs.getGradeForSign() <<
			", form grade for execute " << rhs.getGradeForExecute() <<
			", form signature " << rhs.getSignature() << ".";
	return o;
}

