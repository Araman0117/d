/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcinthia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/28 22:43:14 by tcinthia          #+#    #+#             */
/*   Updated: 2020/07/28 23:15:04 by tcinthia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <errno.h>

int	main(int argc, char *argv[])
{
	long long int	sizef;
	int				fd;
	char			buf[4097];

	if (argc < 2)
	{
		write(2, "File name missing.\n", 19);
		return (0);
	}
	else if (argc == 2)
	{
		fd = open(argv[1], O_RDONLY);
		if ((sizef = read(fd, buf, 4096)) > 0)
			write(1, buf, sizef);
		if (sizef < 0)
			write(2, "Cannot read file.\n", 18);
		close(fd);
		return (0);
	}
	else
	{
		write(2, "Too many arguments.\n", 20);
		return (0);
	}
}
