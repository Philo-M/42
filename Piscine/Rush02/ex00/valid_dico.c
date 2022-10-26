/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_dico.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmandel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 17:25:22 by pmandel           #+#    #+#             */
/*   Updated: 2021/10/31 21:09:03 by rbicanic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	valid_row(char *str)
{
	 int	i;
	 int	len;

	len = ft_strlen(str);
	i = 0;
	if (str[0] == '\n')
		return (1);
	else
	{
		while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
			i++;
		if (!(str[i] >= 48 && str[i] <= 57))
			return (0);
		while (str[i] != ':' && i < len)
			i++;
		if (str[i] != ':')
			return (0);
		i++;
		if (!(str[i] >= 32 && str[i] <= 126))
			return (0);
	}
	return (1);
}

int	valid_dico(char *str)
{
	 int	i;
	 int	j;
	char	*dest;
	 int	len;

	i = 0;
	len = ft_strlen(str);
	str[len] = '\n';
	while (i < len)
	{
		j = 0;
		while (str[i + j] != '\n' && str[i + j])
			j++;
		dest = (char *)malloc(sizeof(char) * (j + 1));
		ft_strncpy(dest, &str[i], j + 1);
		if (valid_row(dest) == 0)
			return (0);
		free(dest);
		i = i + j + 1;
	}
	return (1);
}
