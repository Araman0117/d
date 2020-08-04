#include <stdlib.h>
#include "../ft_list.h"

t_list *ft_create_elem(void *data)
{
 t_list *tmp;
 char *len;
 char *kvtr;
 int i = 0;

 len = (char*)data;
 while (*len)
 {
  i++;
  len++;
 }
 tmp = (t_list*)malloc(sizeof(t_list));
 kvtr = (char*)malloc(sizeof(char) * (i + 1));
 while (i--)
  kvtr[i] = ((char*)data)[i];
 tmp->next = NULL;
 tmp->data = kvtr;
 return (tmp);
}
