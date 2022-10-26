/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmandel <pmandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 13:01:46 by pmandel           #+#    #+#             */
/*   Updated: 2022/01/05 15:58:06 by pmandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

size_t	ft_strlen_c(const char *str, char c)
{
	size_t	i;

	i = 0;
	while (!(str[i] == '\0' || str[i] == c))
		i++;
	if (c == '\n' && str[i] == c)
		i++;
	return (i);
}

char	*ft_strrchr_1(const char *s, int c)
{
	size_t			i;
	unsigned char	uc;
	size_t			s_len;

	s_len = ft_strlen_c(s, '\0');
	uc = (unsigned char)c;
	if (uc == '\0')
		return ((char *)(&s[s_len]));
	i = 0;
	while (s[i] != uc && i < s_len)
		i++;
	if (i == s_len)
		return (NULL);
	else
		return ((char *)(&s[i]));
}

int	ft_strrchr_2(const char *s, int c)
{
	size_t			i;
	unsigned char	uc;
	size_t			s_len;

	s_len = ft_strlen_c(s, '\0');
	uc = (unsigned char)c;
	if (uc == '\0')
		return (1);
	i = 0;
	while (s[i] != uc && i < s_len)
		i++;
	if (i == s_len)
		return (0);
	else
		return (1);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	src_len;

	i = 0;
	src_len = ft_strlen_c(src, '\0');
	if (size == 0)
		return (src_len);
	dst[0] = '\0';
	if (src[0] != '\0')
	{
		while (i < size && src[i] != '\0')
		{
			dst[i] = src[i];
			i++;
		}
		if (src_len < size)
			dst[i] = '\0';
		else
			dst[i - 1] = '\0';
	}
	return (src_len);
}

char	*ft_strdup(const char *s)
{
	char	*str;
	size_t	s_len;
	size_t	i;

	s_len = ft_strlen_c(s, '\0');
	str = (char *)malloc(sizeof(char) * (s_len + 1));
	if (str == NULL)
		return (NULL);
	i = 0;
	while ((++i - 1) < s_len)
		str[i - 1] = s[i - 1];
	str[s_len] = '\0';
	return (str);
}
