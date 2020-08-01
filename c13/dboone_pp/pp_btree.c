#include "ft_btree.h"
#include "queue.h"

#include <stdlib.h>
#include <unistd.h>

typedef struct	s_btree_with_data {
	struct s_btree_with_data	*left;
	struct s_btree_with_data	*right;
	void						*data;
	int							len;
	int							print_shift;
}				t_btree_with_data;

typedef struct s_node_level {
	t_btree_with_data *node;
	int level;
}	t_node_level;


#define STDOUT 1

int pp_btree_cur_shift = 0;
int pp_btree_print_shift = 0;


int	pp_btree_strlen(char *str) {
	int count = 0;
	while (str[count] != '\0')
		++count;
	return (count);
}


t_btree_with_data	*pp_btree_construct(const t_btree *node) {
	if (!node)
		return NULL;
	t_btree_with_data *result = malloc(sizeof(t_btree_with_data));

	result->left = pp_btree_construct(node->left);
	result->right = pp_btree_construct(node->right);

	result->data = node->item;
	result->len = pp_btree_strlen(result->data);

	return result;
}

void	pp_btree_set_print_shift(t_btree_with_data *node, int additional_width)
{
	if (!node)
		return;

	pp_btree_set_print_shift(node->left, additional_width);
	pp_btree_print_shift += additional_width / 2;

	node->print_shift = pp_btree_print_shift;
	pp_btree_print_shift += node->len;

	pp_btree_print_shift += additional_width - additional_width / 2;
	pp_btree_set_print_shift(node->right, additional_width);
}

void	clear_btree_with_data(t_btree_with_data *node) {
	if (node) {
		clear_btree_with_data(node->left);
		clear_btree_with_data(node->right);
		free(node);
	}
}

void	pretty_print_btree_item(t_btree_with_data *node) {
	while (pp_btree_cur_shift < node->print_shift) {
		char symbol = ' ';

		if (node->left) {
			int edge = (node->left->print_shift + node->left->len / 2);
			if (pp_btree_cur_shift == edge)
				symbol = '/';
			else if (pp_btree_cur_shift > edge)
				symbol = '-';
		}
		write(STDOUT, &symbol, 1);

		++pp_btree_cur_shift;
	}

	write(STDOUT, node->data, node->len);
	pp_btree_cur_shift += node->len;

	if (node->right) {
		int edge = (node->right->print_shift + node->right->len / 2);

		while (pp_btree_cur_shift < edge) {
			write(STDOUT, "-", 1);
			++pp_btree_cur_shift;
		}
		write(STDOUT, "\\", 1);
		++pp_btree_cur_shift;
	}
}

void	pp_btree_with_data(t_btree_with_data *root, int level_height) {
	if (!root)
		return;

	pp_btree_cur_shift = 0;

	Queue *p_queue = init_queue();

	t_node_level *p_root_node_level = (t_node_level *)malloc(sizeof(t_node_level));

	p_root_node_level->level = 0;
	p_root_node_level->node = root;
	enqueue(p_queue, p_root_node_level);

	int current_level = 0;

	while (p_queue->size > 0) {		

		NodeQ *p_node_queue = dequeue(p_queue);
		t_node_level *p_node_level = (t_node_level *) p_node_queue->data;

		if (p_node_level->level != current_level) {
			for (int i = 0; i < level_height; ++i) {
				write(STDOUT, "\n", 1);
				pp_btree_cur_shift = 0;

				NodeQ* queue_node = p_node_queue;
				while (queue_node) {
					t_btree_with_data *node = ((t_node_level *)queue_node->data)->node;

					int edge = node->print_shift + node->len / 2;
					while (pp_btree_cur_shift < edge) {
						write(STDOUT, " ", 1);
						++pp_btree_cur_shift;
					}
					write(STDOUT, "|", 1);
					++pp_btree_cur_shift;

					queue_node = queue_node->prev;
				}
			}

			pp_btree_cur_shift = 0;
			++current_level;
			write(STDOUT, "\n", 1);
		}

		pretty_print_btree_item(p_node_level->node);

		if (p_node_level->node->left) {
			t_node_level *left_node_level = (t_node_level *)malloc(sizeof(t_node_level));
			left_node_level->level = current_level + 1;
			left_node_level->node = p_node_level->node->left;

			enqueue(p_queue, left_node_level);
		}
		if (p_node_level->node->right) {
			t_node_level *right_node_level = (t_node_level *)malloc(sizeof(t_node_level));
			right_node_level->level = current_level + 1;
			right_node_level->node = p_node_level->node->right;

			enqueue(p_queue, right_node_level);
		}

		free(p_node_queue);
	}
	write(STDOUT, "\n", 1);	

	free(p_queue);
}

void	pretty_print_btree(const t_btree *root, unsigned int additional_width, unsigned int level_height) {
	t_btree_with_data *root_with_data = pp_btree_construct(root);

    if (additional_width > 20)
        additional_width = 20;
    if (level_height > 100)
        level_height = 100;

	pp_btree_print_shift = 0;
	pp_btree_set_print_shift(root_with_data, additional_width);

	pp_btree_with_data(root_with_data, level_height);
	clear_btree_with_data(root_with_data);
}
