/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cut_str_ini.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmandel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 15:25:44 by pmandel           #+#    #+#             */
/*   Updated: 2021/10/24 09:14:00 by pmandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "header.h"

// Extrait un bout de chaine de caracteres
char	*ft_cut_str_ini(int start, int end, char *src, char *dest)
{
	int	i;

	i = 0;
	while (i < end - start + 1)
	{
		dest[i] = src[start + i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
