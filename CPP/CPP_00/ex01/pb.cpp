/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.cpp                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmandel <pmandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 18:25:21 by pmandel           #+#    #+#             */
/*   Updated: 2022/04/04 14:43:53 by pmandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main()
{
	PhoneBook	book;
	int	index(-1);
	int max(-1);
	int	i(0);
	std::string command("");

	while (command != "EXIT")
	{
		std::cout << "Saisissez votre commande (ADD, SEARCH, EXIT) :" << std::endl;
		std::getline(std::cin, command);
		if (command == "ADD")
		{
			index++;
			if (index == 8)
				index = 0;
			if (max < index)
				max = index;
			book.setContact(index);
		}
		else if (command == "SEARCH")
		{
			if (max < 0)
				std::cout << "Le repertoire est vide. ";
			else
			{
				std::cout << "     INDEX|    PRENOM|       NOM|    SURNOM|" << std::endl;
				for (i = 0; i <= max; i++)
					book.printContactLine(i);
				std::cout << "Saisissez l'index du contact a afficher :" << std::endl;
				std::getline(std::cin, command);
				while (!(command.length() == 1 && command[0] <= max + '0' + 1 &&
						command[0] >= '1' && command[0] <= '8'))
				{
					std::cout << "Index incorrect. Saisissez l'index du contact a afficher :" << std::endl;
					std::getline(std::cin, command);
				}
				book.printContactAll(command[0] - '0' - 1);
			}
		}
		else if (command == "EXIT")
			break;
		else
			std::cout << "Commande ignoree. ";
	}
	return 0;
}
