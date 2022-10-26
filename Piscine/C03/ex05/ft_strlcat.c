/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmandel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 17:26:56 by pmandel           #+#    #+#             */
/*   Updated: 2021/10/26 17:27:01 by pmandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <bsd/string.h>
// #include <stdio.h>

unsigned int	ft_length(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dest_length;
	unsigned int	src_length;
	unsigned int	res;

	i = 0;
	dest_length = ft_length(dest);
	src_length = ft_length(src);
	if (size > 0)
	{
		while (i < src_length && dest_length + i < size - 1)
		{
			dest[dest_length + i] = src[i];
			i++;
		}
		dest[dest_length + i] = '\0';
	}
	if (size >= dest_length)
		res = dest_length + src_length;
	else
		res = size + src_length;
	return (res);
}

// int	main(void)
// {
// 	        char	dest[50] = "abcde";
// 	        char	ft_dest [50] = "abcde";
// 	        char	*src;
// 	unsigned int	size;

// 	src = "fgh";
// 	size = 12 ;
// 	printf("Le size est : %d\n", size);
// 	printf("Le return est : %ld\n", strlcat(dest, src, size));
// 	printf("Le ft_return est : %d\n", ft_strlcat(ft_dest, src, size));
// 	printf("Le dest est : %s\n", dest);
// 	printf("Le ft_dest est : %s", ft_dest);
// 	return (0);
// }
// 