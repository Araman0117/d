/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   take_nulstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcinthia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/03 22:38:38 by tcinthia          #+#    #+#             */
/*   Updated: 2020/08/03 22:45:02 by tcinthia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

t_let	*take_nulstr(int fh)
{
	char	ch;
	int		i;
	t_let	*nulstr;
	t_let	*first;

	nulstr = cr_nulstr();
	first = nulstr;
	read(fh, &ch, 1);
	i = 0;
	while (ch != '\n')
    {
		nulstr->letter = ch;
		read(fh, &ch, 1);
		nulstr->next = cr_nulstr();
		nulstr = nulstr->next;
		i++;
	}
	nulstr->letter = ch;
	return (first);
}
