/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmandel <pmandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 12:39:21 by pmandel           #+#    #+#             */
/*   Updated: 2022/03/21 12:42:09 by pmandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ZOMBIE_H_
#define _ZOMBIE_H_
#include <string>
#include "Zombie.hpp"

Zombie*	newZombie( std::string name );
void randomChump( std::string name );

#endif