/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmandel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 10:54:09 by pmandel           #+#    #+#             */
/*   Updated: 2021/11/01 10:54:12 by pmandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	res;

	res = 1;
	if (nb == 0 && power == 0)
		return (1);
	if (power < 0)
		return (0);
	if (power > 0)
		res = nb * ft_recursive_power(nb, power - 1);
	return (res);
}

// int	main(void)
// {
// 	printf("%d\n", ft_recursive_power(10, 0));
// 	return (0);
// }
// 