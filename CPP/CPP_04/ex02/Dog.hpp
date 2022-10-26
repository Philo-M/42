/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmandel <pmandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 13:22:26 by pmandel           #+#    #+#             */
/*   Updated: 2022/08/09 18:32:39 by pmandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP
#include <string>
#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog: public AAnimal
{
	public:
		Dog();
		Dog(std::string theType);
		Dog(Dog const & other);
		~Dog();
		Dog	&	operator=(Dog const & rhs);
		std::string getIdea(int i);
		void	setIdea(std::string str);
		virtual void	makeSound() const;

	private:
		Brain*	_dog_brain;
	
};


#endif