/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmandel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 12:07:21 by pmandel           #+#    #+#             */
/*   Updated: 2021/10/26 12:07:31 by pmandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	         int	dest_length;

	i = 0;
	dest_length = 0;
	while (dest[dest_length] != '\0')
		dest_length++;
	while (src[i] != '\0' && i < nb)
	{
		dest[dest_length + i] = src[i];
		i++;
	}
	dest[dest_length + i] = '\0';
	return (dest);
}

// int	main(void)
// {
// 	char	dest[6];
// 	char	dest_ft[6];
// 	char	src[3];
// 	 int	nb;

// 	nb = 5;
// 	src[0] = 'a';
// 	src[1] = 'b';
// 	src[2] = '\0';
// 	dest[0] = 'e';
// 	dest[1] = 'f';
// 	dest[2] = 'g';
// 	dest[3] = '\0';
// 	dest_ft[0] = 'e';
// 	dest_ft[1] = 'f';
// 	dest_ft[2] = 'g';
// 	dest_ft[3] = '\0';
// 	printf("%s\n", dest);
// 	printf("%s\n", src);
// 	printf("strncat : %s\n", strncat(dest, src, nb));
// 	printf("ft_strncat : %s\n", ft_strncat(dest_ft, src, nb));
// 	return (0);
// }
// s