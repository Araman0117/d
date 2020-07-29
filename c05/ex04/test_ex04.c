#include <stdio.h>

int	ft_fibonacci(int index);

int	main(void)
{
	int num;

	num = -10; printf("%d number fibonacci is %d\n", num, ft_fibonacci(num));

	num = -5; printf("%d number fibonacci is %d\n", num, ft_fibonacci(num));

	num = -2; printf("%d number fibonacci is %d\n", num, ft_fibonacci(num));

	num = -1; printf("%d number fibonacci is %d\n", num, ft_fibonacci(num));

	num = 0; printf("%d number fibonacci is %d\n", num, ft_fibonacci(num));

	num = 1; printf("%d number fibonacci is %d\n", num, ft_fibonacci(num));

	num = 9; printf("%d number fibonacci is %d\n", num, ft_fibonacci(num));

	num = 10; printf("%d number fibonacci is %d\n", num, ft_fibonacci(num));

	num = 11; printf("%d number fibonacci is %d\n", num, ft_fibonacci(num));

	return (0);
}
