/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmandel <pmandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 12:14:01 by pmandel           #+#    #+#             */
/*   Updated: 2021/11/29 12:14:03 by pmandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t			i;
	unsigned char	uc;

	uc = (unsigned char)c;
	if (uc == '\0')
		return ((char *)(&s[ft_strlen(s)]));
	i = ft_strlen(s);
	while (s[i] != uc && i > 0)
		i--;
	if (i == 0 && s[0] != uc)
		return (NULL);
	else
		return ((char *)(&s[i]));
}
