/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trim_dico.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbicanic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 14:18:53 by rbicanic          #+#    #+#             */
/*   Updated: 2021/10/31 22:16:15 by rbicanic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	trim(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		while (str[i] == ' ')
			ft_strcpy(&str[i], &str[i + 1]);
		while (str[i] >= '0' && str[i] <= '9')
			i++;
		while (str[i] != ':' && str[i] != '\n' && str[i] != '\0')
			ft_strcpy(&str[i], &str[i + 1]);
		i++;
		while (str[i] == ' ')
			ft_strcpy(&str[i], &str[i + 1]);
		while (str[i] != '\n' && str[i] != '\0')
			i++;
		i++;
	}
}

char	*del_useless_zero(char *input)
{
	int	i;
	int	len;

	i = 0;
	len = ft_strlen(input);
	while (input[i] == '0' && i < len - 1)
		i++;
	return (&input[i]);
}
