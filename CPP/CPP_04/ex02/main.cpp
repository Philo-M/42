/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmandel <pmandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 14:44:12 by pmandel           #+#    #+#             */
/*   Updated: 2022/08/09 18:36:43 by pmandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"
#include <iostream>

// int main()
// {
	
// 	AAnimal TheAnimal;
	
// 		return 0;
// }

int main()
{
	{
		Dog basic;
		Dog tmp(basic);
		std::cout << tmp.getIdea(5) << std::endl;
		std::cout << basic.getIdea(3) << std::endl;
	}
	{
		std::cout << std::endl;
		std::cout << std::endl;
		
		const AAnimal* j = new Dog();
		const AAnimal* i = new Cat();
		
		delete j;//should not create a leak
		delete i;
	}
	{
		std::cout << std::endl;
		std::cout << std::endl;

		Cat basic;
		Cat super;
			
		basic.setIdea("Special idea");
			
		super = basic;
	
		std::cout << super.getIdea(5) << std::endl;
		
	}
	{
		std::cout << std::endl;
		std::cout << std::endl;

		AAnimal* animals[6];
		
		for (int i = 0; i < 3; i++)
			animals[i] = new Dog();
		for (int i = 3; i < 6; i++)
			animals[i] = new Cat();

		for (int i = 0; i < 6; i++)
			delete animals[i];

	}
	return 0;
}



