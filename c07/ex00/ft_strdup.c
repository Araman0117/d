/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcinthia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/23 10:57:22 by tcinthia          #+#    #+#             */
/*   Updated: 2020/07/23 13:19:08 by tcinthia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*str;
	int		i;
	int		j;

	str = src;
	i = 0;
	j = 0;
	while (*str)
	{
		i++;
		str++;
	}
	str = (char*)malloc(i);
	while (j < i)
	{
		*(str + j) = *(src + j);
		j++;
	}
	return (str);
}
