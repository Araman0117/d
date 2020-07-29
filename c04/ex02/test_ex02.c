#include <stdio.h>
#include <unistd.h>

void	ft_putnbr(int nb);

int		main(void)
{
	int n1, n2, n3, n4, n5;
	char p = '\n';

	n1 = -2147483648;
//	n1 = 1;
	n2 = 123456;
	n2 = 225188;
	n3 = 2147483647;
//	n3 = 3;
	n4 = -5500;
	n4 = 55;
	n5 = 0;

	ft_putnbr(n1);
	write(1, &p, 1);
	
	ft_putnbr(n2);
	write(1, &p, 1);

	ft_putnbr(n3);
	write(1, &p, 1);

	ft_putnbr(n4);
	write(1, &p, 1);

	ft_putnbr(n5);
	write(1, &p, 1);

	return (0);
}
