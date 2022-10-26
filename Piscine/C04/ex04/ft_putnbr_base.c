/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmandel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 09:36:46 by pmandel           #+#    #+#             */
/*   Updated: 2021/10/28 09:36:53 by pmandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_test_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (ft_strlen(base) == 0 || ft_strlen(base) == 1)
		return (0);
	while (base[i] != '\0')
	{
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base [j])
				return (0);
			j++;
		}
		i++;
	}
	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '-' || base[i] == '+')
			return (0);
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nb, char *base)
{
	unsigned int	n;
	unsigned int	base_length;
	        char	c;

	base_length = ft_strlen(base);
	if (nb < 0)
	{
		ft_putchar('-');
		n = (unsigned int)(-nb);
	}
	else
		n = (unsigned int)nb;
	if (n > base_length - 1)
	{
		ft_putnbr_base(n / base_length, base);
		ft_putnbr_base(n % base_length, base);
	}
	else
	{
		c = base[n];
		ft_putchar(c);
	}
}

int	main(void)
{
	char	base[] = "0123456789ABCDEF";

	if (ft_test_base(base) == 0)
		return (0);
	else
		ft_putnbr_base(10, base);
	return (0);
}
