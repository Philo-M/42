/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmandel <pmandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 12:17:26 by pmandel           #+#    #+#             */
/*   Updated: 2022/03/22 14:50:21 by pmandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ZOMBIE_HPP_
#define _ZOMBIE_HPP_
#include <string>
#include <iostream>

class Zombie
{
	public:
	
	Zombie();
	Zombie(std::string blaz);
	~Zombie();
	void	announce( void );
	void	setname( std::string name );
	void	setnumber(int	N);


	private:

	std::string	m_name;
	int			m_N;
};

#endif