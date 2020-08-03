/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smercede <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/03 16:56:56 by smercede          #+#    #+#             */
/*   Updated: 2020/08/03 19:43:47 by smercede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"
#include <fcntl.h>

int	main(int argc, char **argv)
{
	t_map		*maps;
	t_param		param;
	t_square	*square;
	int			fc;

	if (argc == 1)
	{
		maps = parse_map(0, &param);
		square = find_squeare(maps, &param);
		print_map(maps, square, &param);
	}
	else
	{
		fc = 0;
		while (++fc < argc)
		{
			maps = parse_map(open(argv[fc], O_RDONLY), &param);
			square = find_squeare(maps, &param);
		}
	}
}
