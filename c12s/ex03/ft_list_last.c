#include "../ft_list.h"

t_list *ft_list_last(t_list *begin_list)
{
 t_list *elem;

 if (begin_list != 0)
 {
  elem = begin_list;
  while (elem->next != 0) elem = elem->next;
  return (elem);
 }
 return (begin_list);
}
