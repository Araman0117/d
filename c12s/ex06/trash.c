//#include "ft_list_clear.c"
#include "../ex04/ft_list_push_back.c"
#include "../ex02/ft_list_size.c"
#include <stdio.h>
//#include <unistd.h>

#include "../ft_list.h"
#include <stdlib.h>
#include <unistd.h>

t_list *ft_list_clear
(t_list *b, void (*free_fct)(void *))
{
 t_list *tmp;
 t_list *begin;

 begin = b;
 while (b != NULL)
 {
  tmp = (b)->next;
  free_fct((b)->data);
  free((b));
  (b) = tmp;
 }
 return (begin);
}

void free_fct(void *data)
{
 data = NULL;
}

int main()
{
 t_list *elem = ft_create_elem("somedata");
 t_list **beg = &elem;
 int i = 0;

 while (i < 9)
 {
  ft_list_push_back(beg, "somedata");
  i++;
 }

 printf("%d elems before clear\n"
   , ft_list_size(elem));
 elem = ft_list_clear((elem), &free_fct);
 printf("%d elems after clear\n"
   , ft_list_size(elem));

 return (0);
}
