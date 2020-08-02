#include "ft_list_push_strs.c"
#include <unistd.h>

int main()
{
 int size = 5;
 int i = 0;
 char **strs;
 t_list *beg;
 char *str;

 strs = (char**)malloc(sizeof(char*) * (size + 1));
 strs[0] = "11111";
 strs[1] = "22222";
 strs[2] = "33333";
 strs[3] = "44444";
 strs[4] = "55555";

 beg = ft_list_push_strs(size, strs);

 while (i < size)
 {
	str = beg->data;
	write(1, str, 5);
	write(1, "\n", 1);
	beg = beg->next;
	i++;
 }
 return (0);
}
