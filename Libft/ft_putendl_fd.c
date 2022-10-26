/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmandel <pmandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 18:24:52 by pmandel           #+#    #+#             */
/*   Updated: 2021/11/30 18:24:55 by pmandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	char	c;
	int		i;

	if (s == NULL)
		return ;
	c = '\n';
	i = -1;
	while (s[++i])
		write(fd, &s[i], 1);
	write(fd, &c, 1);
}
