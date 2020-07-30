#include <stdio.h>
#include <stdlib.h>
#include "ft_list_push_back.c"

int main(void)
{
	int a, b, c, d, e, f;
	t_list *list;
	t_list **llist;
	t_list *begin;

	a = 10; b = 20; c = 30; d = 40; e = 50, f = 60;
	list = NUL;
	list = ft_create_elem(&a);
	begin = list;
	llist = &list;
	ft_list_push_back(llist, &b);	(*llist) = (*llist)->next;
	ft_list_push_back(llist, &c);	(*llist) = (*llist)->next;
	ft_list_push_back(llist, &d);	(*llist) = (*llist)->next;
	ft_list_push_back(llist, &e);	(*llist) = (*llist)->next;
	ft_list_push_back(llist, &f);	//(*llist) = (*llist)->next;

	while (begin != NUL)
	{
		printf("%d\n", *(begin->data));
		begin = begin->next;
	}
	return (0);
}
