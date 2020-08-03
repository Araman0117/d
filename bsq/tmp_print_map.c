/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tmp_print_map.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smercede <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/03 18:35:31 by smercede          #+#    #+#             */
/*   Updated: 2020/08/03 22:41:38 by smercede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"
#include <unistd.h>
#include <stdlib.h>

void	draw_sqr(t_map *str, t_square *sqr, t_param *param)
{
	int	i;
	int finish;

	i = 0;
	finish = sqr->x + sqr->size;
	while (++i <= param->str_len)
	{
		if (i >= sqr->x && i < finish)
			write(1, &param->full, 1);
		else
			write(1, &(str->str)[i], 1);
	}
}

void	print_map(t_map *map, t_square *square, t_param *param)
{
	t_map	*m;
	int		i;

	m = map;
	i = -1;
	while (++i < param->str_num)
	{
		if (i >= square->y && i < (square->y + square->size))
			draw_sqr(m, square, param);
		else
			write(1, m->str, param->str_len);
		m = m->next;
	}
}
