#include <stdio.h>

int *ft_range(int min, int max);

int main(void)
{
	int min = -10;
	int max = 10;
	int *arch = ft_range(min, max);
	int i = 0;

	while (i < max - min)
	{
		printf("%d\n", arch[i]);
		i++;
	}

	return 0;
}
