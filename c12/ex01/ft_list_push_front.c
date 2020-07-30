#include "ft_list.h"

void ft_list_push_front
(t_list **begin_list, void *data)
{
  t_list *tmp;

  tmp = ft_create_elem(data);
  (*begin_list)->next = tmp;
}
