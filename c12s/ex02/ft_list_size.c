#include "../ft_list.h"

int ft_list_size(t_list *begin_list)
{
 t_list *i;
 int j = 0;

 i = begin_list;
 while (1)
 {
  if (i == 0) break;
  i = i->next;
  j++;
 }
 return (j);
}
