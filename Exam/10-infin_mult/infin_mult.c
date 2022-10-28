/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   infin_mult.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmandel <pmandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 13:29:47 by pmandel           #+#    #+#             */
/*   Updated: 2022/10/28 13:29:48 by pmandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i = 0;

	while (str[i])
		i++;
	return (i);
}

void	ft_putstr_0(char *str)
{
	int	i = 0;

	while (str[i] && str[i] == '0')
		i++;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

char	*ft_infin_mult(char *s1, char *s2)
{
	char	*s;
	int	len_1 = ft_strlen(s1);
	int	len_2 = ft_strlen(s2);
	int i;
	int	j;
	int k = len_1 + len_2 - 1;
	int	sum; ///
	int	rest = 0;

	s = (char *)malloc(sizeof(char) * (len_1 + len_2 + 1));
	if (s == NULL)
		return (NULL);
	s[len_1 + len_2] = '\0';
	while (k >= 0)
	{
		sum = 0;
		i = len_1 - 1;
		while (i >= 0)
		{
			j = len_2 - 1;
			while (j >= 0)
			{
				if ((k - (len_1 + len_2 - 1) == i - (len_1 - 1) + j - (len_2 - 1)) &&
						s1[i] >= '0' && s1[i] <= '9' && s2[j] >= '0' && s2[j] <= '9')
					sum = sum + (s1[i] - 48) * (s2[j] - 48);
				j--;
			}
			i--;
		}
		sum = sum + rest;
		s[k] = sum % 10 + 48;
		rest = sum / 10;
		k--;
	}
	if ((s1[0] == '-' && s2[0] != '-')|| (s1[0] != '-' && s2[0] == '-' ))
	{
		k = 0;
		while (s[k] == '0')
			k++;
		s[k - 1] = '-';
	}
	return (s); ///
}

int	main(int argc, char **argv)
{
	char	*s;

	(void)argc;
	s = ft_infin_mult(argv[1], argv[2]);
	ft_putstr_0(s);
	return(0);
}