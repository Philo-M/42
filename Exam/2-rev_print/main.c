/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmandel <pmandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 13:28:24 by pmandel           #+#    #+#             */
/*   Updated: 2022/10/28 13:28:25 by pmandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
		write (1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	main(int argc, char **argv)
{
	int	i;

	if (argc == 2)
	{
		i = ft_strlen(argv[1]) - 1;
		while (i >= 0)
		{
			ft_putchar(argv[1][i]);
			i--;
		}
	}
	ft_putchar('\n');
	return (0);
}