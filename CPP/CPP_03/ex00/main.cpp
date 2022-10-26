/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmandel <pmandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 11:18:54 by pmandel           #+#    #+#             */
/*   Updated: 2022/05/03 14:50:15 by pmandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap Robert("Robert");
	std::cout << "Robert name: " << Robert.getName() << std::endl;
	std::cout << "Robert energy points: " << Robert.getEnergyPoints() << std::endl;

	ClapTrap Robert2(Robert);
	std::cout << "Robert2's initial name is: " << Robert2.getName() << std::endl;
	std::cout << "Robert2 energy points: " << Robert2.getEnergyPoints() << std::endl;

	ClapTrap Robert3;
	std::cout << "Robert3's initial name is: " << Robert3.getName() << std::endl;
	std::cout << "Robert3 energy points: " << Robert3.getEnergyPoints() << std::endl;
	Robert3 = Robert;
	std::cout << "Robert3's name now is: " << Robert3.getName() << std::endl;

	Robert.attack("Dino");
	Robert.attack("Dino");
	Robert.attack("Dino");
	Robert.attack("Dino");
	Robert.takeDamage(3);
	Robert.attack("Dino");
	Robert.attack("Dino");
	Robert.beRepaired(5);
	Robert.attack("Dino");
	Robert.attack("Dino");
	Robert.attack("Dino");
	Robert.attack("Dino");
	Robert.takeDamage(30);
	Robert.attack("Dino");
	Robert.beRepaired(5);
	
	return 0;
}