#include "ft_lis_size.c"

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
