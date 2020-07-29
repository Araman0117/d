/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcinthia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/22 20:05:16 by tcinthia          #+#    #+#             */
/*   Updated: 2020/07/23 11:19:13 by tcinthia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_params(int argc, char *argv[])
{
	char	*str;
	int		i;
	int		j;

	j = 1;
	while (j < argc)
	{
		str = *(argv + j);
		i = 0;
		while (*str)
		{
			i++;
			str++;
		}
		write(1, argv[j], i);
		write(1, "\n", 1);
		j++;
	}
}

int		main(int argc, char *argv[])
{
	ft_print_params(argc, argv);
	return (0);
}
