#include "../ex00/ft_create_elem.c"

t_list *ft_list_push_strs(int size, char **strs)
{
	int i = 1;
	if (size > 0)
	{
		t_list *elem = ft_create_elem(strs[0]);
		t_list **beg = &elem;
		while (i < size)
		{
			t_list *tmp = ft_create_elem(strs[i]);
			tmp->next = elem;
			elem = tmp;
			i++;
		}
		return (*beg);
	}
	else
		return (NULL);
}
