/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_power.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbicanic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 01:19:43 by rbicanic          #+#    #+#             */
/*   Updated: 2021/10/31 16:15:32 by rbicanic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	power(int nb, int pow)
{
	if (pow < 1)
		return (!pow);
	if (pow > 0)
		return (nb * power(nb, pow - 1));
	else
		return (1);
}

int	nbr_size(unsigned int nb)
{
	int	i;

	i = 0;
	while (nb > 0)
	{
		i++;
		nb /= 10;
	}
	return (i);
}

char	*itoa(int nb)
{
	char	*str;
	 int	nb_len;

	nb_len = nbr_size(nb);
	str = malloc((nb_len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	str[nb_len] = '\0';
	nb_len--;
	while (nb_len >= 0)
	{
		str[nb_len] = nb % 10 + '0';
		nb /= 10;
		nb_len--;
	}
	return (str);
}
