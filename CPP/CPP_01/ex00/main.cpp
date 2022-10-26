/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmandel <pmandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 12:16:12 by pmandel           #+#    #+#             */
/*   Updated: 2022/04/04 17:48:35 by pmandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.h"


int	main()
{
	Zombie* newZ = newZombie("thenewZ");

	newZ->announce();
	delete newZ;

	randomChump("therC");
	
	return 0;

}