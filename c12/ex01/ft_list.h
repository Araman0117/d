/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcinthia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/30 17:47:52 by tcinthia          #+#    #+#             */
/*   Updated: 2020/07/30 20:50:25 by tcinthia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H
# define NUL ((void*)0)

typedef struct		s_list
{
	struct s_list	*next;
	void			*data;
}					t_list;
#endif
