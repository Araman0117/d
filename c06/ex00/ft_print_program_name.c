/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcinthia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/22 19:20:13 by tcinthia          #+#    #+#             */
/*   Updated: 2020/07/24 20:34:50 by tcinthia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_program_name(int argc, char *argv[])
{
	char	*str;
	int		i;

	str = argv[argc - argc];
	i = 0;
	while (*str)
	{
		i++;
		str++;
	}
	write(1, argv[argc - argc], i);
	write(1, "\n", 1);
}

int		main(int argc, char *argv[])
{
	ft_print_program_name(argc, argv);
	return (0);
}
