/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmandel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 12:47:13 by pmandel           #+#    #+#             */
/*   Updated: 2021/10/31 23:06:45 by rbicanic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_putstr_s_bef(char *str, int index);
char	*del_useless_zero(char *input);

void	ft_displaymain(char **input, char **dico, char *a_pow)
{
	int	i;
	int	pow;

	i = 0;
	while (input[i])
	{
		ft_display(input[i], dico, i);
		if (ft_strslen(input) - i > 1)
		{
			pow = (ft_strslen(input) - i - 1) * 3;
			a_pow = itoa(power(10, pow));
			if (ft_strcmp(input[i], "000"))
				ft_putstr_s_bef(dico[ft_check_dico(a_pow, dico)], 1);
			free(a_pow);
		}
		i++;
	}
}

int	check_user(int argc, char *argv[], char **str, char ***input)
{
	if (argc < 2 || argc > 3)
		return (0);
	else if (argc == 2)
	{
		if (param_error(del_useless_zero(argv[1])))
			return (0);
		*str = ft_open_read("numbers.dict");
		*input = ft_decoup(del_useless_zero(argv[1]));
	}
	else
	{
		if (param_error(del_useless_zero(argv[2])))
			return (0);
		*str = ft_open_read(argv[1]);
		*input = ft_decoup(del_useless_zero(argv[2]));
	}
	return (1);
}

int	ft_checkinput(char **input, char **dico)
{
	int	i;

	i = 0;
	while (input[i])
	{
		if (ft_display_for_check(input[i], dico) == 0)
			return (0);
		i++;
	}
	return (1);
}

int	main(int argc, char *argv[])
{
	char	*str;
	char	**dico;
	char	**input;
	char	*a_pow;

	a_pow = NULL;
	if (!check_user(argc, argv, &str, &input))
	{
		ft_putstr("Error");
		return (0);
	}
	trim(str);
	dico = ft_split(str, ":\n");
	if (input[0][0] == '0')
		ft_putstr_s_bef(dico[ft_check_dico("0", dico)], 0);
	if (!ft_checkinput(input, dico))
		return (0);
	ft_displaymain(input, dico, a_pow);
	free_memory(dico);
	free_memory(input);
	free(str);
	return (0);
}
