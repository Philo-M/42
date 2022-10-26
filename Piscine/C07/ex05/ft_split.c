/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmandel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 11:45:19 by pmandel           #+#    #+#             */
/*   Updated: 2021/11/03 11:45:22 by pmandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <stdlib.h>

int	ft_is_sep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	ft_str_cut_len(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] && ft_is_sep(str[i], charset) == 0)
		i++;
	return (i);
}

int	ft_nb_of_words(char *str, char *charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (str[0] == '\0')
		return (0);
	while (str[i])
	{
		if (ft_is_sep(str[i], charset) == 0)
		{
			count++;
			i = i + ft_str_cut_len(&str[i], charset);
		}
		else
			i++;
	}
	return (count);
}

char	**ft_dest_feed(char *str, char *charset, char **dest)
{
	int	i;
	int	j;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (ft_is_sep(str[i], charset) == 0)
		{
			dest[count] = (char *)malloc(sizeof(char) * \
				(ft_str_cut_len(&str[i], charset) + 1));
			if (dest[count] == NULL)
				return (NULL);
			j = -1;
			while (++j < ft_str_cut_len(&str[i], charset))
				dest[count][j] = str[i + j];
			dest[count][j] = '\0';
			count++;
			i = i + ft_str_cut_len(&str[i], charset) + 1;
		}
		else
			i++;
	}
	return (dest);
}

char	**ft_split(char *str, char *charset)
{
	char	**dest;

	dest = (char **)malloc(sizeof(char *) * (ft_nb_of_words(str, charset) + 1));
	if (dest == NULL)
		return (NULL);
	dest = ft_dest_feed (str, charset, dest);
	if (dest == NULL)
		return (NULL);
	return (dest);
}

// int	main(void)
// {
// 	char	*str = "::abcw::::def;;;;g,hi;;;;";
// 	char	*charset = ":;,";
// 	char	**dest;

// 	dest = ft_split(str, charset);
// 	printf("number of words : %d\n", ft_nb_of_words(str, charset));
// 	printf("les dests : %s %s %s %s", dest[0], dest[1], dest[2], dest[3]);
// 	return (0);
// }