/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcinthia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/29 17:44:19 by tcinthia          #+#    #+#             */
/*   Updated: 2020/07/29 21:27:35 by tcinthia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int lenght, int (*f)(int))
{
	int i;
	int *results;

	i = 0;
	results = (int*)malloc(sizeof(*results) * lenght);
	if (lenght > 0)
	{
		while (i < lenght)
		{
			results[i] = f(tab[i]);
			i++;
		}
	}
	else
		results = NULL;
	return (results);
}
