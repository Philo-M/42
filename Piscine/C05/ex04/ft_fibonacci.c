/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmandel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 11:05:48 by pmandel           #+#    #+#             */
/*   Updated: 2021/11/01 11:05:52 by pmandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_fibonacci(int index)
{
	int	res;

	res = 0;
	if (index < 0)
		res = -1;
	if (index == 0)
		res = 0;
	if (index == 1)
		res = 1;
	if (index >= 2)
		res = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	return (res);
}

// int	main(void)
// {
// 	printf("%d\n", ft_fibonacci(2));
// 	return (0);
// }
// 