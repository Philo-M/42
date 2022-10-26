/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmandel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 11:28:15 by pmandel           #+#    #+#             */
/*   Updated: 2021/10/29 11:28:18 by pmandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <unistd.h>
#include <stdlib.h>

int	ft_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_len_total(int size, char **strs, char *sep)
{
	int	i;
	int	len_strs_total;
	int	len_total;

	i = 0;
	len_strs_total = 0;
	if (size == 0)
		return (1);
	while (i < size)
	{
		len_strs_total = len_strs_total + ft_len((strs)[i]);
		i++;
	}
	len_total = len_strs_total + (size - 1) * ft_len(sep) + 1;
	return (len_total);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*dest;
	 int	i;
	 int	j;
	 int	k;
	 int	count;

	dest = (char *)malloc(sizeof(char) * ft_len_total(size, strs, sep));
	if (dest == NULL)
		return (NULL);
	i = 0;
	count = 0;
	while (i < size)
	{
		j = -1;
		while (++j < ft_len(strs[i]))
			dest[count + j] = strs[i][j];
		k = -1;
		while (++k < ft_len(sep) && i < size - 1)
			dest[count + j + k] = sep[k];
		count = count + j + k;
		i++;
	}
	dest[count] = '\0';
	return (dest);
}

// int	main(void)
// {
// 	 int	size = 0;
// 	char	*strs[] = {"abcd","efgh", "ijkl"};
// 	char	*dest;
// 	char	*sep = "TOP";

// 	// printf("strs 0 a 2 : %s%s%s\n", strs[0], strs[1], strs[2]);
// 	dest = ft_strjoin(size, strs, sep);
// 	printf("dest : %s", dest);
// 	return (0);
// }