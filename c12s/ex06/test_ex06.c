#include "ft_list_clear.c"
#include "../ex04/ft_list_push_back.c"
#include "../ex02/ft_list_size.c"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void free_fct(void *data)
{
 free(data);
}

int main()
{
 t_list *f_elem = ft_create_elem("fst");
 t_list *print;
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

 ft_list_clear(link, &free_fct);

 write(1, f_elem->data, 3);

 return (0);
}
