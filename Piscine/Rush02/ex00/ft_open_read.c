/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_open_read.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmandel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 12:47:13 by pmandel           #+#    #+#             */
/*   Updated: 2021/10/30 23:11:28 by rbicanic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	*ft_open_read(char *dico)
{
	char	*data;
	char	c;
	 int	count;
	 int	i;
	 int	filedesc;

	count = 0;
	i = 0;
	filedesc = open(dico, O_RDONLY);
	while (read(filedesc, &c, 1) > 0)
	{
		count++;
	}
	close(filedesc);
	filedesc = open(dico, O_RDONLY);
	data = (char *)malloc(sizeof(char) * (count + 1));
	while (read(filedesc, &c, 1) > 0)
	{
		data[i] = c;
		i++;
	}
	data[i] = '\0';
	return (data);
}
