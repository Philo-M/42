/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_dico.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbicanic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 21:48:59 by rbicanic          #+#    #+#             */
/*   Updated: 2021/10/31 23:20:59 by rbicanic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	ft_check_dico(char *str, char **dico)
{
	int	i;

	i = 0;
	while (i < ft_strslen(dico))
	{
		if (!ft_strcmp(str, dico[i]))
			return (i + 1);
		i += 2;
	}
	return (-1);
}
