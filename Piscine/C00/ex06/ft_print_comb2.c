/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmandel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 10:07:43 by pmandel           #+#    #+#             */
/*   Updated: 2021/10/15 10:08:43 by pmandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_split_number_c1(int n)
{
	char	c1;

	c1 = '0' + n / 10;
	write(1, &c1, 1);
}

void	ft_split_number_c2(int n)
{
	char	c2;

	c2 = '0' + n % 10;
	write(1, &c2, 1);
}

void	ft_print_comb2(void)
{
	int	n1;
	int	n2;

	n1 = 0;
	while (n1 < 100)
	{
		n2 = 0;
		while (n2 < 100)
		{
			if (n2 > n1)
			{
				ft_split_number_c1(n1);
				ft_split_number_c2(n1);
				write (1, " ", 1);
				ft_split_number_c1(n2);
				ft_split_number_c2(n2);
				if (!(n1 == 98 && n2 == 99))
					write (1, ", ", 2);
			}
			n2++;
		}
		n1++;
	}
}
