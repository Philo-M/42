/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_union.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmandel <pmandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 16:52:36 by pmandel           #+#    #+#             */
/*   Updated: 2022/02/23 17:18:07 by pmandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int	ft_double(char *str, int i)
{
	int	j = 0;

	while (str[j] && j < i)
	{
		if (str[i] == str[j])
			return (1);
		j++;
	}
	return (0);
}

int	ft_strlen(char *str)
{
	int	i = 0;

	while (str[i])
		i++;
	return (i);
}

char	*ft_join(char *s1, char *s2)
{
	char	*s;
	int		i = 0;

	s = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (s == NULL)
		return (NULL);
	while (s1[i])
	{
		s[i] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i])
	{
		s[i + ft_strlen(s1)] = s2[i];
		i++;
	}
	s[i + ft_strlen(s1)] = '\0';
	return (s);
}

void	ft_print(char *s)
{
	int	i = 0;

	while (s[i])
	{
		if (ft_double(s, i) == 0)
			write(1, &s[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		ft_print(ft_join(argv[1], argv[2]));
	}
	write (1, "\n", 1);
	return (0);
}