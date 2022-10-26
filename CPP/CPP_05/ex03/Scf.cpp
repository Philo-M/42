/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scf.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmandel <pmandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 16:11:33 by pmandel           #+#    #+#             */
/*   Updated: 2022/08/23 17:09:37 by pmandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Scf.hpp"
#include <iostream>
#include <fstream>
#include <cstdlib>


	Scf::Scf(): AForm("ShrubberyCreationForm", 25, 5)
	{
		_target = "DefaultTarget";
		std::cout << "Default ShrubberyCreationForm Constructor with these name: " << this->getName() << 
				" , grade for sign: " << this->getGradeForSign() <<
				" , grade for execute: " << this->getGradeForExecute() << 
				" and target: DefaultTarget" << std::endl;
	}
	Scf::Scf(std::string const & target): AForm("ShrubberyCreationForm", 25, 5)

	{
		_target = target;
		std::cout << "ShrubberyCreationForm Constructor with these name: " << this->getName() << 
				" , grade for sign: " << this->getGradeForSign() <<
				" , grade for execute: " << this->getGradeForExecute() << 
				" and target: " << target << std::endl;
	}
	Scf::Scf(Scf const & other): AForm(other.getName(),
			other.getGradeForSign(), other.getGradeForExecute()), _target(other._target)
	{
			if (other.getSignature() == true)
				setSignatureTrue();
			else
				setSignatureFalse();
		std::cout << "ShrubberyCreationForm with these name: " << other.getName() <<
				" , grade for sign: " << other.getGradeForSign() << 
				" ,grade for execute: " << other.getGradeForExecute() << 
				", signature: " << other.getSignature() << " and target: " << _target << " was copied" << std::endl;
	}
	Scf::~Scf()
	{
		std::cout << "Scf Destructor" << std::endl;
	}
	Scf	& Scf::operator=(Scf const & rhs)
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
	void	Scf::beExcuted() const
	{
		std::string		filename(_target + "_shrubbery");
		std::ofstream	ofs(filename.c_str());
		if (ofs.is_open())
		{
			std::cout << "The file was created and filled with a tree" << std::endl;
			
			ofs << "         . . .\n";
			ofs << "       .        .  .     ..    .\n";
			ofs << "    .                 .         .  .\n";
			ofs << "                    .\n";
			ofs << "                   .                ..\n";
			ofs << "   .          .            .              .\n";
			ofs << "   .            '.,        .               .\n";
			ofs << "   .              'b      *\n";
			ofs << "    .              '$    #.                ..\n";
			ofs << "   .    .           $:   #:               .\n";
			ofs << " ..      .  ..      *#  @):        .   . .\n";
			ofs << "              .     :@,@):   ,.**:'   .\n";
			ofs << "  .      .,         :@@*: ..**'      .   .\n";
			ofs << "           '#o.    .:(@\'.@*\"\'  .\n";
			ofs << "   .  .       \'bq,..:,@@*\'   ,*      .  .\n";
			ofs << "              ,p$q8,:@)\'  .p*\'      .\n";
			ofs << "       .     \'  . \'@@Pp@@*\'    .  .\n";
			ofs << "        .  . ..    Y7\'.\'     .  .\n";
			ofs << "                  :@):.\n";
			ofs << "                 .:@:\'.\n";
			ofs << "               .::(@:.\n";
		}
		else
			throw Scf::NoShrubberyException();

		ofs.close();
	}

// Out of Scf class

std::ostream & operator<<(std::ostream & o, Scf const & rhs)
{
	o << rhs.getName() << ", scf grade for sign " << rhs.getGradeForSign() <<
			", scf grade for execute " << rhs.getGradeForExecute() <<
			", scf signature " << rhs.getSignature() << ".";
	return o;
}

