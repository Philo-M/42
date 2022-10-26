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
	int	new_tab[size - 1];

	i = 0;
	while (i <= size - 1)
	{
		new_tab[i] = tab[size - i - 1];
		i++;
	}
	i = 0;
	while (i <= size - 1)
	{
		tab[i] = new_tab[i];
		i++;
	}
}

int	main(void)
{
	int	tab[3];

	tab[0] = {4};
	tab[1] = {3};
	tab[2] = {6};
	ft_rev_int_tab(tab, 3);
	printf("%d %d %d", tab[0], tab[1], tab[2]);
	return (0);
}
