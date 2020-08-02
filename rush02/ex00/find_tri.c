int	find_tri(char *key)
{
	char *str;
	int tri;

	str = key;
	tri = 0;
	while (*str)
	{
		tri++;
		str++;
	}
	return (tri);
}
