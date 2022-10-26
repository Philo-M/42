/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmandel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 09:46:37 by pmandel           #+#    #+#             */
/*   Updated: 2021/10/29 09:46:41 by pmandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	unsigned int	size;
	unsigned int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = (int *)malloc(sizeof(int) * (max - min));
	if (range == NULL)
		return (-1);
	i = 0;
	size = (unsigned int)(max - min);
	while (i < size)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (size);
}

// int	main(void)
// {
// 	         int	*tab;
// 	unsigned int	i;
// 	unsigned int	size;
// 	         int	min = -32;
// 	         int	max = 166;

// 	printf("return est : %d\n", ft_ultimate_range(&tab, min, max));
// 	size = (unsigned)(max - min);
// 	while (i < size)
// 	{
// 		printf("%d ",tab[i]);
// 		i++;
// 	}
// 	return (0);
// }