#include "ft_list_at.c"
#include "../ex04/ft_list_push_back.c"
#include "../ex02/ft_list_size.c"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
 t_list *f_elem = ft_create_elem("fst");
 t_list *print;
 t_list *ret;
 t_list **link = &f_elem;

 ft_list_push_back(link, "snd");
 ft_list_push_back(link, "trd");
 ft_list_push_back(link, "4th");
 ft_list_push_back(link, "5th");
 ft_list_push_back(link, "6th");
 
 print = f_elem;
 while (print)
 {
  write(1, print->data, 3);
  write(1, "\n", 1);
  print = print->next;
 }

 ret = ft_list_at(f_elem, 3);
 write(1, ret->data, 3);
 write(1, "\n", 1);

 return (0);
}
