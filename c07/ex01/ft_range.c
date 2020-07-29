/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcinthia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/23 12:45:35 by tcinthia          #+#    #+#             */
/*   Updated: 2020/07/24 19:34:41 by tcinthia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *array;
	int i;
	int j;

	i = 0;
	j = min;
	array = (int*)malloc((max - min) * 8);
	if (min < max)
	{
		while (i < max - min)
		{
			array[i] = j;
			j++;
			i++;
		}
	}:
	else
	{
		return (NULL);
	}
	return (array);
}
