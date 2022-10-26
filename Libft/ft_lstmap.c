/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmandel <pmandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 17:34:50 by pmandel           #+#    #+#             */
/*   Updated: 2021/12/09 19:33:11 by pmandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*lst2;
	t_list	*tmp;

	if (lst == NULL || f == NULL)
		return (NULL);
	lst2 = ft_lstnew(f(lst->content));
	tmp = lst2;
	lst = lst->next;
	while (lst)
	{
		tmp->next = ft_lstnew(f(lst->content));
		if (tmp->next == NULL)
		{
			ft_lstclear(&lst2, del);
			return (NULL);
		}
		tmp = tmp->next;
		lst = lst->next;
	}
	return (lst2);
}
