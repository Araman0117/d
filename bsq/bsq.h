/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smercede <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/03 17:06:05 by smercede          #+#    #+#             */
/*   Updated: 2020/08/03 22:44:32 by tcinthia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H
# include "struct.h"

t_map		*parse_map(int fh, t_param *param);
t_square	*find_squeare(t_map *map, t_param *param);
t_map		*create_elem(char *data);
void		push_back(t_map *begin, char *data);
void		print_map(t_map *map, t_square *square, t_param *param);
void    parse_nulstr(t_param *param, t_let *first, int i);
t_let   *cr_nulstr(void);
t_let   *take_nulstr(int fh);

#endif
