/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmandel <pmandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 16:11:33 by pmandel           #+#    #+#             */
/*   Updated: 2022/08/04 17:09:07 by pmandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

	Bureaucrat::Bureaucrat(): _name("DefaultBureaucratName"), _grade(150)
	{
		std::cout << "Bureaucrat Constructor with default values" << std::endl;
	}
	Bureaucrat::Bureaucrat(std::string const theName, int theGrade): _name(theName)
	{
		if (theGrade >= 1 && theGrade <= 150)
		{
			_grade = theGrade;
			std::cout << "Constructor with these name: " << _name << " and grade: "
					<< _grade << std::endl;
		}
		else if (theGrade < 1)
		{
			std::cout << "Bureaucrat Constructor failed because: ";
			throw Bureaucrat::GradeTooHighException();
		}
		else
		{
			std::cout << "Bureaucrat Constructor failed because: ";
			throw Bureaucrat::GradeTooLowException();
		}
	}
	Bureaucrat::Bureaucrat(Bureaucrat const & other): _name(other._name), _grade(other._grade)
	{
		std::cout << "Bureaucrat with these name: " << _name << " and grade: "
				<< _grade << " was copied" << std::endl;
	}
	Bureaucrat::~Bureaucrat()
	{
		std::cout << "Bureaucrat Destructor" << std::endl;
	}
	Bureaucrat	& Bureaucrat::operator=(Bureaucrat const & rhs)
	{
		if (this != &rhs)
		{
			this->_grade = rhs._grade;
			std::cout << "Only grade: "	<< _grade <<
					" was affected (name is a constant)" << std::endl;
		}
		else
			std::cout << "You cannot affect a bureaucrat to the same bureaucrat" << std::endl;
		return *this;
	}
	std::string	Bureaucrat::getName() const
	{
		return(_name);
	}
	int	Bureaucrat::getGrade() const
	{

		return(_grade);
	}
	void	Bureaucrat::increment(int value)
	{
		if (_grade - value >= 1 && _grade - value <= 150)
		{
			_grade = _grade - value;
			std::cout << "The new grade is: " << _grade << std::endl;
		}
		else if (_grade - value < 1)
			throw Bureaucrat::GradeTooHighException();
		else
			throw Bureaucrat::GradeTooLowException();
	}
	void	Bureaucrat::decrement(int value)
	{
		if (_grade + value >= 1 && _grade + value <= 150)
		{
			_grade = _grade + value;
			std::cout << "The new grade is: " << _grade << std::endl;
		}
		else if (_grade + value < 1)
			throw Bureaucrat::GradeTooHighException();
		else
			throw Bureaucrat::GradeTooLowException();
	}

// Out of Bureaucrat class

std::ostream & operator<<(std::ostream & o, Bureaucrat const & rhs)
{
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << ".";
	return o;
}

