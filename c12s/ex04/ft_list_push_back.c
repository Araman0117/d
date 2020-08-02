#include "../ex00/ft_create_elem.c"

void ft_list_push_back(t_list **begin_list, void *data)
{
 if (*begin_list == 0) return ;

 t_list *elem = ft_create_elem(data);

 (*begin_list)->next = elem;
}
