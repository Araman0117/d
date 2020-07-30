#ifndef FT_LIST_H
# define FT_LIST_H
# define NUL ((void*)0)
# include <stdlib.h>

typedef struct s_list
{
  struct s_list *next;
  void *data;
} t_list;

t_list *ft_create_elem(void *data)
{
  t_list *tmp;

  tmp = (t_list*)malloc(sizeof(t_list));
  tmp->data = data;
  tmp->next = NUL;
  return (tmp);
}

void ft_list_push_front
(t_list **begin_list, void *data);
#endif
