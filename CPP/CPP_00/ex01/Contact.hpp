/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmandel <pmandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 11:31:26 by pmandel           #+#    #+#             */
/*   Updated: 2022/03/21 10:58:35 by pmandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CONTACT_
#define _CONTACT_
#include <iostream>

class Contact
{
	public:

	Contact();
	~Contact();
	void		setIndex(int i);
	void		setFirst();
	std::string	getFirst();
	void		setLast();
	std::string	getLast();
	void		setNick();
	std::string	getNick();
	void		setTel();
	std::string	getTel();
	void		setSecret();
	std::string	getSecret();

	private:
	
	int			index;
	std::string	first;
	std::string	last;
	std::string	nick;
	std::string	tel;
	std::string	secret;
};

#endif
