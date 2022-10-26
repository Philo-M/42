/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmandel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 10:06:37 by pmandel           #+#    #+#             */
/*   Updated: 2021/10/15 10:07:02 by pmandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write_with_comma(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	write(1, ", ", 2);
}

void	ft_write_without_comma(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	char	i;
	char	j;
	char	k;

	i = '0';
	while (i <= '9')
	{
		j = '0';
		while (j <= '9')
		{
			k = '0';
			while (k <= '9')
			{	
				if (i == '7' && j == '8' && k == '9')
					ft_write_without_comma(i, j, k);
				else if (i < j && j < k)
					ft_write_with_comma(i, j, k);
				k++;
			}
			j++;
		}
		i++;
	}
}
