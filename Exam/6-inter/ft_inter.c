/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_inter.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmandel <pmandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 13:28:37 by pmandel           #+#    #+#             */
/*   Updated: 2022/10/28 13:28:45 by pmandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_double(char *str, int i)
{
	int	j = 0;

	while (j < i)
	{
		if (str[i] == str[j])
			return (1);
		j++;
	}
	return (0);
}

void	ft_inter(char *str1, char *str2)
{
	int	i = 0;
	int	j;

	while (str1[i])
	{
		j = 0;
		while (str2[j])
		{
			if (str1[i] == str2[j] && ft_double(str1, i) == 0)
			{
				write(1, &str1[i], 1);
				break;
			}
			j++;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		ft_inter(argv[1], argv[2]);
	}
	write(1, "\n", 1);
	return (0);
}