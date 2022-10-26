/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmandel <pmandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 12:14:33 by pmandel           #+#    #+#             */
/*   Updated: 2021/11/29 12:14:35 by pmandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	size_t	slen;
	size_t	size;

	if (s == NULL)
		return (NULL);
	slen = ft_strlen(s);
	if ((size_t)start + len > slen && slen > (size_t)start)
		size = slen - (size_t)start;
	else if ((size_t)start + len > slen && slen <= (size_t)start)
		size = 0;
	else
		size = len;
	str = (char *)malloc(sizeof(char) * (size + 1));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (i < len && (size_t)start + i < slen)
	{
		str[i] = s[(size_t)start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
