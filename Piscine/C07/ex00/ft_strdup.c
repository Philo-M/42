/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmandel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 21:11:32 by pmandel           #+#    #+#             */
/*   Updated: 2021/10/28 21:11:36 by pmandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>
#include <stdlib.h>

int	ft_len(char *src)
{
	int	i;

	i = 0;
	while (src[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	 int	i;

	dest = (char *)malloc(sizeof(char) * (ft_len(src) + 1));
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (i < ft_len(src))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// int	main(void)
// {
// 	char	src[] = "abcd";
// 	char	*dest;
// 	char	*dest_ft;

// 	dest_ft = ft_strdup(src);
// 	printf("src_ft est : %s$\n", src);
// 	printf("dest_ft est : %s$\n", dest_ft);
// 	printf("src_ft apres : %p\n", src);
// 	printf("dest_ft apres : %p\n\n", dest_ft);

// 	dest = strdup(src);
// 	printf("src est : %s$\n", src);
// 	printf("dest_ est : %s$\n", dest);
// 	printf("src apres : %p\n", src);
// 	printf("dest apres : %p\n", dest);
// 	return (0);

// }