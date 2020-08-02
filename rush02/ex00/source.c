
#include "dict.h"
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int ft_list_size(t_dict *begin_list)
{
 t_dict *i;
 int j = 0;

 i = begin_list;
 while (1)
 {
  if (i == 0) break;
  i = i->next;
  j++;
 }
 return (j);
}

t_dict  *create_elem(int triplet, void *key, void *value)
{
    t_dict *tmp;

    tmp = (t_dict*)malloc(sizeof(t_dict));
    tmp->next = NULL;
    tmp->key = key;
    tmp->value = value;
    tmp->triplet = triplet;
    return (tmp);
}

int find_tri(char *key)
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

char    *find_key(char *str)
{
    char    buffer[1000];
    char    *key;
    int     i;
	int		k;

    if ((*str >= '0') && (*str <= '9'))
    {
        i = 0; k = 0;
        while ((str[i] >= '0') && (str[i] <= '9'))
        {
            buffer[i] = str[i];
            i++;
        }
		key = (char*)malloc(sizeof(char) * (i + 2));
		while (k < i)
		{
			key[k] = buffer[k];
			k++;
		}
		key[k] = '\0';
        return (key);
    }
    else
        return 0;
}

char    *find_value(char *str)
{
    char    buffer[1000];
	char	*value;
    int     i;
	int		k;

    i = 0; k = 0;
    while (str[i] != ':') i++;
	i++;
    while (str[i] != '\n')
    {
        buffer[k] = str[i];
		k++;
        i++;
    }
	value = (char*)malloc(sizeof(char) * (k + 2));
	i = 0;
	while (i < k)
	{
		value[i] = buffer[i];
		i++;
	}
	value[k] = '\0';
	return value;
}

void	scan(char *str, t_dict **begin)
{
    char    *key;
    char    *value;
    int     triplet;
    t_dict  *elem;

    key = find_key(str);
    triplet = find_tri(key);
    value = find_value(str);
    elem = create_elem(triplet, key, value);
    elem->next = (*begin);
    (*begin) = elem;
	//return (*begin);
}

t_dict	*create_list()
{
	int fdr;
	int sizef;
	int i;
	int j;
	int k;
	int m;
	int str_count;
	int byte_count;
	char buf_s[1];

	i = 0;
	j = 0;
	fdr = open("numbers.dict", O_RDONLY);
	while ((sizef = read(fdr, buf_s, 1)) > 0)
	{
		j++;
		if (*buf_s == '\n')
			i++;
	}
	str_count = i;
	byte_count = j;
	close(fdr);

	char buf[j];
	char strr[j];
	char *strrr;

	fdr = open("numbers.dict", O_RDONLY);
	sizef = read(fdr, buf, byte_count);

	t_dict *elem;
	t_dict **beg;

	elem = create_elem(0, "", "");
	beg = &elem;
	i = 0; k = 0; 
	while (i < str_count + 1)
	{
		j = 0;
		if (i < str_count)
		{
			while (buf[k] != '\n')
			{
				strr[j] = buf[k];
				j++;
				k++;
			}
		}
		else if (i == str_count)
		{
			while (buf[k] != '\0')
			{
				strr[j] = buf[k];
				j++;
				k++;
			}
		}
		k++;
		strr[j] = '\0';
		strrr = &strr[0];
		scan(strrr, beg);
		i++;
		m = 0;
		while (m < j)
		{
			strr[m] = '\0';
			m++;
		}
	}
	return (elem);
}

int main()
{
	t_dict *pars;
	char *key;
	char *value;
	int tri;
	int i;

	pars = create_list();
	i = 0;
	while (i < 41)
	{
		key = (char*)(pars->key);
		value = (char*)(pars->value);
		tri = (int)(pars->triplet);
		while (*value)
		{
			write(1, value, 1);
			value++;
		}
		write(1, " ", 1);
		while (*key)
		{
			write(1, key, 1);
			key++;
		}
		write(1, "\n", 1);
		pars = pars->next;
		i++;
	}
	return (0);
}
