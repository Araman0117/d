/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_elem.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcinthia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/03 18:28:38 by tcinthia          #+#    #+#             */
/*   Updated: 2020/08/03 19:17:27 by smercede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"
#include <stdlib.h>

t_map	*create_elem(char *data)
{
	t_map *tmp;

	tmp = (t_map*)malloc(sizeof(t_map));
	tmp->next = NULL;
	tmp->str = data;
	return (tmp);
}
