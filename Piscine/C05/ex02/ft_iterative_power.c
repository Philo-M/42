/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmandel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 10:40:23 by pmandel           #+#    #+#             */
/*   Updated: 2021/11/01 10:40:26 by pmandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	res;

	i = 1;
	res = 1;
	if (nb == 0 && power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (i <= power)
	{
		res = res * nb;
		i++;
	}
	return (res);
}

// int	main(void)
// {
// 	printf("%d\n", ft_iterative_power(-5, 0));
// 	return (0);
// }
// 