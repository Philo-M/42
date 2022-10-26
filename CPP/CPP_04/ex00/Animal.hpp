/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmandel <pmandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 12:58:59 by pmandel           #+#    #+#             */
/*   Updated: 2022/06/09 11:34:08 by pmandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <string>

class Animal
{
	public:
		Animal();
		Animal(std::string theType);
		Animal(Animal const & other);
		virtual ~Animal();
		Animal	& operator=(Animal const & rhs);
		std::string	getType() const;
		virtual void	makeSound() const;

	protected:
		std::string _type;
};

#endif

	