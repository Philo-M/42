/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmandel <pmandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 10:55:47 by pmandel           #+#    #+#             */
/*   Updated: 2022/02/24 11:07:04 by pmandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_rrange(int start, int end)
{
	unsigned int	size = 0;
	int				*tab;
	unsigned int	i = 0;

	if (start < end)
		size = end - start + 1;
	else
		size = start - end + 1;
	tab = (int *)malloc(sizeof(int) * size);
	if (tab == NULL)
		return (NULL);
	if (start < end)
	{
		while (i < size)
		{
			tab[i] = end;
			end--;
			i++;
		}
	}
	else
	{
		while (i < size)
		{
			tab[i] = end;
			end++;
			i++;
		}
	}
	return (tab);
}

int	main(void)
{
	int				start = 8;
	int				end = -3;
	int 			*tab = ft_rrange(start, end);
	unsigned int	size;
	unsigned int	i = 0;

	if (start < end)
		size = end - start + 1;
	else
		size = start - end + 1;
	while (i < size)
	{
		printf("tab[%d] : %d\n", i, tab[i]);
		i++;
	}
	
	return (0);
}