/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcinthia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 20:51:38 by tcinthia          #+#    #+#             */
/*   Updated: 2020/07/22 16:39:16 by tcinthia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int result;

	if (nb < 0)
		return (0);
	else if ((nb == 1) || (nb == 0))
		return (1);
	else
		result = nb * ft_recursive_factorial(nb - 1);
	return (result);
}
