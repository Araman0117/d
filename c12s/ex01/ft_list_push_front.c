#include "../ex00/ft_create_elem.c"

void ft_list_push_front(t_list **begin_list, void *data)
{
 t_list *elem;

 elem = ft_create_elem(data);
 elem->next = *begin_list;
 *begin_list = elem;
}
