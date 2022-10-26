/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmandel <pmandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 13:22:26 by pmandel           #+#    #+#             */
/*   Updated: 2022/08/08 19:20:56 by pmandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP
#include <string>
#include "Animal.hpp"

class Dog: public Animal
{
	public:
		Dog();
		Dog(std::string theType);
		Dog(Dog const & other);
		~Dog();
		Dog	& operator=(Dog const & rhs);
		void	makeSound() const;
	
};


#endif