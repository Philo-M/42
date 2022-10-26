/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmandel <pmandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 16:11:33 by pmandel           #+#    #+#             */
/*   Updated: 2022/08/25 15:23:20 by pmandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include <iostream>

	AForm::AForm(): _name("DefaultFormName"), _signature(false), _gradeForSign(150), _gradeForExecute(150)
	{
		std::cout << "Form Constructor with default values" << std::endl;
	}
	AForm::AForm(std::string const theName,
			int theGradeForSign, int theGradeForExecute):
			_name(theName), _signature(false),
			_gradeForSign(theGradeForSign), _gradeForExecute(theGradeForExecute)
	{
		if (theGradeForSign < 1)
		{
			std::cout << "Form Constructor failed because: ";
			throw AForm::GradeTooHighException();
		}
		else if (theGradeForSign > 150)
		{
			std::cout << "Form Constructor failed because: ";
			throw AForm::GradeTooLowException();
		}
		if (theGradeForExecute < 1)
		{
			std::cout << "Form Constructor failed because: ";
			throw AForm::GradeTooHighException();
		}
		else if (theGradeForExecute > 150)
		{
			std::cout << "Form Constructor failed because: ";
			throw AForm::GradeTooLowException();
		}
		std::cout << "Form Constructor with these name: " << _name << ", grade for sign: "
				<< _gradeForSign << " and grade for execute: " << _gradeForExecute << std::endl;
	}
	AForm::AForm(AForm const & other): _name(other._name), _signature(other._signature),
			_gradeForSign(other._gradeForSign), _gradeForExecute(other._gradeForExecute)
	{
		std::cout << "Form with these name: " << _name << ", grade for sign: "
				<< _gradeForSign << ", grade for execute: " << _gradeForExecute << 
				" and signature " << _signature << " was copied" << std::endl;
	}
	AForm::~AForm()
	{
		std::cout << "Form Destructor" << std::endl;
	}
	AForm	& AForm::operator=(AForm const & rhs)
	{
		if (this != &rhs)
		{
			this->_signature = rhs._signature;
			std::cout << "Only signature " << _signature <<
					" was affected (other parameters are constants)" << std::endl;
		}
		else
			std::cout << "You cannot affect a form to the same form" << std::endl;
		return *this;
	}
	std::string	AForm::getName() const
	{
		return(_name);
	}
	int		AForm::getSignature() const
	{
		return(_signature);
	}
	int		AForm::getGradeForSign() const
	{
		return(_gradeForSign);
	}
	int		AForm::getGradeForExecute() const
	{
		return(_gradeForExecute);
	}
	void	AForm::setSignatureTrue()
	{
		_signature = true;
	}
	void	AForm::setSignatureFalse()
	{
		_signature = false;
	}
	void	AForm::beSigned(Bureaucrat & theBureaucrat)
	{
		if (_signature == true)
			throw AForm::AlreadySignedException();
		if (theBureaucrat.getGrade() > this->_gradeForSign)
			throw AForm::GradeTooLowException();
		_signature = true;
	}
	void	AForm::execute(Bureaucrat const & executor) const
	{
		if (_signature == false)
			throw AForm::NotSignedException();
		if (executor.getGrade() > this->_gradeForExecute)
			throw AForm::GradeTooLowException();
		this->beExcuted();
	}
	void	AForm::beExcuted() const
	{

	}


// Out of AForm class

std::ostream & operator<<(std::ostream & o, AForm const & rhs)
{
	o << rhs.getName() << ", form grade for sign " << rhs.getGradeForSign() <<
			", form grade for execute " << rhs.getGradeForExecute() <<
			", form signature " << rhs.getSignature() << ".";
	return o;
}

