/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Rrf.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmandel <pmandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 16:11:33 by pmandel           #+#    #+#             */
/*   Updated: 2022/08/23 17:07:40 by pmandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Rrf.hpp"
#include <iostream>
#include <fstream>
#include <cstdlib>


	Rrf::Rrf(): AForm("RobotomyRequestForm", 25, 5)
	{
		_target = "DefaultTarget";
		std::cout << "Default RobotomyRequestForm Constructor with these name: " << this->getName() << 
				" , grade for sign: " << this->getGradeForSign() <<
				" , grade for execute: " << this->getGradeForExecute() << 
				" and target: DefaultTarget" << std::endl;
	}
	Rrf::Rrf(std::string const & target): AForm("RobotomyRequestForm", 25, 5)

	{
		_target = target;
		std::cout << "RobotomyRequestForm Constructor with these name: " << this->getName() << 
				" , grade for sign: " << this->getGradeForSign() <<
				" , grade for execute: " << this->getGradeForExecute() << 
				" and target: " << target << std::endl;
	}
	Rrf::Rrf(Rrf const & other): AForm(other.getName(),
			other.getGradeForSign(), other.getGradeForExecute()), _target(other._target)
	{
			if (other.getSignature() == true)
				setSignatureTrue();
			else
				setSignatureFalse();
		std::cout << "RobotomyRequestForm with these name: " << other.getName() <<
				" , grade for sign: " << other.getGradeForSign() << 
				" ,grade for execute: " << other.getGradeForExecute() << 
				", signature: " << other.getSignature() << " and target: " << _target << " was copied" << std::endl;
	}
	Rrf::~Rrf()
	{
		std::cout << "Rrf Destructor" << std::endl;
	}
	Rrf	& Rrf::operator=(Rrf const & rhs)
	{
		if (this != &rhs)
		{
			if (rhs.getSignature() == true)
				setSignatureTrue();
			else
				setSignatureFalse();
			_target = rhs._target;
			std::cout << "Only signature: " << rhs.getSignature() << " and target: " <<
					_target << " were affected (other parameters are constants)" << std::endl;
		}
		else
			std::cout << "You cannot affect a form to the same form" << std::endl;
		return *this;
	}
	void	Rrf::beExcuted() const
	{
		std::cout << "Drill sounds rrrrr rrrrr..." << std::endl;
		int success;
		srand (time(NULL));
		success = rand() % 100 + 1;
		if (success <=50)
			std::cout << _target << " has been robotomized." << std::endl;
		else
			std::cout << "The robotomy failed." << std::endl;

	}

// Out of Rrf class

std::ostream & operator<<(std::ostream & o, Rrf const & rhs)
{
	o << rhs.getName() << ", rrf grade for sign " << rhs.getGradeForSign() <<
			", rrf grade for execute " << rhs.getGradeForExecute() <<
			", rrf signature " << rhs.getSignature() << ".";
	return o;
}

