/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_nulstr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcinthia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/03 22:26:29 by tcinthia          #+#    #+#             */
/*   Updated: 2020/08/03 22:44:59 by tcinthia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	parse_nulstr(t_param *param, t_let *first, int i)
{
	int j;
	int k;

	j = 0;
	k = 0;
	while ((j < i - 3) && (k <= 2147483647))
	{
		k *= 10;
		k += first->letter - '0';
		j++;
		first = first->next;
	}
	param->str_num = k;
	param->free = first->letter;
	param->obstacle = first->next->letter;
	param->full = first->next->next->letter;
}
