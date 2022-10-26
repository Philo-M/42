/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmandel <pmandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 14:19:34 by pmandel           #+#    #+#             */
/*   Updated: 2022/08/24 16:46:18 by pmandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "Scf.hpp"
#include "Rrf.hpp"
#include "Ppf.hpp"


#include <iostream>
#include <typeinfo>

int	main()
{
	try
	{
		std::cout << std::endl;
		Ppf	Ppf1;
		std::cout << Ppf1 << std::endl;
		
		std::cout << std::endl;
		Ppf	Ppf2("target2");
		std::cout << Ppf2 << std::endl;

		std::cout << std::endl;
		Ppf	Ppf3(Ppf1);
		std::cout << Ppf3 << std::endl;

		std::cout << std::endl;
		Ppf	Ppf4("target4");
		Ppf4 = Ppf2;
		std::cout << Ppf4 << std::endl;

	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	
	std::cout << std::endl;
	try
	{
		std::cout << std::endl;
		Bureaucrat	Buro1("Dino1", 122);
		Ppf	Ppf1("target1");
		Buro1.signForm(Ppf1);
		Buro1.executeForm(Ppf1);
		
		std::cout << std::endl;
			
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	
	std::cout << std::endl;
	try
	{
		std::cout << std::endl;
		Bureaucrat	Buro2("Dino2", 20);
		Ppf	Ppf2("target2");
		Buro2.signForm(Ppf2);
		Buro2.executeForm(Ppf2);
		
		std::cout << std::endl;
			
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
	try
	{
		std::cout << std::endl;
		Bureaucrat	Buro3("Dino3", 4);
		Ppf	Ppf3("target3");
		Buro3.signForm(Ppf3);
		Buro3.executeForm(Ppf3);
		
		std::cout << std::endl;
			
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
	try
	{
		std::cout << std::endl;
		Bureaucrat	Buro4("Dino4", 4);
		Scf	Scf4("target4");
		Buro4.signForm(Scf4);
		Buro4.executeForm(Scf4);
		
		std::cout << std::endl;
			
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
	try
	{
		std::cout << std::endl;
		Bureaucrat	Buro5("Dino5", 4);
		Rrf	Rrf5("target5");
		Buro5.signForm(Rrf5);
		Buro5.executeForm(Rrf5);
		
		std::cout << std::endl;
			
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	
}
