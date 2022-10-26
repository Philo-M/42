/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmandel <pmandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 12:58:59 by pmandel           #+#    #+#             */
/*   Updated: 2022/07/28 18:02:37 by pmandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP
#include <string>

class AAnimal
{
	public:
		AAnimal();
		AAnimal(std::string theType);
		AAnimal(AAnimal const & other);
		virtual ~AAnimal();
		AAnimal	&	operator=(AAnimal const & rhs);
		std::string	getType() const;
		virtual void	makeSound() const = 0;

	protected:
		std::string _type;
};

#endif

	