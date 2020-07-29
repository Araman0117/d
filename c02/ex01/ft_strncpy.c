/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcinthia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/18 17:17:27 by tcinthia          #+#    #+#             */
/*   Updated: 2020/07/18 22:07:16 by tcinthia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int a)
{
	int i;

	i = 0;
	while (i < a)
	{
		if (*(src + i) == '\0')
		{
			while (*(dest + i) != '\0')
			{
				*(dest + i) = '\0';
				i++;
			}
		}
		else
			*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
