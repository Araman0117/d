# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tcinthia <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/08/01 15:28:04 by tcinthia          #+#    #+#              #
#    Updated: 2020/08/02 15:06:20 by tcinthia         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-02

FILES = *.c
OPTIONS = -c -o
CFLAGS = -Wall -Wextra -Werror

.PHONY: all clean fclean

all: $(NAME)

$(NAME):
		gcc $(CFLAGS) $(FILES) $(OPTIONS) $(NAME)

clean:
		rm -f *.o

fclean: clean
		rm -f $(NAME)
