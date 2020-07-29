/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcinthia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 15:30:24 by tcinthia          #+#    #+#             */
/*   Updated: 2020/07/20 21:52:58 by tcinthia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	process(int nb, char *das);

void	ft_putnbr(int nb)
{
	char	defis;
	char	das[11];

	if (nb == 0)
		write(1, "0", 1);
	else if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else
	{
		defis = '-';
		if (nb < 0)
		{
			write(1, &defis, 1);
			nb *= -1;
		}
		process(nb, das);
	}
}

void	process(int nb, char *das)
{
	int n;

	n = 10;
	while (n)
	{
		if (nb)
		{
			das[n--] = ('0' + (nb % 10));
			nb /= 10;
		}
		else
			das[n--] = '\0';
	}
	write(1, das, 11);
}
