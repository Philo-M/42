/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmandel <pmandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 16:11:33 by pmandel           #+#    #+#             */
/*   Updated: 2022/08/25 17:37:30 by pmandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include <iostream>

	Intern::Intern()
	{
		std::cout << "Intern Default Constructor" << std::endl;
	}
	Intern::Intern(Intern const & other)
	{
		(void)other;
		std::cout << "The intern was copied" << std::endl;
	}
	Intern::~Intern()
	{
		std::cout << "Intern Destructor" << std::endl;
	}
	Intern	& Intern::operator=(Intern const & rhs)
	{
		if (this != &rhs)
		{
			*this = rhs;
			std::cout << "Intern was affected" << std::endl;
		}
		else
			std::cout << "You cannot affect an intern to the same intern" << std::endl;
		return *this;
	}
	AForm*	Intern::scfConstructor(std::string target)
	{
		return(new Scf(target));
	}
	AForm*	Intern::rrfConstructor(std::string target)
	{
		return(new Rrf(target));
	}
	AForm*	Intern::ppfConstructor(std::string target)
	{
		return(new Ppf(target));
	}
	AForm*	Intern::makeForm(std::string theName, std::string target)
	{
		AForm* (Intern::*ptr[3])(std::string target) = 
				{&Intern::scfConstructor, &Intern::rrfConstructor, &Intern::ppfConstructor};

		std::string formModel[3] =
				{"ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"};
		
		for (int i = 0; i < 3; i++)
		{
			if (theName == formModel[i])
			{
				std::cout << "Intern creates " << theName << std::endl;
				return((this->*ptr[i])(target));
			}
		}
		std::cout << "The form name is uncorrect" << std::endl;
		return (0);
	}