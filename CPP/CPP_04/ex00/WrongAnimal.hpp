/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmandel <pmandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 12:58:59 by pmandel           #+#    #+#             */
/*   Updated: 2022/08/08 19:47:19 by pmandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP
#include <string>

class WrongAnimal
{
	public:
		WrongAnimal();
		WrongAnimal(std::string theType);
		WrongAnimal(WrongAnimal const & other);
		virtual ~WrongAnimal();
		WrongAnimal	& operator=(WrongAnimal const & rhs);
		std::string	getType() const;
		void	makeSound() const;

	protected:
		std::string _type;
};

#endif

	