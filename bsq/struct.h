/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smercede <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/03 17:06:05 by smercede          #+#    #+#             */
/*   Updated: 2020/08/03 22:47:21 by tcinthia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCT_H
# define STRUCT_H

typedef struct		s_param
{
	int				str_num;
	int				str_len;
	char			free;
	char			obstacle;
	char			full;
}					t_param;

typedef struct		s_map
{
	char			*str;
	struct s_map	*next;
}					t_map;

typedef struct		s_square
{
	int				size;
	int				x;
	int				y;
}					t_square;

typedef struct		s_let
{
	char			letter;
	struct s_let	*next;
}					t_let;

#endif
