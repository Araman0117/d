#include "ft_list_size.c"
#include "../ex01/ft_list_push_front.c"
#include <stdio.h>

int main()
{
 t_list *elem = ft_create_elem("1");
 t_list **beg = &elem;
 int k = 0;
 while (k < 19)
 {
  ft_list_push_front(beg, "1");
  k++;
 }
 int a = ft_list_size(*beg);
 printf("%d elements", a);
 return (0);
}
