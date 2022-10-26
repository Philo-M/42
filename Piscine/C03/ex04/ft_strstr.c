/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmandel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 13:05:03 by pmandel           #+#    #+#             */
/*   Updated: 2021/10/26 13:05:09 by pmandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <string.h>
// #include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
		return (&str[0]);
	while (str[i] != '\0')
	{
		j = 0;
		if (str[i] == to_find[0])
		{
			while (str[i + j] == to_find[j])
			{
				j++;
				if (to_find[j] == '\0')
					return (&str[i]);
			}
		}
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	char	*str;
// 	char	*to_find;

// 	str = "abcd";
// 	to_find = "abc";
// 	printf("strstr : %s\n", strstr(str, to_find));
// 	printf("ft_strstr : %s\n", ft_strstr(str, to_find));
// }
// 