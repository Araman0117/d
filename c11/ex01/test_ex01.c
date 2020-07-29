#include <unistd.h>

void	*ft_map(int *tab, int lenght, int(*f)(int));

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

int		ft_putint(int nb)
{
	if (nb < 0)
		return (-1);
	else if (nb == 0)
		return (0);
	else
		return (1);
}

int		main(void)
{
	int arr[] = {-13,-15623, 3542, 0, 0, 36, 48, -47, 59};
	int *rrr;
	int len = 9;
	int i = 0;
	rrr = ft_map(arr, len, &ft_putint);
	//write(1, "\n", 1);
	while (i < len)
	{
		ft_putnbr(rrr[i]);
		i++;
	}
	return (0);
}
