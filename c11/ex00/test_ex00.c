#include <unistd.h>

void	ft_foreach(int *tab, int lenght, void(*f)(int));

void	ft_putchar(char ch)
{
	write(1, &ch, 1);
}

void	ft_putnbr(int nb)
{
	char	mas[11];
	int		i;
	int		digit;
	i = 0;
	if (nb < 0)
		write(1, "-", 1);
	if (nb == 0)
		write(1, "0", 1);
	while (nb != 0)
	{
		digit = nb % 10;
		if (digit < 0)
			digit = -digit;
		mas[i] = digit + 48;
		nb = nb / 10;
		i++;
	}
	ft_putchar(nb);
	while (i-- > 0)
		ft_putchar(mas[i]);
}
int		main(void)
{
	int arr[] = {13, 23, 32, 34, 35, 36, 48, 47, 59};
	int len = 9;
	ft_foreach(arr, len, &ft_putnbr);
	return (0);
}
