/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcinthia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/30 19:09:03 by tcinthia          #+#    #+#             */
/*   Updated: 2020/07/30 20:56:47 by tcinthia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	t_list	*list;
	int		i;

	list = begin_list;
	i = 0;
	while (list != NUL)
	{
		i++;
		list = list->next;
	}
	return (i);
}
