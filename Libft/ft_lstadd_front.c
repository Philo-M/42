/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmandel <pmandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 20:07:33 by pmandel           #+#    #+#             */
/*   Updated: 2021/12/13 16:45:12 by pmandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **alst, t_list *new)
{
	if (*alst == NULL)
	{
		new->next = NULL;
		*alst = new;
		return ;
	}
	if (new == NULL)
		return ;
	new->next = *alst;
	*alst = new;
}
