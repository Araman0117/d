#include <stdio.h>
#include <stdlib.h>
#include "ft_list_size.c"

t_list              *ft_create_elem(int *data)
{
	t_list *tmp;

	tmp = (t_list*)malloc(sizeof(t_list));
	tmp->data = data;
	tmp->next = NUL;
	return (tmp);
}

void    ft_list_push_front(t_list **begin_list, int *data)
{
	t_list *tmp;

	tmp = ft_create_elem(data);
	(*begin_list)->next = tmp;
}

int main(void)
{
	int a, b, c, d, e, f;
	int res, i;
	t_list *list;
	t_list **llist;
	t_list *begin;

	i = 0; a = 10; b = 20; c = 30; d = 40; e = 50, f = 60;
	list = NUL;
	list = ft_create_elem(&a);		begin = list;
	llist = &list;
	ft_list_push_front(llist, &b);	(*llist) = (*llist)->next;
	ft_list_push_front(llist, &c);	(*llist) = (*llist)->next;
	ft_list_push_front(llist, &d);	(*llist) = (*llist)->next;
	ft_list_push_front(llist, &e);	(*llist) = (*llist)->next;
	ft_list_push_front(llist, &f);	//*(llist) = *(llist)->next;

	res = ft_list_size(begin);
	printf("list size is %d\n", res);
	while (i < res)
	{
		printf("%d cell data is %d\n", i, *(begin->data));
		begin = begin->next;
		i++;
	}

	return (0);
}
