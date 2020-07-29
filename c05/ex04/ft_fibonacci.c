/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcinthia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/22 13:42:01 by tcinthia          #+#    #+#             */
/*   Updated: 2020/07/22 16:44:22 by tcinthia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int buffer[47];
	int i;

	i = 0;
	while (i < 47)
	{
		buffer[i] = 0;
		i++;
	}
	if (index <= 1)
	{
		if (index < 0)
			return (-1);
		return (index);
	}
	if (buffer[index] == 0)
		buffer[index] = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	return (buffer[index]);
}
