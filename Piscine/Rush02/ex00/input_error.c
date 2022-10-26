/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbicanic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 15:11:52 by rbicanic          #+#    #+#             */
/*   Updated: 2021/10/31 17:28:58 by rbicanic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	input_char_error(char *input)
{
	while (*input)
	{
		if (*input < '0' || *input > '9')
			return (1);
		input++;
	}
	return (0);
}

long long int	ft_atoi(char *input)
{
	long long int	nb;

	nb = 0;
	while (*input >= '0' && *input <= '9')
	{
		nb = nb * 10 + *input - '0';
		input++;
	}
	return (nb);
}

int	param_error(char *input)
{
	long long int	max_unsigned;

	max_unsigned = 4294967295;
	if (input_char_error(input))
		return (1);
	else if (ft_atoi(input) > max_unsigned || ft_strlen(input) > 10)
		return (1);
	return (0);
}
