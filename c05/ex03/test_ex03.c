#include <stdio.h>

int	ft_recursive_power(int nb, int power);

int	main(void)
{
	int num;
	int power;

	num = -2; power = -5; printf("num %d power %d = %d\n", num, power, ft_recursive_power(num, power));

	num = -2; power = -1; printf("num %d power %d = %d\n", num, power, ft_recursive_power(num, power));

	num = -2; power = 0; printf("num %d power %d = %d\n", num, power, ft_recursive_power(num, power));

	num = -2; power = 1; printf("num %d power %d = %d\n", num, power, ft_recursive_power(num, power));

	num = -2; power = 3; printf("num %d power %d = %d\n", num, power, ft_recursive_power(num, power));

	num = -2; power = 10; printf("num %d power %d = %d\n", num, power, ft_recursive_power(num, power));

	return (0);
}
