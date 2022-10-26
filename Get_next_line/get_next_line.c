/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmandel <pmandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 13:01:46 by pmandel           #+#    #+#             */
/*   Updated: 2022/01/05 15:57:12 by pmandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	char	*s;
	size_t	s1_len;
	size_t	s2_len;

	if ((char *)s1 == NULL && (char *)s2 == NULL)
		return (NULL);
	if ((char *)s1 == NULL)
		return (ft_strdup((char *)s2));
	if ((char *)s2 == NULL)
		return (ft_strdup((char *)s1));
	s1_len = ft_strlen_c(s1, '\0');
	s2_len = ft_strlen_c(s2, '\0');
	s = (char *)malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (s == NULL)
		return (NULL);
	i = 0;
	while ((++i - 1) < s1_len)
		s[i - 1] = s1[i - 1];
	i = 0;
	while ((++i - 1) < s2_len)
		s[s1_len + (i - 1)] = s2[i - 1];
	s[s1_len + s2_len] = '\0';
	return (s);
}

static char	*rest_before(char *s)
{
	char	*rest_before_n;
	size_t	s_len_n0;

	if (s == NULL)
		return (NULL);
	s_len_n0 = ft_strlen_c(s, '\n');
	rest_before_n = (char *)malloc(sizeof(char) * (s_len_n0 + 1));
	if (rest_before_n == NULL)
		return (NULL);
	ft_strlcpy(rest_before_n, s, s_len_n0 + 1);
	return (rest_before_n);
}

static char	*rest_after(char *s)
{
	char	*rest_after_n;
	size_t	s_len_n0;
	size_t	s_len_0;

	if (s == NULL)
		return (NULL);
	s_len_n0 = ft_strlen_c(s, '\n');
	s_len_0 = ft_strlen_c(s, '\0');
	rest_after_n = (char *)malloc(sizeof(char) * (s_len_0 - s_len_n0 + 1));
	if (rest_after_n == NULL)
		return (NULL);
	if (s_len_n0 < s_len_0)
		ft_strlcpy(rest_after_n, ft_strrchr_1(s, '\n') + 1, \
			s_len_0 - s_len_n0 + 1);
	else
		rest_after_n[0] = '\0';
	return (rest_after_n);
}

static char	*rest_feed(char *s, int fd)
{
	char		*tmp;
	int			len_read;
	char		*buf;

	len_read = 1;
	while (s == NULL || (ft_strrchr_2(s, '\n') == 0 && len_read > 0))
	{
		buf = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
		if (buf == NULL)
			return (NULL);
		len_read = read(fd, (void *)buf, BUFFER_SIZE);
		if (len_read < 0)
		{
			free (buf);
			return (NULL);
		}
		buf[len_read] = '\0';
		tmp = ft_strjoin(s, buf);
		free (buf);
		free(s);
		s = tmp;
	}
	return (s);
}

char	*get_next_line(int fd)
{
	static char	*rest;
	char		*rest_before_n;
	char		*rest_after_n;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	rest = rest_feed(rest, fd);
	if (rest == NULL)
	{
		free (rest);
		return (NULL);
	}
	rest_before_n = rest_before(rest);
	rest_after_n = rest_after(rest);
	free (rest);
	rest = rest_after_n;
	if (rest_before_n[0] == '\0')
	{
		free (rest);
		rest = NULL;
		free (rest_before_n);
		rest_before_n = NULL;
		return (NULL);
	}
	return (rest_before_n);
}
