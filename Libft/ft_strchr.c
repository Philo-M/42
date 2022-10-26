/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmandel <pmandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 12:11:51 by pmandel           #+#    #+#             */
/*   Updated: 2021/11/29 12:11:53 by pmandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t			i;
	unsigned char	uc;

	uc = (unsigned char)c;
	if (uc == '\0')
		return ((char *)(&s[ft_strlen(s)]));
	i = 0;
	while (s[i] != uc && s[i])
		i++;
	if (i == ft_strlen(s))
		return (NULL);
	else
		return ((char *)(&s[i]));
}
