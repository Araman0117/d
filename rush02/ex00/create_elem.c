#include <stdlib.h>

t_dict	*create_elem(int triplet, void *key, void *value)
{
	t_dict *tmp;

	tmp = (t_dict*)malloc(sizeof(t_dict));
	tmp->next = NULL;
	tmp->key = key;
	tmp->value = value;
	tmp->triplet = triplet;
	return (tmp);
}
