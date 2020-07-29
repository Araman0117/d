#include <stdio.h>
#include <stdlib.h>

int		ft_any(char **tab, int (*f)(char*));

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

	chest = (char**)malloc(sizeof(**chest) * 5);
	chest[0] = "hii";
	chest[1] = "myy";
	chest[2] = "friendd";
	chest[3] = "mulinette";
	chest[4] = NULL;
//	chest[5] = "lcg";
	res = ft_any(chest, &test);
	printf("%d\n", res);
	return (0);
}
