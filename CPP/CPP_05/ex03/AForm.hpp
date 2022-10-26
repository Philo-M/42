/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmandel <pmandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 16:11:36 by pmandel           #+#    #+#             */
/*   Updated: 2022/08/04 18:46:13 by pmandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	public:
		AForm();
		AForm(std::string const theName, int theGradeForSign, int theGradeForExecute);
		AForm(AForm const & other);
		virtual ~AForm();
		AForm		& operator=(AForm const & rhs);
		std::string		getName() const;
		int				getSignature() const;
		int				getGradeForSign() const;
		int				getGradeForExecute() const;

		virtual void	beSigned(Bureaucrat & theBureaucrat);
		void			execute(Bureaucrat const & executor) const;
		virtual void	beExcuted() const = 0;

		class GradeTooHighException: public std::exception
		{
			virtual const char* what() const throw()
			{
				return ("The grade is too high");
			}
		};
		
		class GradeTooLowException: public std::exception
		{
			virtual const char* what() const throw()
			{
				return ("The grade is too low");
			}
		};

		class AlreadySignedException: public std::exception
		{
			const char* what() const throw()
			{
				return ("The form is already signed");
			}
		};

		class NotSignedException: public std::exception
		{
			const char* what() const throw()
			{
				return ("The form is not signed yet");
			}
		};

	private:
		std::string	const _name;
		bool		_signature;
		int			const _gradeForSign;
		int			const _gradeForExecute;

	protected:
		void		setSignatureTrue();
		void		setSignatureFalse();	
};

// Out of AForm class

std::ostream & operator<<(std::ostream & o, AForm const & rhs);


#endif