/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcinthia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/01 15:27:59 by tcinthia          #+#    #+#             */
/*   Updated: 2020/08/01 21:27:12 by tcinthia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DICT_H
# define DICT_H

typedef struct		s_dict
{
	struct s_dict	*next;
	char			key[100];
	char			value[100];
	int				triplet;
}					t_dict;
#endif
