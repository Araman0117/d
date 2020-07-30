#include <stdio.h>
#include "ft_create_elem.c"

int main(void)
{
	t_list  *emp;
	int f;

	emp = NUL;
	f = 15;
	emp = ft_create_elem(&f);
	printf("%d", *(emp->data));
	return (0);
}
