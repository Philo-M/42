/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_for_check.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmandel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 20:11:55 by pmandel           #+#    #+#             */
/*   Updated: 2021/10/31 18:00:38 by rbicanic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	ft_display_for_check_1(char *str, char **dico)
{
	if (str[0] != '0')
	{
		if (ft_check_dico(&str[0], dico) == -1)
			return (0);
	}
	return (1);
}

int	ft_display_for_check_2(char *str, char **dico)
{
	char	dest[3];

	if (str[0] != '0')
	{
		dest[0] = str[0];
		dest[1] = '0';
		dest[2] = '\0';
		if (ft_check_dico(dest, dico) == -1)
			return (0);
	}
	if (str[1] != '0')
	{
		if (ft_check_dico(&str[1], dico) == -1)
			return (0);
	}
	return (1);
}

int	ft_display_for_check_3(char *str, char **dico)
{
	char	dest[3];

	if (str[0] != '0')
	{
		ft_strncpy(dest, str, 1);
		if (ft_check_dico(dest, dico) == -1)
			return (0);
	}
	if (str[1] != '0')
	{
		dest[0] = str[1];
		dest[1] = '0';
		dest[2] = '\0';
		if (ft_check_dico(dest, dico) == -1)
			return (0);
	}
	if (str[2] != '0')
	{
		if (ft_check_dico(&str[2], dico) == -1)
			return (0);
	}
	return (1);
}

int	ft_display_for_check(char *str, char **dico)
{
	if (ft_strlen(str) == 3)
	{
		if (ft_display_for_check_3(str, dico) == 0)
			ft_putstr("Dict Error\n");
		return (ft_display_for_check_3(str, dico));
	}
	else if (ft_strlen(str) == 2)
	{
		if (ft_display_for_check_2(str, dico) == 0)
			ft_putstr("Dict Error\n");
		return (ft_display_for_check_2(str, dico));
	}
	else
	{
		if (ft_display_for_check_1(str, dico) == 0)
			ft_putstr("Dict Error\n");
		return (ft_display_for_check_1(str, dico));
	}
	return (-1);
}
