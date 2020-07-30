#include "ft_list_push_front.c"
//void  ft_list_push_front
//(t_list **begin_list, void *data);

int main(void)
{
  int a, b;
  t_list *list;
  t_list **listlist;

  a = 5; b = 20;
  (void)a; (void)b;
  list = NUL;
  list = ft_create_elem(&a);
  listlist = &list;
  ft_list_push_front(listlist, &b);
  return (0);
}
