#include "../ft_list.h"
#include <stdlib.h>
#include <unistd.h>

t_list **ft_list_clear
(t_list **b, void (*free_fct)(void *))
{
 t_list *tmp;

 while (*b != NULL)
 {
  tmp = (*b)->next;
  free_fct((*b)->data);
  free((*b));
  (*b) = tmp;
 }
 return (b);
}
