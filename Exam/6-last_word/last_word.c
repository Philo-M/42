/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmandel <pmandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 13:28:49 by pmandel           #+#    #+#             */
/*   Updated: 2022/10/28 13:28:50 by pmandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_issep(char c)
{
	if (c == ' ' || c == '	')
		return (1);
	return (0);
}

int	ft_strlen(char *str)
{
	int	i = 0;

	while(str[i])
		i++;
	return (i);
}

void	ft_last(char *str)
{
	int	i = ft_strlen(str) - 1;
	int	end = 0;

	if (str[0] == '\0' || ft_strlen(str) == 0)
		return ;
	while (i >= 0 && ft_issep(str[i]) == 1)
			i--;
	if (i < 0)
		return ;
	end = i;
	while (i >= 0 && ft_issep(str[i]) == 0)
		i--;
	i++;
	while (i <= end)
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2) 
		ft_last(argv[1]);
	write (1, "\n", 1);
	return (0);
}