/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmandel <pmandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 12:16:12 by pmandel           #+#    #+#             */
/*   Updated: 2022/04/04 18:11:51 by pmandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

int	main()
{
	int	N(12);
	Zombie* Zombs = zombieHorde(N, "Joe");

	for (int i = 0; i < N; i++)
		Zombs[i].announce();
		
	delete [] Zombs;
	
	return 0;
}