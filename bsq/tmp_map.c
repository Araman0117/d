/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tmp_map.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smercede <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/03 16:54:39 by smercede          #+#    #+#             */
/*   Updated: 2020/08/03 22:35:26 by smercede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"
#include "struct.h"

t_map	*parse_map(int fh, t_param *param)
{
	t_map *first;

	fh = 0;
	first = create_elem("....o.\n");
	push_back(first, "......\n");
	push_back(first, ".o...o\n");
	push_back(first, "..oo..\n");
	push_back(first, ".o....\n");
	param->str_len = 7;
	param->str_num = 5;
	param->free = '.';
	param->obstacle = 'o';
	param->full = 'x';
	return (first);
}
