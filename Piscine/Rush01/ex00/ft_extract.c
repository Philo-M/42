/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_extract.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmandel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 22:07:31 by pmandel           #+#    #+#             */
/*   Updated: 2021/10/24 22:07:43 by pmandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_extract(char *src, char *dest)
{
	int	i;

	i = 0;
	while (src[i] != '\0' && i < 32)
	{
		if (src[i] < '1' || src[i] > '4')
		{	
			write(1, "Error\n", 6);
			return (0);
		}	
		else
			dest[i / 2] = src[i];
		if (src[i + 1] != ' ' && i != 30)
		{
			write(1, "Error\n", 6);
			return (0);
		}
		dest[16] = '\0';
		i = i + 2;
	}
	if (src[31] != '\0')
		write(1, "Error\n", 6);
	return (dest);
}
