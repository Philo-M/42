/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmandel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 20:11:55 by pmandel           #+#    #+#             */
/*   Updated: 2021/10/31 23:23:31 by rbicanic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_putstr_s_bef(char *str, int index);

void	ft_display_1(char *str, char **dico)
{
	if (str[0] != '0')
		ft_putstr(dico[ft_check_dico(&str[0], dico)]);
}

void	ft_display_2(char *str, char **dico)
{
	char	dest[3];

	if (str[0] == '1')
	{
		ft_putstr(dico[ft_check_dico(str, dico)]);
		return ;
	}
	if (str[0] != '0')
	{
		dest[0] = str[0];
		dest[1] = '0';
		dest[2] = '\0';
		ft_putstr(dico[ft_check_dico(dest, dico)]);
	}
	if (str[1] != '0')
		ft_putstr_s_bef(dico[ft_check_dico(&str[1], dico)], 1);
}

void	ft_display_3(char *str, char **dico, int index)
{
	char	dest[3];

	if (str[0] != '0')
	{
		ft_strncpy(dest, str, 1);
		ft_putstr_s_bef(dico[ft_check_dico(dest, dico)], index);
		ft_putstr_s_bef("hundred", 1);
		if (ft_check_dico(str, dico) > -1)
			return ;
	}
	if (str[1] == '1')
	{
		ft_putstr(dico[ft_check_dico(&str[1], dico)]);
		return ;
	}
	if (str[1] != '0')
	{
		dest[0] = str[1];
		dest[1] = '0';
		dest[2] = '\0';
		ft_putstr_s_bef(dico[ft_check_dico(dest, dico)], 1);
	}
	if (str[2] != '0')
		ft_putstr_s_bef(dico[ft_check_dico(&str[2], dico)], 1);
}

void	ft_display(char *str, char **dico, int index)
{
	if (ft_strlen(str) == 3)
		ft_display_3(str, dico, index);
	else if (ft_strlen(str) == 2)
		ft_display_2(str, dico);
	else
		ft_display_1(str, dico);
}
