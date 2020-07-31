# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tcinthia <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/07/28 22:56:14 by tcinthia          #+#    #+#              #
#    Updated: 2020/07/28 23:19:19 by tcinthia         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

TARGET = ft_display_file

CFLAGS = -Wall -Wextra -Werror

.PHONY: all clean fclean

all: $(TARGET)

main.o: main.c
	gcc $(CFLAGS) -c -o main.o main.c

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(TARGET)

$(TARGET): main.o
	gcc $(CFLAGS) main.c -o $(TARGET)

re: fclean all
