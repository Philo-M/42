/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmandel <pmandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 16:11:36 by pmandel           #+#    #+#             */
/*   Updated: 2022/08/25 12:33:26 by pmandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include "AForm.hpp"
#include "Scf.hpp"
#include "Rrf.hpp"
#include "Ppf.hpp"

class Intern
{
	public:
		Intern();
		Intern(Intern const & other);
		virtual ~Intern();
		Intern	& operator=(Intern const & rhs);
		AForm*	scfConstructor(std::string target);
		AForm*	rrfConstructor(std::string target);
		AForm*	ppfConstructor(std::string target);
		AForm*	makeForm(std::string formName, std::string formTarget);

	protected:

		
};




#endif