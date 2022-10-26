/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_allocated_memory.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbicanic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 15:07:38 by rbicanic          #+#    #+#             */
/*   Updated: 2021/10/31 15:38:10 by rbicanic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	free_memory(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}
