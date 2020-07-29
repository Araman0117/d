/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcinthia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/28 20:07:00 by tcinthia          #+#    #+#             */
/*   Updated: 2020/07/28 23:14:01 by tcinthia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"

int	main(int argc, char *argv[])
{
	int		i;
	char	buf[29696];

	if (argc < 2)
		print_err(print_input(buf));
	else
	{
		i = 1;
		while (i < argc)
		{
			if ((*argv[i] == '-') && (check_num(argv[i]) == 1))
				print_err(print_input(buf));
			else
				print_err(print_file(argv[i], buf));
			i++;
		}
	}
	return (0);
}
