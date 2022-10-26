/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   decoup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmerzoug <fmerzoug@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 17:36:11 by fmerzoug          #+#    #+#             */
/*   Updated: 2021/10/31 23:16:34 by rbicanic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	*ft_strdup(char *str, int len)
{
	char	*dest;
	 int	j;

	j = 0;
	dest = malloc(sizeof(char) * (len + 1));
	if (dest == NULL)
		return (NULL);
	while (j < len)
	{
		dest[j] = str[j];
		j++;
	}
	dest[j] = '\0';
	return (dest);
}

int	nbr_bloc(char *str)
{
	if (ft_strlen(str) % 3 > 0)
		return (ft_strlen(str) / 3 + 1);
	else
		return (ft_strlen(str) / 3);
}

char	**ft_decoup(char *str)
{
	 int	i;
	 int	j;
	char	**tab;
	 int	nbrbloc;

	j = 0;
	i = 0;
	nbrbloc = nbr_bloc(str);
	tab = malloc(sizeof(char *) * (nbrbloc + 1));
	if (tab == NULL)
		return (NULL);
	if (ft_strlen(str) % 3 > 0)
	{
		tab[j] = ft_strdup(str, ft_strlen(str) % 3);
		i += ft_strlen(str) % 3;
		j++;
	}
	while (i < ft_strlen(str))
	{
		tab[j] = ft_strdup(&str[i], 3);
		i += 3;
		j++;
	}
	tab[j] = 0;
	return (tab);
}
