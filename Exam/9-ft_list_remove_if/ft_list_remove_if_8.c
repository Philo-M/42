#include <stdlib.h>

typedef struct      s_list
{
    struct s_list   *next;
    void            *data;
}                   t_list;

int	cmp(void *a, void *b)
{
	int	*ia;
	int	*ib;

	ia = (int *)a;
	ib = (int *)b;
	if (*ia == *ib)
		return (0);
	return (1);
}

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	*current;
	t_list	*tmp;

	if (begin_list == NULL || *begin_list == NULL || data_ref == NULL)
		return ;
	current = *begin_list;
	while (cmp(current->data, data_ref) == 0)
	{
		tmp = current;
		current = current->next;
		free(tmp);
	}
	*begin_list = current;
	while (current && current->next)
	{
		if (cmp(current->next->data, data_ref) == 0)
		{
			tmp = current->next;
			current->next = current->next->next;
			free(tmp);
		}
		else
			current = current->next;
	}
}

#include <stdio.h>

int	main(void)
{
	char	*a = "ab";
	char	*b = "ef";
	char	*c = "gh";
	char	*d = "gh";

	t_list	**begin_list;
	t_list	*current;
	void	*data_ref;	

	data_ref = malloc(sizeof(int));
	data_ref = (void *)("gh");
	begin_list = (t_list **)malloc(sizeof(t_list *));
	*begin_list = (t_list *)malloc(sizeof(t_list));
	current = *begin_list;
	current->data = (void *)(a);
	current->next = (t_list *)malloc(sizeof(t_list));
	current->next->data = (void *)(b);
	current->next->next = (t_list *)malloc(sizeof(t_list));
	current->next->next->data = (void *)(c);
	current->next->next->next = (t_list *)malloc(sizeof(t_list));
	current->next->next->next->data = (void *)(d);
	current->next->next->next->next = NULL;
	current = *begin_list;
	while (current)
	{
		printf("%s\n", (char *)current->data);
		current = current->next;
	}
	current = *begin_list;
	ft_list_remove_if(begin_list, data_ref, cmp);
	current = *begin_list;
	while (current)
	{
		printf("%s\n", (char *)current->data);
		current = current->next;
	}
	return (0);
}

