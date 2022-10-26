/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmandel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 10:44:55 by pmandel           #+#    #+#             */
/*   Updated: 2021/10/26 10:45:01 by pmandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <string.h>
// #include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	 unsigned int	i;
	          int	res;

	i = 0;
	res = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
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
// 	char	*chaine1 = "cbomj";
// 	char	*chaine2 = "bonk";

// 	printf("%s\n", chaine1);
// 	printf("%s\n", chaine2);
// 	printf("strncmp : %d\n", strncmp(chaine1, chaine2, 0));
// 	printf("ft_strncmp : %d\n", ft_strncmp(chaine1, chaine2, 0));
// 	return (0);
// }
// 