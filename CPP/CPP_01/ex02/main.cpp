/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmandel <pmandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 12:16:12 by pmandel           #+#    #+#             */
/*   Updated: 2022/04/06 10:12:52 by pmandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <cstdio>

int	main()
{
	std::string 	str = "HI THIS IS BRAIN";
	std::string*	stringPTR = &str;
	std::string&	stringREF = str;

	std::cout << "Adresse de la string en mémoire : " << &str << std::endl;
	std::cout << "Adresse stockée dans stringPTR : " << stringPTR << std::endl; 
	std::cout << "Adresse stockée dans stringREF : " << &stringREF << std::endl;

	std::cout << std::endl;
	std::cout << "Valeur de la string : " << str << std::endl; 
	std::cout << "Valeur pointée par stringPTR : " << *stringPTR << std::endl; 
	std::cout << "Valeur pointée par stringREF : " << stringREF << std::endl;

	return 0;

}
