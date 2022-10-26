/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmandel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 09:50:49 by pmandel           #+#    #+#             */
/*   Updated: 2021/11/01 09:50:52 by pmandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	res;

	res = 1;
	if (nb < 0)
		return (0);
	if (nb > 1)
		res = nb * ft_recursive_factorial(nb - 1);
	return (res);
}

// int	main(void)
// {
// 	printf("%d\n", ft_recursive_factorial(5));
// 	return (0);
// }