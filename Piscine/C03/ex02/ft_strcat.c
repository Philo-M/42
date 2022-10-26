/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmandel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 11:24:20 by pmandel           #+#    #+#             */
/*   Updated: 2021/10/26 11:27:22 by pmandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <string.h>
// #include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	dest_length;

	i = 0;
	dest_length = 0;
	while (dest[dest_length] != '\0')
		dest_length++;
	while (src[i] != '\0')
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
// 	printf("strcat : %s\n", strcat(dest, src));
// 	printf("ft_strcat : %s\n", ft_strcat(dest_ft, src));
// 	return (0);
// }
// 