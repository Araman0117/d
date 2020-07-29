#include <stdio.h>

int	ft_atoi(char *str);

int	main(void)
{
	char sum[] = "--++-112l11aa";

	printf("%d\n", ft_atoi(sum));
	return 0;
}
