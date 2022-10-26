#include <stdlib.h>
#include <stdio.h>

typedef struct		s_list
{
	int				data;
	struct s_list	*next;
}					t_list;

int	cmp(int a, int b)
{
	return (a <= b);
}

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	int		swap;
	t_list	*first;

	first = lst;
	while (lst && lst->next)
	{
		if (cmp(lst->data, lst->next->data) == 0)
		{
			swap = lst->data;
			lst->data = lst->next->data;
			lst->next->data = swap;
			lst = first;
		}
		else
			lst = lst->next;
	}
	return (first);
}

int	main(void)
{
	t_list	*list;
	int		i;
	int		j;
	int		k;
	int		l;

	k = 2;
	j = 4;
	l = 1;
	i = 3;
	list = (t_list *)malloc(sizeof(t_list));
	list->data = k;
	list->next = (t_list *)malloc(sizeof(t_list));
	list->next->data = j;
	list->next->next = (t_list *)malloc(sizeof(t_list));
	list->next->next->data = l;
	list->next->next->next = (t_list *)malloc(sizeof(t_list));
	list->next->next->next->data = i;
	list->next->next->next->next = NULL;
	sort_list(list, cmp);
	while (list)
	{
		printf("%d\n", list->data);
		list = list->next;
	}
	return (0);
}

