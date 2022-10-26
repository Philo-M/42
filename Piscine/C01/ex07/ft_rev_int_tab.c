/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmandel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 22:09:09 by pmandel           #+#    #+#             */
/*   Updated: 2021/10/18 23:37:26 by pmandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	t;

	i = 0;
	while (i < size / 2)
	{
		t = tab[size - i - 1];
		tab[size - i - 1] = tab[i];
		tab[i] = t;
		i++;
	}
}

int	main(void)
{
	int	tab[3] = {4, 8, 5};

	ft_rev_int_tab(tab, 3);
	printf("%d", tab[0]);
	printf("%d", tab[1]);
	printf("%d", tab[2]);
	return (0);
}
