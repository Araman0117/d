/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   source.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcinthia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/28 20:07:11 by tcinthia          #+#    #+#             */
/*   Updated: 2020/07/28 23:14:41 by tcinthia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>

void	clean_str(char *str)
{
	while (*str)
	{
		*str = '\0';
		str++;
	}
}

int		check_num(char *str)
{
	int j;

	j = 0;
	while (*str)
	{
		str++;
		j++;
	}
	return (j);
}

int		print_input(char *str)
{
	int		ret;
	char	*bubuf;

	while (1)
	{
		bubuf = str;
		errno = 0;
		if ((ret = read(0, bubuf, 29696)) < 1)
			return (errno);
		write(1, bubuf, ret);
		clean_str(bubuf);
	}
}

int		print_file(char *str, char *buf)
{
	int	fd;
	int	sizef;

	errno = 0;
	if ((fd = open(str, O_RDONLY)) < 1)
		return (errno);
	if ((sizef = read(fd, buf, 29696)) < 1)
		return (errno);
	write(1, buf, sizef);
	clean_str(buf);
	return (errno);
}

void	print_err(int errnumer)
{
	char	*str;
	int		i;

	i = 0;
	if (errnumer != 0)
	{
		str = strerror(errnumer);
		while (*str)
		{
			i++;
			str++;
		}
		str = strerror(errnumer);
		write(2, str, i);
		write(2, "\n", 1);
	}
}
