//#define NEXT ((void*)0)
#include <stdlib.h>
#include "ft_list.h"

t_list  *ft_create_elem(void* data)
{
  t_list *tmp;

  tmp = (t_list*)malloc(sizeof(t_list));
  tmp->data = data;
  tmp->next = NUL;
  return (tmp);
}
