/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcinthia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/22 20:43:37 by tcinthia          #+#    #+#             */
/*   Updated: 2020/07/23 11:22:41 by tcinthia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_params(int argc, char *argv[])
{
	char	*str;
	int		i;
	int		j;

	j = argc - 1;
	while (j > 0)
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
		j--;
	}
}

int		main(int argc, char *argv[])
{
	ft_rev_params(argc, argv);
	return (0);
}
