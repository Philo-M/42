/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmandel <pmandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 14:44:12 by pmandel           #+#    #+#             */
/*   Updated: 2022/08/08 19:10:09 by pmandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>


int main()
{
	{
		const Animal* meta = new Animal();
		const Animal* i = new Cat();
		const Animal* j = new Dog();
		
		std::cout << meta->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		std::cout << j->getType() << " " << std::endl;

		meta->makeSound();
		i->makeSound(); //will output the cat sound!
		j->makeSound();

		delete meta;
		delete i;
		delete j;
	}
	{
		std::cout << std::endl;
		
		Animal meta;
		Animal meta2(meta);
		Animal meta3;
		meta3 = meta;

		const Cat i;
		Cat i2(i);
		Cat i3;
		i3 = i;

		
		std::cout << meta.getType() << " " << std::endl;
		std::cout << meta2.getType() << " " << std::endl;
		std::cout << meta3.getType() << " " << std::endl;

		std::cout << i.getType() << " " << std::endl;
		std::cout << i2.getType() << " " << std::endl;
		std::cout << i3.getType() << " " << std::endl;

		meta.makeSound();
		meta2.makeSound();
		meta3.makeSound();

		i.makeSound();
		i2.makeSound();
		i3.makeSound();	
	}
	{
		std::cout << std::endl;
		const WrongAnimal* meta = new WrongAnimal();
		const WrongAnimal* i = new WrongCat();
		const WrongCat* k = new WrongCat();
		
		std::cout << meta->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		std::cout << k->getType() << " " << std::endl;

		meta->makeSound();
		i->makeSound(); //will not output the wrongcat sound!
		k->makeSound(); //will  output the wrongcat sound!

		delete meta;
		delete i;
		delete k;
		
	}
}