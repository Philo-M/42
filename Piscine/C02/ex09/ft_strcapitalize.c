/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmandel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 18:27:09 by pmandel           #+#    #+#             */
/*   Updated: 2021/10/20 19:52:46 by pmandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	ft_rang_0(char c)
{
	if (c >= 97 && c <= 122)
		c = c - 32;
	return (c);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	str[0] = ft_rang_0(str[0]);
	i = 0;
	while (i++, str[i] != '\0')
	{
		if (str[i - 1] >= 65 && str[i - 1] <= 90)
		{
			if (str[i] >= 65 && str[i] <= 90)
				str[i] = str[i] + 32;
		}
		else if (str[i - 1] >= 97 && str[i - 1] <= 122)
		{
			if (str[i] >= 65 && str[i] <= 90)
				str[i] = str[i] + 32;
		}
		else if (str[i - 1] >= 48 && str[i - 1] <= 57)
		{
			if (str[i] >= 65 && str[i] <= 90)
				str[i] = str[i] + 32;
		}
		else if (str[i] >= 97 && str[i] <= 122)
			str[i] = str[i] - 32;
	}
	return (str);
}

// int	main(void)
// {
// 	char	s[] = "SAlut, coMment Tu vaS ? 41MOts viNGt-Deux; treNte+eT+Un";

// 	printf("%s", ft_strcapitalize(s));
// 	return (0);
// }
