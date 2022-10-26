/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmandel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 18:33:37 by pmandel           #+#    #+#             */
/*   Updated: 2021/10/20 18:59:13 by pmandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	if (n > 0)
	{
		dest[0] = src[0];
		i = 1;
		while (i < n)
		{
			if (src[i] != '\0' && dest[i - 1] != '\0')
				dest[i] = src[i];
			else
				dest[i] = '\0';
			i++;
		}
	}
	return (dest);
}

// int	main(void)
// {
// 	char	dest[10] = "abcde";
// 	char	ft_dest[10] = "abcde";
// 	char	src[] = "wx";
// 	unsigned int	n = 15;

// 	printf("strncpy : %s\n", strncpy(dest, src, n));
// 	printf("dest : %s\n", dest);
// 	printf("ft_strncpy : %s\n", ft_strncpy(ft_dest, src, n));
// 	printf("ft_dest : %s\n", ft_dest);

// 	return (0);
// }
// 