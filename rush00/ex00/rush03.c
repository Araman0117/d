/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcinthia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/19 20:40:32 by tcinthia          #+#    #+#             */
/*   Updated: 2020/07/19 20:41:22 by tcinthia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char param, int count);
void	put_begin(int x);
void	put_middle(int x);
void	put_end(int x);

void	rush(int x, int y)
{
	int height;

	if ((y > 0) && (x > 0))
	{
		put_begin(x);
	}
	height = 1;
	while ((height < y - 1) && (x > 0))
	{
		put_middle(x);
		height++;
	}
	if ((y > 1) && (x > 0))
	{
		put_end(x);
	}
}

void	put_begin(int x)
{
	ft_putchar('A', 1);
	ft_putchar('B', x - 2);
	if (x > 1)
		ft_putchar('C', 1);
	ft_putchar('\n', 1);
}

void	put_middle(int x)
{
	ft_putchar('B', 1);
	ft_putchar(' ', x - 2);
	if (x > 1)
		ft_putchar('B', 1);
	ft_putchar('\n', 1);
}

void	put_end(int x)
{
	ft_putchar('A', 1);
	ft_putchar('B', x - 2);
	if (x > 1)
		ft_putchar('C', 1);
	ft_putchar('\n', 1);
}
