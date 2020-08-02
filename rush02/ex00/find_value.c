char	*find_value(char *str)
{
	char	preval[10000];
	char	*val;
	char	*res;
	int		i;

	res = 0;
	i = 0;
	while (*str != ':')
	{
		str++;
	}
	while (*str != '\n')
	{
		preval[i] = *str;
		str++;
		i++;
	}
	preval[i] = '\0';
	val = &preval[0];
	//res = clean_spaces(val);
	return (val);
}
