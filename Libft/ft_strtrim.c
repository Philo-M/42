/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmandel <pmandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 12:14:18 by pmandel           #+#    #+#             */
/*   Updated: 2021/12/09 19:33:57 by pmandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_strtrim_limit(char const *s1, char const *set, int reverse)
{
	int		s1_len;
	int		i;
	size_t	j;

	s1_len = ft_strlen(s1);
	i = 0;
	while (i < s1_len)
	{
		j = 0;
		while (set[j] && s1[reverse * (s1_len - i - 1) - \
			(reverse - 1) * i] != set[j])
			j++;
		if (j != ft_strlen(set))
			i++;
		else
			return (reverse * (s1_len - i - 1) - (reverse - 1) * i);
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s;
	size_t	i;
	size_t	size;

	if (s1 == NULL)
		return (NULL);
	size = 0;
	if (!(ft_strtrim_limit(s1, set, 0) == 0 && \
		ft_strtrim_limit(s1, set, 1) == 0))
		size = ft_strtrim_limit(s1, set, 1) - ft_strtrim_limit(s1, set, 0) + 1;
	s = (char *)malloc(sizeof(char) * (size + 1));
	if (s == NULL)
		return (NULL);
	i = 0;
	while ((++i - 1) < size)
		s[i - 1] = s1[i - 1 + ft_strtrim_limit(s1, set, 0)];
	s[i - 1] = '\0';
	i = 0;
	while ((++i - 1) < ft_strlen(set))
	{
		if (s[0] == set[i - 1])
			s[0] = '\0';
	}
	return (s);
}
