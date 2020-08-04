#include "../ft_list.h"

t_list *ft_list_at
(t_list *begin_list, unsigned int nbr)
{
 unsigned int i = nbr;
 t_list *link = begin_list;

 while (i--)
 {
  link = link->next;
 }
 return (link);
}
