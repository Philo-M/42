/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cree_ext.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmandel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 15:25:44 by pmandel           #+#    #+#             */
/*   Updated: 2021/10/24 09:14:00 by pmandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "header.h"

// Cree les 4 chaines de 4 caracteres exterieurs
void	ft_cree_ext(char *src)
{
	char	cu[4];
	char	cd[4];
	char	rl[4];
	char	rr[4];

	ft_cut_str_ini(0, 2, src, cu);
	ft_cut_str_ini(3, 5, src, cd);
	ft_cut_str_ini(6, 8, src, rl);
	ft_cut_str_ini(9, 11, src, rr);
	ft_fill(cu);
}
