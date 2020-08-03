/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_back.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcinthia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/03 18:29:43 by tcinthia          #+#    #+#             */
/*   Updated: 2020/08/03 21:10:39 by tcinthia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"
#include "struct.h"
#include <stdlib.h>

void	push_back(t_map *begin, char *data)
{
	t_map *elem;

	while (begin->next != NULL)
		begin = begin->next;
	elem = create_elem(data);
	begin->next = elem;
}
