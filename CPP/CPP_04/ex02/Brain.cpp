/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmandel <pmandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 12:41:07 by pmandel           #+#    #+#             */
/*   Updated: 2022/08/09 18:30:43 by pmandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>
#include <string>
#include <sstream>

	Brain::Brain()
	{
		int					i;
		std::string			str;
		
		
		for (i = 0; i < 100; i++)
		{
			std::stringstream	ss;
			ss << i;
			ss >> str;
			this->_ideas[i] = "Idea" + str;
		}
		std::cout << "Default Brain constructor called" << std::endl;
	}
	Brain::Brain(Brain const & other)
	{
		int	i;

		for (i = 0; i < 100; i++)
		{
			this->_ideas[i] = other.getIdea(i);
		}
		std::cout << "This brain was copied: " << this->_ideas << std::endl;
	}
	Brain::~Brain()
	{
		std::cout << "The brain was destructed" << std::endl;

	}
	Brain	&	Brain::operator=(Brain const & rhs)
	{
		int	i;
		
		if(this != &rhs)
		{
			for (i = 0; i < 100; i++)
			{
				this->_ideas[i] = rhs.getIdea(i);
			}
			std::cout << "Affection operator was called for this brain : " << this->_ideas << std::endl;
		}
		else
		{
			std::cout << "You cannot affect a brain to the same brain" << std::endl;
		}
		return	*this;
	}
	std::string Brain::getIdea(int i) const
	{
		return this->_ideas[i];
	}
	void Brain::setIdea(std::string str)
	{
		_ideas[5] = str;
	}