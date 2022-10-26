/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmandel <pmandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 12:17:35 by pmandel           #+#    #+#             */
/*   Updated: 2022/04/04 18:11:57 by pmandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

Zombie*	zombieHorde( int N, std::string name )
{
	Zombie* Zombs = new Zombie[N];
	int	i;

	for (i = 0; i < N; i++)
	{
		Zombs[i].setname(name);
		Zombs[i].setnumber(i);
	}
	return &Zombs[0];
}
