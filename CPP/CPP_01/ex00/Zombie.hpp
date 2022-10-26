/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmandel <pmandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 12:17:26 by pmandel           #+#    #+#             */
/*   Updated: 2022/03/21 13:08:31 by pmandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ZOMBIE_HPP_
#define _ZOMBIE_HPP_
#include <string>

class Zombie
{
	public:
	
	Zombie();
	Zombie(std::string blaz);
	~Zombie();
	void	announce( void );

	private:

	std::string	name;
};

#endif