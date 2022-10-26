/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbicanic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 13:24:03 by rbicanic          #+#    #+#             */
/*   Updated: 2021/10/30 22:51:39 by rbicanic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_sep(char c, char *str)
{
	while (*str)
	{
		if (*str == c)
			return (1);
		str++;
	}
	return (0);
}

int	ft_strlen_split(char *str, char *charset)
{
	int	i;

	i = 0;
	while (!is_sep(str[i], charset) && str[i])
		i++;
	return (i);
}

char	*ft_strdup_split(char *src, char *charset)
{
	 int	i;
	char	*str;
	 int	len;

	i = 0;
	len = ft_strlen_split(src, charset);
	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	while (src[i] && !is_sep(src[i], charset))
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

int	word_nbr(char *str, char *charset)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (str[i])
	{
		while (is_sep(str[i], charset) && str[i])
			i++;
		words++;
		while (!is_sep(str[i], charset) && str[i])
			i++;
	}
	return (words);
}

char	**ft_split(char *str, char *charset)
{
	 int	i;
	 int	j;
	 int	words;
	char	**strs;

	i = 0;
	j = 0;
	strs = NULL;
	words = word_nbr(str, charset);
	strs = malloc((words + 1) * sizeof(*strs));
	if (strs == NULL)
		return (NULL);
	while (str[i])
	{
		while (is_sep(str[i], charset) && str[i])
			i++;
		strs[j] = ft_strdup_split(&str[i], charset);
		if (strs[j] == NULL)
			return (NULL);
		while (!is_sep(str[i], charset) && str[i])
			i++;
		j++;
	}
	strs[j] = 0;
	return (strs);
}
