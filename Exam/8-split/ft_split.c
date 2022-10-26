/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_4.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmandel <pmandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 15:40:11 by pmandel           #+#    #+#             */
/*   Updated: 2022/10/21 13:47:13 by pmandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_is_sep(char c)
{
	if (c == ' ' || c == '\n' || c == '	')
		return (1);
	return (0);
}

int	ft_nb_words(char *str)
{
	int	i = 0;
	int	state = 0;
	int	count = 0;

	if (str == NULL)
		return (0);
	while (str[i])
	{
		if (state == 0 && ft_is_sep(str[i]) == 0)
		{
			state = 1;
			count++;
		}
		else if (state == 1 && ft_is_sep(str[i]) == 1)
			state = 0;
		i++;
	}
	return (count);
}

int	ft_strlen_sep(char *str)
{
	int	i = 0;

	while (str[i] && ft_is_sep(str[i]) == 0)
		i++;
	return (i);
}

char	*ft_strdup_sep(char *str)
{
	char	*dst;
	int		i = 0;

	if (str == NULL)
		return (NULL);
	dst = (char *)malloc(sizeof(char) * (ft_strlen_sep(str) + 1));
	if (dst == NULL)
		return (NULL);
	while (i < ft_strlen_sep(str))
	{
		dst[i] = str[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

void	ft_free(char **strs, int count)
{
	while (count >= 1)
	{
		free (strs[count - 1]);
		count--;
	}
	free(strs);
}

char	**ft_split(char *str)
{
	char	**strs;
	int		count = 0;
	int		i = 0;

	if (str == NULL || str[0] == '\0' || ft_nb_words(str) == 0)
		return (NULL);
	strs = (char **)malloc(sizeof(char *) * (ft_nb_words(str) + 1));
	if (strs == NULL)
	{
		ft_free(strs, count);
		return (NULL);
	}
	while (str[i])
	{
		if (ft_is_sep(str[i]) == 0)
		{
			strs[count] = ft_strdup_sep(&str[i]);
			if (strs[count] == NULL)
			{
				ft_free(strs, count);
				return(NULL);
			}
			count++;
			i = i + ft_strlen_sep(&str[i]);
		}
		else
			i++;
	}
	strs[count] = NULL;
	return (strs);
}

int	main(void)
{
	char 	*str = NULL;
	char	**strs;
	int		i = 0;
	int		count = ft_nb_words(str);

	strs = ft_split(str);
	while (i < count)
	{
		printf("i : %s\n", strs[i]);
		i++;
	}
	ft_free(strs, count);
	return (0);
}