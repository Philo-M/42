/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmandel <pmandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 12:04:14 by pmandel           #+#    #+#             */
/*   Updated: 2022/03/21 11:09:29 by pmandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{

}
Contact::~Contact()
{
	
}
void	Contact::setIndex(int i)
{
	index = i;
}
void	Contact::setFirst()
{
	std::string command("");
	std::cout << "Saisissez le prenom :" << std::endl;
	std::getline(std::cin, command);
	while (command == "")
	{
		std::cout << "Ce champ ne peut etre vide. Saisissez le prenom :" << std::endl;
		std::getline(std::cin, command);
	}
	first = command;
}
void	Contact::setLast()
{
	std::string command("");
	std::cout << "Saisissez le nom :" << std::endl;
	std::getline(std::cin, command);
	while (command == "")
	{
		std::cout << "Ce champ ne peut etre vide. Saisissez le nom :" << std::endl;
		std::getline(std::cin, command);
	}
	last = command;
}
void	Contact::setNick()
{
	std::string command("");
	std::cout << "Saisissez le surnom :" << std::endl;
	std::getline(std::cin, command);
	while (command == "")
	{
		std::cout << "Ce champ ne peut etre vide. Saisissez le surnom :" << std::endl;
		std::getline(std::cin, command);
	}
	nick = command;
}
void	Contact::setTel()
{
	std::string command("");
	std::cout << "Saisissez le numero de telephone :" << std::endl;
	std::getline(std::cin, command);
	while (command == "")
	{
		std::cout << "Ce champ ne peut etre vide. Saisissez le telephone :" << std::endl;
		std::getline(std::cin, command);
	}
	tel = command;
}
void	Contact::setSecret()
{
	std::string command("");
	std::cout << "Saisissez le darkest secret :" << std::endl;
	std::getline(std::cin, command);
	while (command == "")
	{
		std::cout << "Ce champ ne peut etre vide. Saisissez le darkest secret :" << std::endl;
		std::getline(std::cin, command);
	}
	secret = command;
}
std::string	Contact::getFirst()
{
	return first;
}
std::string	Contact::getLast()
{
	return last;
}
std::string	Contact::getNick()
{
	return nick;
}
std::string	Contact::getTel()
{
	return tel;
}
std::string	Contact::getSecret()
{
	return secret;
}