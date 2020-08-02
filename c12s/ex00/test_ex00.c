#include <unistd.h>
#include "ft_create_elem.c"

int main()
{
 t_list *elem;
 char *str;
 char *hello;

 hello = "hello";
 elem=ft_create_elem(hello);
 str = (char*)(elem->data);
 write(1, str, 5);
 return (0);
}
