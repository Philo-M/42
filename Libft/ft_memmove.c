/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmandel <pmandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 12:10:27 by pmandel           #+#    #+#             */
/*   Updated: 2021/12/14 14:51:16 by pmandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*src_c;
	unsigned char	*dest_c;

	if (src == NULL && dest == NULL)
		return (NULL);
	i = 0;
	src_c = (unsigned char *)src;
	dest_c = (unsigned char *)dest;
	if (src - dest >= 0)
	{
		while (++i - 1 < n)
			dest_c[i - 1] = src_c[i - 1];
	}
	else
	{
		while (++i - 1 < n)
			dest_c[n - 1 - (i - 1)] = src_c[n - 1 - (i - 1)];
	}
	return (dest);
}
