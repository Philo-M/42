/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmandel <pmandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 12:12:20 by pmandel           #+#    #+#             */
/*   Updated: 2021/11/29 12:12:22 by pmandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	char	*s;

	if ((char *)s1 == NULL || (char *)s2 == NULL)
		return (NULL);
	s = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (s == NULL)
		return (NULL);
	i = 0;
	while ((++i - 1) < ft_strlen(s1))
		s[i - 1] = s1[i - 1];
	i = 0;
	while ((++i - 1) < ft_strlen(s2))
		s[ft_strlen(s1) + (i - 1)] = s2[i - 1];
	s[ft_strlen(s1) + ft_strlen(s2)] = '\0';
	return (s);
}
