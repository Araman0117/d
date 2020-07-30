#include "ft_list.h"

int main(void)
{
  t_list  *emp;
  int f;

  emp = NUL;
  f = 15;
  (void)f;
  emp = ft_create_elem(&f);
  return (0);
}
