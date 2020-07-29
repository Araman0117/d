#include <stdio.h>

int	ft_iterative_power(int nb, int power);

int	main(void)
{
	int numer;
	int power;

	numer = power = -100;
	printf("numer! = %d\n", ft_iterative_power(numer, power));

	numer = power = -5;
	printf("numer! = %d\n", ft_iterative_power(numer, power));

	numer = power = 0;
	printf("numer! = %d\n", ft_iterative_power(numer, power));

	numer = power = 1;
	printf("numer! = %d\n", ft_iterative_power(numer, power));

	numer = power = 2;
	printf("numer! = %d\n", ft_iterative_power(numer, power));

	numer = 10;
	power = 5;
	printf("numer! = %d\n", ft_iterative_power(numer, power));


	return 0;
}
