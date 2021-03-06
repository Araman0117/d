#include <stdlib.h>
#include "btree_apply_prefix.c"

t_btree		*btree_create_node(void *item)
{
	t_btree *node;

	node = (t_btree*)malloc(sizeof(t_btree));
	node->item = item;
	node->left = 0;
	node->right = 0;
	return (node);
}

void		function(void *item)
{
	char* g = "done!";
	*((char*)item) = *g;
}

int			main(void)
{
	char *data1 = "11";
	char *data2 = "22";
	char *data3 = "33";
	char *data4 = "44";
	char *data5 = "55";

	t_btree *root = btree_create_node(data1);
	root->left = btree_create_node(data2);
	root->right = btree_create_node(data3);
	root->right->left = btree_create_node(data4);
	root->right->right = btree_create_node(data5);

	btree_apply_prefix(root, &function);

}
