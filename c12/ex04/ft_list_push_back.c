/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcinthia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/30 20:11:39 by tcinthia          #+#    #+#             */
/*   Updated: 2020/07/30 21:25:17 by tcinthia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_create_elem(void *data)
{
	t_list *tmp;

	tmp = (t_list*)malloc(sizeof(t_list));
	tmp->data = data;
	tmp->next = NUL;
	return (tmp);
}

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *tmp;
	t_list *last;

	tmp = ft_create_elem(data);
	last = (*begin_list);
	while (last->next != NUL)
		last = last->next;
	last->next = tmp;
}
