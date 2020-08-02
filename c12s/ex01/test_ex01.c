#include "ft_list_push_front.c"
#include <unistd.h>

int main()
{
 t_list *first;
 t_list **beg;
 char *str;

 first = ft_create_elem("\nI am First");
 beg = &first;
 ft_list_push_front(beg, "I am Second");
 str = (char*)((*beg)->data);
 write(1, str, 11);

 char *str2;

 str2 = (char*)((*beg)->next->data);
 write (1, str2, 11);
 return (0);
}
