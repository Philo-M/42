/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmandel <pmandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 16:11:36 by pmandel           #+#    #+#             */
/*   Updated: 2022/08/04 17:09:40 by pmandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
// #include <string>
// #include <exception>
#include <iostream>

class Bureaucrat
{
	public:
		Bureaucrat();
		Bureaucrat(std::string const theName, int theGrade);
		Bureaucrat(Bureaucrat const & other);
		~Bureaucrat();
		Bureaucrat	& operator=(Bureaucrat const & rhs);
		std::string	getName() const;
		int			getGrade() const;
		void		increment(int value);
		void		decrement(int value);

		
		class GradeTooHighException: public std::exception
		{
			virtual const char* what() const throw()
			{
				return ("Grade too high");
			}
		};
		
		class GradeTooLowException: public std::exception
		{
			virtual const char* what() const throw()
			{
				return ("Grade too low");
			}
		};

	protected:
		std::string	const _name;
		int			_grade;
		
};

// Out of Bureaucrat class

std::ostream & operator<<(std::ostream & o, Bureaucrat const & rhs);


#endif