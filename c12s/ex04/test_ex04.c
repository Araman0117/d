#include "ft_list_push_back.c"
#include "../ex03/ft_list_last.c"
#include <unistd.h>

int main()
{
 t_list *elem = ft_create_elem("firstt");
 t_list **beg = &elem;
 ft_list_push_back(beg, "second");
 t_list *last = ft_list_last(elem);
 char *str = (char*)(last->data);
 write(1, str, 6);
 return (0);
}
