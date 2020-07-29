/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcinthia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/24 12:10:15 by tcinthia          #+#    #+#             */
/*   Updated: 2020/07/24 22:16:48 by tcinthia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int j;

	if (max <= min)
	{
		*range = NULL;
		return (0);
	}
	i = 0;
	j = max - min;
	*range = (int*)malloc(sizeof(**range) * (j + 1));
	if (*range == NULL)
		return (-1);
	while (i < j)
	{
		(*range)[i] = min;
		i++;
		min++;
	}
	(*range)[i + 1] = '\0';
	return (i);
}
