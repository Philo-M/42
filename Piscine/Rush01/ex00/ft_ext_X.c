/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ext_X.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmandel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 15:25:44 by pmandel           #+#    #+#             */
/*   Updated: 2021/10/24 09:14:00 by pmandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "header.h"

// Renvoie les combinaisons possibles pour 1
char	*ft_ext_1(int essai, char *ext)
{
	if (essai == 1)
	{
		ext[0] = '3';
		ext[1] = '1';
		ext[2] = '2';
		ext[3] = '\0';
	}
	else if (essai == 2)
	{
		ext[0] = '3';
		ext[1] = '2';
		ext[2] = '1';
		ext[3] = '\0';
	}
	return (ext);
}

// Renvoie les combinaisons possibles pour 2
char	*ft_ext_2(int essai, char *ext)
{
	if (essai == 1)
	{
		ext[0] = '1';
		ext[1] = '3';
		ext[2] = '2';
		ext[3] = '\0';
	}
	else if (essai == 2)
	{
		ext[0] = '2';
		ext[1] = '3';
		ext[2] = '1';
		ext[3] = '\0';
	}
	else if (essai == 3)
	{
		ext[0] = '2';
		ext[1] = '1';
		ext[2] = '3';
		ext[3] = '\0';
	}
	return (ext);
}

// Renvoie les combinaisons possibles pour 2
char	*ft_ext_3(int essai, char *ext)
{
	if (essai == 1)
	{
		ext[0] = '1';
		ext[1] = '2';
		ext[2] = '3';
		ext[3] = '\0';
	}
	return (ext);
}
