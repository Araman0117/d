#include <stdio.h>

int	ft_iterative_factorial(int nb);

int	main(void)
{
	int numer;

	numer = -5;
	printf("numer! = %d\n", ft_iterative_factorial(numer));

	numer = -100;
	printf("numer! = %d\n", ft_iterative_factorial(numer));

	numer = 0;
	printf("numer! = %d\n", ft_iterative_factorial(numer));

	numer = 1;
	printf("numer! = %d\n", ft_iterative_factorial(numer));

	numer = 2;
	printf("numer! = %d\n", ft_iterative_factorial(numer));

	numer = 5;
	printf("numer! = %d\n", ft_iterative_factorial(numer));




}
