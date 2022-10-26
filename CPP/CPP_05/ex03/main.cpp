/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmandel <pmandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 14:19:34 by pmandel           #+#    #+#             */
/*   Updated: 2022/08/25 17:26:48 by pmandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "Scf.hpp"
#include "Rrf.hpp"
#include "Ppf.hpp"
#include "Intern.hpp"


#include <iostream>
#include <typeinfo>

int	main()
{
	try
	{
		Intern	Intern1;
		AForm* ptr;
		
		ptr = Intern1.makeForm("ShrubberyCreationForm", "theTarget1");
		
		if (ptr)
		{
			std::cout << *ptr << std::endl;

			Bureaucrat	Buro("Dino", 4);
			Buro.signForm(*ptr);
			Buro.executeForm(*ptr);
			delete ptr;

		}
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	
	std::cout << std::endl;

	try
	{
		Intern	Intern1;
		AForm* ptr;
		
		ptr = Intern1.makeForm("RobotomyRequestForm", "theTarget2");
		
		if (ptr)
		{
			std::cout << *ptr << std::endl;

			Bureaucrat	Buro("Dino", 4);
			Buro.signForm(*ptr);
			Buro.executeForm(*ptr);
			delete ptr;

		}
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	try
	{
		Intern	Intern1;
		AForm* ptr;
		
		ptr = Intern1.makeForm("PresidentialPardonForm", "theTarget3");
		
		if (ptr)
		{
			std::cout << *ptr << std::endl;

			Bureaucrat	Buro("Dino", 4);
			Buro.signForm(*ptr);
			Buro.executeForm(*ptr);
			delete ptr;

		}
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	try
	{
		Intern	Intern1;
		AForm* ptr;
		
		ptr = Intern1.makeForm("QWERasdasdaTY", "theTarget4");
		
		if (ptr)
		{
			std::cout << *ptr << std::endl;

			Bureaucrat	Buro("Dino", 4);
			Buro.signForm(*ptr);
			Buro.executeForm(*ptr);
			delete ptr;

		}
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	
}
