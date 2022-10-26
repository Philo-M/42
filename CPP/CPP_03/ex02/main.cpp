/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmandel <pmandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 11:18:54 by pmandel           #+#    #+#             */
/*   Updated: 2022/05/03 17:26:42 by pmandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	ClapTrap Robert("Robert");
	FragTrap Henry;
	std::cout << "Henry intial name: " << Henry.getName() << std::endl;
	std::cout << "Henry energy points: " << Henry.getEnergyPoints() << std::endl;
	Henry.setName("Henry");
	Henry.setEnergyPoints(7);
	std::cout << "Henry new name: " << Henry.getName() << std::endl;
	std::cout << "Henry energy points: " << Henry.getEnergyPoints() << std::endl;
	std::cout << std::endl;

	FragTrap Henry2(Henry);
	Henry2.setName("Henry2");
	std::cout << "Henry2 name: " << Henry2.getName() << std::endl;
	std::cout << "Henry2 energy points: " << Henry2.getEnergyPoints() << std::endl;
	std::cout << std::endl;

	FragTrap Henry3;
	Henry3 = Henry;
	std::cout << "Henry3 name: " << Henry3.getName() << std::endl;
	std::cout << "Henry3 energy points: " << Henry3.getEnergyPoints() << std::endl;
	std::cout << std::endl;

	FragTrap Henry4("Henry4");
	std::cout << "Henry4 name: " << Henry4.getName() << std::endl;
	std::cout << "Henry4 energy points: " << Henry4.getEnergyPoints() << std::endl;
	std::cout << std::endl;

	Henry4.attack("Dino");
	Henry4.attack("Dino");
	Henry4.takeDamage(3);
	Henry4.attack("Dino");
	Henry4.beRepaired(5);
	Henry4.attack("Dino");
	Henry4.attack("Dino");
	std::cout << std::endl;
	
	Henry4.highFivesGuys();
	Henry4.attack("Dino");
	Henry4.attack("Dino");
	std::cout << std::endl;
	
	Henry4.highFivesGuys();
	Henry4.attack("Dino");
	Henry4.takeDamage(30);
	Henry4.attack("Dino");
	Henry4.beRepaired(5);
	std::cout << std::endl;

	return 0;
}