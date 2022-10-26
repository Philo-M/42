/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmandel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 22:28:27 by pmandel           #+#    #+#             */
/*   Updated: 2021/10/28 22:28:45 by pmandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <unistd.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	         int	*tab;
	unsigned int	i;
	unsigned int	size;

	if (min >= max)
		return (0);
	tab = (int *)malloc(sizeof(int) * (max - min));
	if (tab == NULL)
		return (NULL);
	i = 0;
	size = (unsigned int)(max - min);
	while (i < size)
	{
		tab[i] = min + i;
		i++;
	}
	return (tab);
}

// int	main(void)
// {
// 	unsigned int	i;
// 	unsigned int	size;
// 	         int	min = -200;
// 	         int	max = 200;
// 	         int	*tab = ft_range(min, max);
// 
// 	size = (unsigned)(max - min);
// 	i = 0;
// 	while (i < size)
// 	{
// 		printf("%d ",tab[i]);
// 		i++;
// 	}
// 	return (0);
// }