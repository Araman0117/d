#include <stdio.h>

int	ft_sqrt(int nb);

int	main(void)
{
	int num;

	num = -2147483648; printf("square root of %d = %d\n", num, ft_sqrt(num));

	num = -100000; printf("square root of %d = %d\n", num, ft_sqrt(num));

	num = -10; printf("square root of %d = %d\n", num, ft_sqrt(num));

	num = -1; printf("square root of %d = %d\n", num, ft_sqrt(num));

	num = 0; printf("square root of %d = %d\n", num, ft_sqrt(num));

	num = 1; printf("square root of %d = %d\n", num, ft_sqrt(num));

	num = 4; printf("square root of %d = %d\n", num, ft_sqrt(num));

	num = 2147395600; printf("square root of %d = %d\n", num, ft_sqrt(num));

	num = 207936; printf("square root of %d = %d\n", num, ft_sqrt(num));
















	return (0);
}
