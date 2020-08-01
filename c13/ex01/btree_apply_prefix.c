/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_prefix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcinthia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/31 19:21:13 by tcinthia          #+#    #+#             */
/*   Updated: 2020/07/31 19:51:23 by tcinthia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_apply_prefix(t_btree *root, void (*applyf)(void*))
{
	applyf(root->item);
	if (root->left != 0)
		applyf(root->left->item);
	if (root->right != 0)
		applyf(root->right->item);
}
