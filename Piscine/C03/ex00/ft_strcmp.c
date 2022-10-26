/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmandel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 14:40:26 by pmandel           #+#    #+#             */
/*   Updated: 2021/10/26 10:11:18 by pmandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <string.h>
// #include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	 int	i;
	 int	res;

	i = 0;
	res = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			res = s1[i] - s2[i];
			return (res);
		}
		i++;
	}
	return (res);
}

// int	main(void)
// {
// 	char	*chaine1 = "bjhkj";
// 	char	*chaine2 = "djkhljh";

// 	printf("%s\n", chaine1);
// 	printf("%s\n", chaine2);
// 	printf("strcmp : %d\n", strcmp(chaine1, chaine2));
// 	printf("ft_strcmp : %d\n", ft_strcmp(chaine1, chaine2));
// 	return (0);
// }
// 