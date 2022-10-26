/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmandel <pmandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 14:19:34 by pmandel           #+#    #+#             */
/*   Updated: 2022/08/23 17:29:37 by pmandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>
#include <typeinfo>

int	main()
{
	try
	{
		Form theForm1("theForm1", 50, 12);
		std::cout << theForm1 << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	
	std::cout << std::endl;
	try
	{
		Form theForm2("theForm2", 155, 12);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	
	std::cout << std::endl;
	try
	{
		Form theForm3("theForm3", 50, 0);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
	try
	{
		Bureaucrat theBuro4("theBuro4", 15);
		Form theForm4("theForm4", 50, 25);
		theForm4.beSigned(theBuro4);
		std::cout << theForm4 << std::endl;

	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
	try
	{
		Bureaucrat theBuro5("theBuro5", 55);
		Form theForm5("theForm5", 50, 25);
		theForm5.beSigned(theBuro5);
		std::cout << theForm5 << std::endl;

	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
	try
	{
		Bureaucrat theBuro6("theBuro6", 65);
		Form theForm6("theForm6", 50, 25);
		theBuro6.signForm(theForm6);
		std::cout << theForm6 << std::endl;

	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
	try
	{
		Bureaucrat theBuro7("theBuro7", 22);
		Form theForm7("theForm7", 50, 25);
		theBuro7.signForm(theForm7);
		std::cout << theForm7 << std::endl;

	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
	try
	{
		Bureaucrat theBuro8("theBuro8", 22);
		Form theForm8("theForm8", 50, 25);
		theForm8.beSigned(theBuro8);
		theBuro8.signForm(theForm8);
		std::cout << theForm8 << std::endl;

	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
	try
	{
		Bureaucrat theBuro9("theBuro9", 123);
		Form theForm9("theForm9", 50, 25);
		theBuro9.signForm(theForm9);
		std::cout << theForm9 << std::endl;

	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}
