/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcinthia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/22 13:25:00 by tcinthia          #+#    #+#             */
/*   Updated: 2020/07/22 16:42:22 by tcinthia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int value;

	value = 1;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
		value = nb * ft_recursive_power(nb, power - 1);
	return (value);
}
