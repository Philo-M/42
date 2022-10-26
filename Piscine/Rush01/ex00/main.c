/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmandel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 15:25:44 by pmandel           #+#    #+#             */
/*   Updated: 2021/10/24 09:14:00 by pmandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "header.h"

int	main(int argc, char *argv[])
{
	char	dest[17];
	 int	i;

	i = 0;
	if (argc >= 2)
	{
		ft_extract(argv[1], dest);
		while (dest[i] != '\0')
			i++;
		if (i != 16)
			return (0);
		i = 0;
		while (i < 16)
		{
			if (dest[i] < '1' || dest [i] > '4')
				return (0);
			i++;
		}
		if (dest[i + 1] != '\0')
			return (0);
		ft_cree_ext(dest);
	}
	else
		write (1, "Error", 6);
	return (0);
}
