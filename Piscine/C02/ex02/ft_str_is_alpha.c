/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmandel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 19:11:21 by pmandel           #+#    #+#             */
/*   Updated: 2021/10/20 18:59:21 by pmandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
			if (str[i] < 'A' || str[i] > 'Z')
				return (0);
		i++;
	}
	return (1);
}

// int	main(void)
// {
// 	char	*chaine;

// 	chaine = "asd";
// 	printf("%d", ft_str_is_alpha(chaine));
// }
