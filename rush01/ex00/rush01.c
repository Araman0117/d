/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcinthia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/26 12:40:41 by tcinthia          #+#    #+#             */
/*   Updated: 2020/07/26 20:21:54 by tcinthia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
//#include <stdio.h>

int		input_check(int i, int j, char *s)
{
	while (i < j)
	{
		if (((s[i + 8] + s[i]) <= 'b') || ((s[i + 8] + s[i]) >= 'f'))
		{
			write(1, "Error\n", 6);
//			printf("%d", i);
			return (1);
		}
		i += 2;
	}
	return (0);
}

void	standart_fill(char map[4][4][5])
{
	int		i;
	int		j;
	int		k;
//	char	*str;
	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			k = 0;
			while (k < 4)
			{
				map[i][j][k] = '0';
				k++;
			}
			map[i][j][k] = '\0';
//			str = map[i][j];
//			write(1, str, 4);
//			write(1, " ", 1);
			j++;
		}
//		write(1, "\n", 1);
		i++;
	}
}

void	put(int h, char map[4][4][5], char *p)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while()
	{
		while(j < 4)
		{
			if ((p[0 + j] == '1') && (p[8 + j] == '4'))
			{
				map[0][j][0] = "4";
				map[1][j][0] = "3";
				map[2][j][0] = "2";
				map[3][j][0] = "1";
			}
			else if ((p[0 + j] == '4') && (p[8 + j] == '1'))
			{
				map[0][j][0] = "1";
				map[1][j][0] = "2";
				map[2][j][0] = "3";
				map[3][j][0] = "4";
			}
			if ((p[16 + j] == '1') && (p[24 + j] == '4'))
			{
				map[j][0][0] = "4";
				map[j][1][0] = "3";
				map[j][2][0] = "2";
				map[j][3][0] = "1";
			}
			else if ((p[16 + j] == '4') && (p[24 + j] == '1'))
			{
				map[j][0][0] = "1";
				map[j][1][0] = "2";
				map[j][2][0] = "3";
				map[j][3][0] = "4";
			}

		}
		i++;
	}
}

int		main(int argc, char *argv[])
{
	char	*str;
	char	map[4][4][5];

	str = argv[argc - argc + 1];
//	**map = (char*)malloc(sizeof(***map) * 16 * 5);
	if ((input_check(0, 7, str) == 1) || (input_check(16, 23, str) == 1))
	{
		return (0);
	}
	standart_fill(map);
	return (0);
}
