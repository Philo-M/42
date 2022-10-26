/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmandel <pmandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 12:28:50 by pmandel           #+#    #+#             */
/*   Updated: 2022/08/09 18:30:17 by pmandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <string>

class Brain
{
	public:
		Brain();
		Brain(Brain const & other);
		virtual ~Brain();
		Brain	&	operator=(Brain const & rhs);
		std::string	getIdea(int i) const;
		void setIdea(std::string str);

	private:
		std::string	_ideas[100];

};

#endif