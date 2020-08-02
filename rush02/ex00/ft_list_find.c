#include "dict.h"

t_dict	*ft_list_find(t_dict *begin_list, void *data_ref, int (*cmp)())
{
	t_dict *list_ptr;
	list_ptr = begin_list;
	while (list_ptr)
	{
		if ((*cmp)(list_ptr->key, data_ref) == 0)
		return (list_ptr->value);
		list_ptr = list_ptr->next;
	}
return (list_ptr->value);
}
