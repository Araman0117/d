#include "ft_list_last.c"
#include "../ex01/ft_list_push_front.c"
#include "../ex02/ft_list_size.c"
#include <unistd.h>
#include <stdio.h>

int main()
{
 t_list *elem = ft_create_elem("last");
 t_list **beg = &elem;
 int i = 0;

 while (i < 4)
 {
  ft_list_push_front(beg, "not last");
  i++;
 }

 i = ft_list_size(*beg);
 t_list *last = ft_list_last(*beg);
 char *str = (char*)(last->data);

 printf("%d elements\n", i);
 write(1, str, 4);
 return (0);
}
