/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmandel <pmandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 14:19:34 by pmandel           #+#    #+#             */
/*   Updated: 2022/08/23 16:01:37 by pmandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

int	main()
{
	try
	{
		Bureaucrat theBuro1("Dino", 3);
		
		std::cout << std::endl;
		Bureaucrat theBuro2(theBuro1);
		
		std::cout << std::endl;
		Bureaucrat theBuro3("Robert", 5);

		std::cout << std::endl;
		theBuro3 = theBuro1;
	
		std::cout << std::endl;
		Bureaucrat theBuro4("Dino", 3);
		theBuro4.increment(1);
		// theBuro4.increment(5);
		
		std::cout << std::endl;
		Bureaucrat theBuro5("Dino", 140);
		std::cout << theBuro5 << std::endl;
		theBuro5.decrement(11);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}