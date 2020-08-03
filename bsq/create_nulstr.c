/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_nulstr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcinthia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/03 21:56:53 by tcinthia          #+#    #+#             */
/*   Updated: 2020/08/03 22:38:10 by tcinthia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"
#include <stdlib.h>

t_let	*cr_nulstr(void)
{
	t_let *tmp;

	tmp = (t_let*)malloc(sizeof(t_let));
	tmp->next = NULL;
	return (tmp);
}
