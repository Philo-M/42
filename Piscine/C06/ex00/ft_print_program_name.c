/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmandel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 18:14:58 by pmandel           #+#    #+#             */
/*   Updated: 2021/10/28 18:15:02 by pmandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_print_program_name(char *argv)
{
	int	i;

	i = 0;
	ft_putstr(&argv[i]);
	ft_putstr("\n");
}

int	main(int argc, char *argv[])
{
	if (argc > 0)
		ft_print_program_name(argv[0]);
	return (0);
}
