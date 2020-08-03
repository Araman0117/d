/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_square.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smercede <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/03 17:57:19 by smercede          #+#    #+#             */
/*   Updated: 2020/08/03 22:41:15 by smercede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"
#include <stdlib.h>

t_square	*find_squeare(t_map *map, t_param *param)
{
	t_square *square;

	(void)map;
	(void)param;
	square = (t_square*)malloc(sizeof(t_square));
	square->size = 3;
	square->x = 2;
	square->y = 0;
	return (square);
}
