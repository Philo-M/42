/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmandel <pmandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 12:12:49 by pmandel           #+#    #+#             */
/*   Updated: 2021/11/29 12:12:53 by pmandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	dst[0] = '\0';
	if (src[0] != '\0')
	{
		while (i < size && src[i] != '\0')
		{
			dst[i] = src[i];
			i++;
		}
		if (ft_strlen(src) < size)
			dst[i] = '\0';
		else
			dst[i - 1] = '\0';
	}
	return (ft_strlen(src));
}
