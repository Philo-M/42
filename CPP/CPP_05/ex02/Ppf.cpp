/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ppf.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmandel <pmandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 16:11:33 by pmandel           #+#    #+#             */
/*   Updated: 2022/08/08 14:46:07 by pmandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ppf.hpp"
#include <iostream>
#include <fstream>
#include <cstdlib>


	Ppf::Ppf(): AForm("PresidentialPardonForm", 25, 5)
	{
		_target = "DefaultTarget";
		std::cout << "Default PresidentialPardonForm Constructor with these name: " << this->getName() << 
				" , grade for sign: " << this->getGradeForSign() <<
				" , grade for execute: " << this->getGradeForExecute() << 
				" and target: DefaultTarget" << std::endl;
	}
	Ppf::Ppf(std::string const & target): AForm("PresidentialPardonForm", 25, 5)

	{
		_target = target;
		std::cout << "PresidentialPardonForm Constructor with these name: " << this->getName() << 
				" , grade for sign: " << this->getGradeForSign() <<
				" , grade for execute: " << this->getGradeForExecute() << 
				" and target: " << target << std::endl;
	}
	Ppf::Ppf(Ppf const & other): AForm(other.getName(),
			other.getGradeForSign(), other.getGradeForExecute()), _target(other._target)
	{
			if (other.getSignature() == true)
				setSignatureTrue();
			else
				setSignatureFalse();
		std::cout << "PresidentialPardonForm with these name: " << other.getName() <<
				" , grade for sign: " << other.getGradeForSign() << 
				" ,grade for execute: " << other.getGradeForExecute() << 
				", signature: " << other.getSignature() << " and target: " << _target << " was copied" << std::endl;
	}
	Ppf::~Ppf()
	{
		std::cout << "Ppf Destructor" << std::endl;
	}
	Ppf	& Ppf::operator=(Ppf const & rhs)
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
	void	Ppf::beExcuted() const
	{
		std::cout << _target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
	}

// Out of Ppf class

std::ostream & operator<<(std::ostream & o, Ppf const & rhs)
{
	o << rhs.getName() << ", ppf grade for sign " << rhs.getGradeForSign() <<
			", ppf grade for execute " << rhs.getGradeForExecute() <<
			", ppf signature " << rhs.getSignature() << ".";
	return o;
}

