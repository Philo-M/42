/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmandel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 15:25:44 by pmandel           #+#    #+#             */
/*   Updated: 2021/10/24 09:14:00 by pmandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "header.h"

// Remplit le tableau a partir de CU
void	ft_fill(char *CU)
{
	 int	i;
	 int	j;
	char	tab[3][3];

	i = 0;
	j = 0;
	while (j < 3)
	{
		while (i < 3)
		{
			if (CU[i] == '1')
				ft_ext_1(1, &tab[i][j]);
			else if (CU[i] == '2')
				ft_ext_2(1, &tab[i][j]);
			else if (CU[i] == '3')
				ft_ext_3(1, &tab[i][j]);
			i++;
		}
		j++;
	}
	ft_ligne(tab[0][0], tab[1][0], tab[2][0]);
	ft_ligne(tab[0][1], tab[1][1], tab[2][1]);
	ft_ligne(tab[0][2], tab[1][2], tab[2][2]);
}
