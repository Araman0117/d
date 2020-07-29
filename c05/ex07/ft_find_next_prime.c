/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcinthia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/22 18:34:07 by tcinthia          #+#    #+#             */
/*   Updated: 2020/07/22 19:12:58 by tcinthia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	aint_num_prime(int *div, int nb, int *flag)
{
	while ((*div < nb) && (nb > 1))
	{
		if (nb % *div == 0)
			*flag = 0;
		*div += 1;
	}
}

int		ft_find_next_prime(int nb)
{
	int div;
	int flag;

	flag = 1;
	div = 2;
	aint_num_prime(&div, nb, &flag);
	while (flag == 0)
	{
		div++;
		flag = 2;
		nb = 2;
		aint_num_prime(&nb, div, &flag);
	}
	if ((flag == 1) && (nb > 1))
		return (nb);
	else
		return (div);
}
