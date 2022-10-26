/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmandel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 20:04:39 by pmandel           #+#    #+#             */
/*   Updated: 2021/10/20 22:29:51 by pmandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <bsd/string.h>
// #include <stdio.h>

unsigned int	ft_length(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size == 0)
		return (ft_length(src));
	dest[0] = '\0';
	if (src[0] != '\0')
	{
		while (i < size && src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
		if (ft_length(src) < size)
			dest[i] = '\0';
		else
			dest[i - 1] = '\0';
	}
	return (ft_length(src));
}

// int	main(void)
// {
// 	char	dest[20] = "abc";
// 	char	ft_dest[20] = "abc";
// 	char	src[] = "hello";
// 	unsigned int size = 7;

// 	printf("dest : %s\n", dest);
// 	printf("strlcpy : %lx\n", strlcpy(dest, src, size));
// 	printf("dest : %s\n\n", dest);

// 	printf("ft_dest : %s\n", ft_dest);
// 	printf("ft_strlcpy : %x\n", ft_strlcpy(ft_dest, src, size));
// 	printf("ft_dest : %s\n", ft_dest);

// 	return (0);
// }
