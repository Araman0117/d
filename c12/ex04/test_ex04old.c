#include "ft_list_push_back.c"
#include <stdio.h>

int main(void)
{
	int a, b;
	t_list *list;
	t_list **begin_list;
	a = 1111111; b = 222222;
	list = NUL;
	list = ft_create_elem(&a);
	begin_list = &list;
	ft_list_push_back(begin_list, &b);
	while (list != NUL)
	{
		printf("%d\n", *(list->data));
		list = list->next;
	}
	return (0);
}
