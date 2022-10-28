/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmandel <pmandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 13:29:08 by pmandel           #+#    #+#             */
/*   Updated: 2022/10/28 13:29:09 by pmandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_issep(char c)
{
	if (c == ' ' || c == '	')
		return (1);
	return (0);
}

char	*ft_expand(char *str)
{
	int	i = 0;
	int	state = 0;

	while(str[i])
	{
		if (state == 0 && ft_issep(str[i]) == 1)
			i++;
		else if (state == 0 && ft_issep(str[i]) == 0)
		{
			state = 1;
			write(1, &str[i], 1);
			i++;
		}
		else if (state == 1 && ft_issep(str[i]) == 0)
		{
			write(1, &str[i], 1);
			i++;
		}
		else if (state == 1 && ft_issep(str[i]) == 1)
		{
			state = 2;
			i++;
		}
		else if (state == 2 && ft_issep(str[i]) == 1)
			i++;
		else if (state == 2 && ft_issep(str[i]) == 0)
		{
			state = 1;
			write(1, "   ", 3);
			write(1, &str[i], 1);
			i++;
		}
		else
			write(1, "ERROR", 5);
	}
	return (str);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		ft_expand(argv[1]);
	write(1, "\n", 1);
	return (0);
}