/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmandel <pmandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 12:10:47 by pmandel           #+#    #+#             */
/*   Updated: 2021/12/13 16:35:44 by pmandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nb_of_words(const char *str, char c)
{
	int	count;
	int	i;

	if ((char)(str[0]) == '\0')
		return (0);
	if (c == '\0')
		return (1);
	count = 0;
	i = 0;
	while (str[i] && str[i] == c)
		i++;
	if (str[i] == '\0')
		return (0);
	while (str[i])
	{
		if (str[i] == c && str[i + 1] != c && str[i + 1])
			count++;
		i++;
	}
	return (count + 1);
}

static unsigned int	ft_wordlen(const char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	return (i);
}

static void	*ft_free_malloc(char **strs, int count)
{
	int	i;

	i = count;
	while (i >= 0)
	{
		free((void *)strs[i]);
		i--;
	}
	free((void **)strs);
	return (NULL);
}

static char	**ft_strs_feed(char **strs, char const *s, char c)
{
	int				count;
	unsigned int	i;
	unsigned int	j;

	count = 0;
	i = 0;
	while (i < ft_strlen(s))
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			strs[count] = (char *)malloc(sizeof(char) * \
				(ft_wordlen(&s[i], c) + 1));
			if (strs[count] == NULL)
				ft_free_malloc(strs, count);
			j = 0;
			while (++j - 1 < ft_wordlen(&s[i], c))
				strs[count][j - 1] = s[i + j - 1];
			strs[count][j - 1] = '\0';
		}
		count++;
		i = i + j - 1;
	}
	return (strs);
}

char	**ft_split(char const *s, char c)
{
	char	**strs;

	if (s == NULL)
		return (NULL);
	strs = (char **)malloc(sizeof(char *) * (ft_nb_of_words(s, c) + 1));
	if (strs == NULL)
		return (NULL);
	if ((char)(s[0]) == '\0' || ft_nb_of_words(s, c) == 0)
		strs[0] = NULL;
	else
	{
		strs = ft_strs_feed(strs, s, c);
		strs[ft_nb_of_words(s, c)] = NULL;
	}
	return (strs);
}
