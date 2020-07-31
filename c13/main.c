/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboone <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/31 08:25:47 by dboone            #+#    #+#             */
/*   Updated: 2020/07/31 08:25:48 by dboone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

t_btree	*btree_create_node(void *item);

void	pretty_print_btree(const t_btree *root, unsigned int additional_width, unsigned int level_height);

int		main(void) {
	char *data1 = "Bacxvxcvsdf";
	char *data2 = "Acxvxcvxcvcxfsa";
	char *data3 = "Cd";
	char *data4 = "Ddcvcvs";
	char *data5 = "aaa";

	t_btree *root = btree_create_node(data1);
	root->left = btree_create_node(data2);
	root->right = btree_create_node(data3);
	root->right->right = btree_create_node(data4);
	root->right->right->left = btree_create_node(data5);

	pretty_print_btree(root, 1, 2);
}
