#include <stdio.h>

int	ft_recursive_factorial(int nb);

int	main(void)
{
	int numer;

	numer = -100;
	printf("numer! = %d\n", ft_recursive_factorial(numer));

	numer = -5;
	printf("numer! = %d\n", ft_recursive_factorial(numer));

	numer = 0;
	printf("numer! = %d\n", ft_recursive_factorial(numer));

	numer = 1;
	printf("numer! = %d\n", ft_recursive_factorial(numer));

	numer = 5;
	printf("numer! = %d\n", ft_recursive_factorial(numer));

	numer = 4;
	printf("numer! = %d\n", ft_recursive_factorial(numer));


	return 0;
}
