/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pp_btree.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboone <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/31 08:21:06 by dboone            #+#    #+#             */
/*   Updated: 2020/07/31 08:21:07 by dboone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PP_BTREE_H
# define PP_BTREE_H

# include "ft_btree.h"

void	pretty_print_btree(const t_btree *root, unsigned int additional_width, unsigned int level_height);

#endif
