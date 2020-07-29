/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcinthia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/29 19:51:59 by tcinthia          #+#    #+#             */
/*   Updated: 2020/07/29 21:27:37 by tcinthia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int lenght, int (*f)(char*))
{
	int i;
	int res;

	i = 0;
	res = 0;
	if (lenght > 0)
	{
		while (i < lenght)
		{
			if (f(tab[i]) != 0)
				res++;
			i++;
		}
	}
	return (res);
}