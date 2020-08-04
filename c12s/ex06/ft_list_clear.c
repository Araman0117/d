#include "../ft_list.h"
#include <stdlib.h>

void ft_list_clear
(t_list **link, void (*free_fct)(void*))
{
 t_list *curr = (*link)->next;
 t_list *tmp;

 while (curr)
 {
  tmp = curr;
  curr = curr->next;
  free_fct(tmp->data);
  free(tmp);
 }
 free_fct((*link)->data);
 (*link)->next = NULL;
 free(*link);
 (*link) = NULL;
}
