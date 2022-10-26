/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmandel <pmandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 13:22:26 by pmandel           #+#    #+#             */
/*   Updated: 2022/08/08 19:20:51 by pmandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP
#include <string>
#include "Animal.hpp"

class Cat: public Animal
{
	public:
		Cat();
		Cat(std::string theType);
		Cat(Cat const & other);
		~Cat();
		Cat	& operator=(Cat const & rhs);
		void	makeSound() const;
	
};


#endif