/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmandel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 21:42:41 by pmandel           #+#    #+#             */
/*   Updated: 2021/10/21 21:43:38 by pmandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	oct_to_hex(unsigned char octal)
{
	char	*string_hex;
	char	c1;
	char	c2;

	string_hex = "0123456789abcdef";
	c1 = string_hex[octal / 16];
	c2 = string_hex[octal % 16];
	ft_putchar('\\');
	ft_putchar(c1);
	ft_putchar(c2);
}

void	ft_putstr_non_printable(char *str)
{
	          int	i;
	unsigned char	*u_str;

	i = 0;
	u_str = (unsigned char *) str;
	while (u_str[i] != '\0')
	{
		if (u_str[i] <= 31 || u_str[i] >= 127)
		{
			oct_to_hex(u_str[i]);
		}
		else
		{
			ft_putchar(u_str[i]);
		}
		i++;
	}
}

// int	main(void)
// {
// 	char	phrase[] = "Coucou \xCD tu \n vas bien ?";

// 	ft_putstr_non_printable(phrase);
// 	return (0);
// }
