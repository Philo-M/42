/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmandel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 11:02:32 by pmandel           #+#    #+#             */
/*   Updated: 2021/11/29 12:09:19 by pmandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>

static int	ft_power(int n, int p)
{
	int	i;
	int	res;

	i = 1;
	res = 1;
	while (i <= p)
	{
		res = res * n;
		i++;
	}
	return (res);
}

static int	ft_itoa_size(int n)
{
	int				size;
	unsigned int	nb;

	nb = n;
	size = 1;
	if (n < 0)
	{
		size++;
		nb = -n;
	}
	while (nb >= 10)
	{
		size++;
		nb = nb / 10;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	char			*str;
	unsigned int	nb;
	int				size;
	int				i;

	size = ft_itoa_size(n);
	str = (char *)malloc(sizeof(char) * (size + 1));
	if (str == NULL)
		return (NULL);
	i = -1;
	if (n < 0)
	{
		str[0] = '-';
		nb = -n;
		i++;
	}
	else
		nb = n;
	while (++i < size)
	{
		str[i] = nb / ft_power(10, size - i - 1) + 48;
		nb = nb % (ft_power(10, size - i - 1));
	}
	str[size] = '\0';
	return (str);
}
