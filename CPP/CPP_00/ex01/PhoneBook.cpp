/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmandel <pmandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 12:04:11 by pmandel           #+#    #+#             */
/*   Updated: 2022/04/04 14:52:35 by pmandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{

}
PhoneBook::~PhoneBook()
{

}
void	PhoneBook::setContact(int i)
{
	people[i].setIndex(i);
	people[i].setFirst();
	people[i].setLast();
	people[i].setNick();
	people[i].setTel();
	people[i].setSecret();
}
void	PhoneBook::printInfo10(std::string	str)
{
	int	size(str.length());
	int	i;

	if (size <= 10)
	{
		for (i = 0; i < 10 - size ; i++)
			std::cout << " ";
		std::cout << str;
	}
	else
	{
		for (i = 0; i < 9; i++)
			std::cout << str[i];
		std::cout << ".";
	}
}
void	PhoneBook::printContactLine(int i)
{
	std::cout << "         " << i + 1 << "|";
	printInfo10(people[i].getFirst());
	std::cout << "|";
	printInfo10(people[i].getLast());
	std::cout << "|";
	printInfo10(people[i].getNick());
	std::cout << "|" << std::endl;
}
void	PhoneBook::printContactAll(int i)
{
	std::cout << "PRENOM     : " << people[i].getFirst() << std::endl;
	std::cout << "NOM        : " << people[i].getLast() << std::endl;
	std::cout << "SURNOM     : " << people[i].getNick() << std::endl;
	std::cout << "TELEPHONE  : " << people[i].getTel() << std::endl;
	std::cout << "SECRET     : " << people[i].getSecret() << std::endl;
}
