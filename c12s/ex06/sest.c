#include "../ex04/ft_list_push_back.c"
#include "../ex02/ft_list_size.c"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
 t_list *f_elem = ft_create_elem("fst");
 t_list **link = &f_elem;

 ft_list_push_back(link, "snd");
 ft_list_push_back(link, "trd");
 ft_list_push_back(link, "4th");
 ft_list_push_back(link, "5th");
 ft_list_push_back(link, "6th");
 
 printf("%d elems to free\n"
   , ft_list_size(f_elem));

 t_list *k = f_elem;
 t_list *tmp;
 while (k != NULL)
 {
  k->data = NULL;
  tmp = k->next;
  free(k);
  k = tmp;
 }
 
printf("%d elems left\n"
   , ft_list_size(tmp));

 char *str = f_elem
 return (0);
}
