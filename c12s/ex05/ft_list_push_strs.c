#include "../ex00/ft_create_elem.c"

t_list *ft_list_push_strs(int size, char **strs)
{
 int i = 1;
 if (size > 0)
  t_list *elem = ft_create_elem(strs[size - 1]);

 t_list **beg = &elem;
 while (i < size)
 {
  t_list *tmp = ft_create_elem(strs[size - i - 1]);
  elem->next = tmp;
  elem = tmp;
  i++;
 }
 return (*beg);
}
