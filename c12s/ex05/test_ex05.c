#include "ft_list_push_strs.c"
#include <unistd.h>

int main()
{
 int size = 5;
 char strs[][] = {"11111", "22222", "33333", "44444", "55555"};

 ft_list_push_strs(size, strs);
 return (0);
}
