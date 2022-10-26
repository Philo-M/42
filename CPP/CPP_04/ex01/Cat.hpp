/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmandel <pmandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 13:22:26 by pmandel           #+#    #+#             */
/*   Updated: 2022/08/09 18:21:13 by pmandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal
{
	public:
		Cat();
		Cat(std::string theType);
		Cat(Cat const & other);
		~Cat();
		Cat	&	operator=(Cat const & rhs);
		std::string getIdea(int i);
		void	setIdea(std::string str);
		void	makeSound() const;

	private:
		Brain*	_cat_brain;
	
};


#endif