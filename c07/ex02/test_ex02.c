/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex02.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcinthia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/24 22:00:24 by tcinthia          #+#    #+#             */
/*   Updated: 2020/07/24 22:13:54 by tcinthia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max);

int	main(void)
{
	int		**arr;
	int		min;
	int		max;
	int		i;
	int		h;

	min = -10;
	max = 10;
	h = 0;
	if (max <= min)
		arr = (int**)malloc(8);
	else
		arr = (int**)malloc((max - min) * 8);
	i = ft_ultimate_range(arr, min, max);
	printf("%d\n", i);
	while (h < max - min)
	{
		printf("%d, ", (*arr)[h]);
		h++;
	}
	return (0);
}
