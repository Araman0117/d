char	*find_key(char *str)
{
	char	prekey[1000];
	char	*key;
	char	*res;
	int		i;

	if ((*str >= '0') && (*str <= '9'))
	{
		i = 0;
		while ((str[i] >= '0') && (str[i] <= '9'))
		{
			prekey[i] = str[i];
			i++;
		}
		prekey[i] = '\0';
		key = &prekey[0];
		//res = clean_spaces(key);
		return (key);
	}
	else
		return 0;
}
