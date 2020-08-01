/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   source.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcinthia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/01 17:24:18 by tcinthia          #+#    #+#             */
/*   Updated: 2020/08/01 21:29:01 by tcinthia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//?include "dict.h"?
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdlib.h>

t_dict	*create_elem(char *key, char *value)
{
	t_dict *tmp;

	tmp = (t_dict*)malloc(sizeof(t_dict));
	if (tmp == NULL)
		return NULL;
	tmp->next = NULL;
	tmp->key = key;
	tmp->value = value;
	return (tmp);
}

t_dict	*create_list(char *dict)
{
	long long int fdr;
	long long int fdw;
	long long int sizef;
	long long int i;
	long long int j;
	long long int str_count;
	long long int byte_count;
	char buf_s[1];
	char *key;
	char *value;
	int triplet;

	i = 0;
	j = 0;
	fdr = open(*dict, O_RDONLY);
	//fdw = open("buf_dict", O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR);
	while ((sizef = read(fdr, buf_s, 1)) > 0)
	{
		j++;
		if (*buf_s == '\n')
			i++;
		if (sizef < 0)
			return NULL;
	}
	if (i < 39)
		return NULL;
	str_count = i + 1;
	byte_count = j;
	close(fdr);

	char buf[j];

	fdr = open(*dict, O_RDONLY);
	i = 0;
	j = 0;
	sizef = read(fdr, buf, byte_count);
	while ()
	{
		t_dict *elem;
		if ((*buf >= '0') && (*buf <= '9'))
		{
		}
		if ((*buf == '\t') ||
			(*buf == '\v') ||
			(*buf == '\f') ||
			(*buf == '\r') ||
			(*buf == ' '))
			buf++;
		if (*buf == ':')
		{
			buf++;
			while (*buf != '\n')
			{

				buf++;
			}
		}
	}
}
