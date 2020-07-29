#include <stdio.h>

int ft_find_next_prime(int nb);

int	main(void)
{
	int num;

	num = -2147483648; printf("ближайшее простое число к %d это %d\n", num, ft_find_next_prime(num));
	num = -5; printf("ближайшее простое число к %d это %d\n", num, ft_find_next_prime(num));
	num = -1; printf("ближайшее простое число к %d это %d\n", num, ft_find_next_prime(num));
	num = 0; printf("ближайшее простое число к %d это %d\n", num, ft_find_next_prime(num));
	num = 1; printf("ближайшее простое число к %d это %d\n", num, ft_find_next_prime(num));
	num = 2; printf("ближайшее простое число к %d это %d\n", num, ft_find_next_prime(num));
	num = 3; printf("ближайшее простое число к %d это %d\n", num, ft_find_next_prime(num));
	num = 4; printf("ближайшее простое число к %d это %d\n", num, ft_find_next_prime(num));
	num = 5; printf("ближайшее простое число к %d это %d\n", num, ft_find_next_prime(num));
	num = 6; printf("ближайшее простое число к %d это %d\n", num, ft_find_next_prime(num));
	num = 7; printf("ближайшее простое число к %d это %d\n", num, ft_find_next_prime(num));
	num = 8; printf("ближайшее простое число к %d это %d\n", num, ft_find_next_prime(num));
	num = 9; printf("ближайшее простое число к %d это %d\n", num, ft_find_next_prime(num));
	num = 10; printf("ближайшее простое число к %d это %d\n", num, ft_find_next_prime(num));
	num = 111111; printf("ближайшее простое число к %d это %d\n", num, ft_find_next_prime(num));
	num = 2147483647; printf("ближайшее простое число к %d это %d\n", num, ft_find_next_prime(num));

	return (0);
}
