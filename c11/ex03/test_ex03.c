#include <stdio.h>
#include <stdlib.h>

int		ft_count_if(char **tab, int lenght, int (*f)(char*));

int		test(char *str)
{
	int i = 2;
	while(*str)
	{
		i++;
		str++;
	}
	return (i % 2); 
}

int		main(void)
{
	int res;
	char **chest;
	int lenght;

	chest = (char**)malloc(sizeof(**chest) * 6);
	chest[0] = "h";
	chest[1] = "h";
	chest[2] = "hhh";
	chest[3] = "hhh";
	chest[4] = "hhhhh";
	chest[5] = "hhhhhh";
	lenght = 6;
	res = ft_count_if(chest, lenght, &test);
	printf("%d\n", res);
	return (0);
}
