/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmandel <pmandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 11:31:26 by pmandel           #+#    #+#             */
/*   Updated: 2022/03/18 15:19:36 by pmandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _PHONEBOOK_
#define _PHONEBOOK_
#include <iostream>
#include <string>
#include "Contact.hpp"

class PhoneBook
{
	public:

	PhoneBook();
	~PhoneBook();
	void	setContact(int i);
	void	printContact(int i);
	void	printContactLine(int i);
	void	printInfo10(std::string	str);
	void	printContactAll(int i);

	private:
	Contact people[8];
};

#endif