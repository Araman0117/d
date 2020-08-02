void	scan(char *str, t_dict **begin)
{
	char	*key;
	char	*value;
	int		triplet;
	t_dict	*elem;

	key = find_key(str);
	triplet = find_tri(key);
	value = find_value(str);
	elem = create_elem(triplet, key, value);
	elem->next = (*begin);
	(*begin) = elem;
}
