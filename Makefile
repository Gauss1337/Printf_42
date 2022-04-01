# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahakam <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/10 22:03:17 by ahakam            #+#    #+#              #
#    Updated: 2021/12/10 22:06:56 by ahakam           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFILES = ft_printf.c ft_hexa.c ft_putnbr_fd.c ft_putchar_fd.c ft_putstr_fd.c

OBJS = ft_printf.o ft_hexa.o ft_putnbr_fd.o ft_putchar_fd.o ft_putstr_fd.o  

NAME = libftprintf.a

CC = gcc

RM = rm -rf

CFLAGS = -Wall -Werror -Wextra -c

all : $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(CFILES)
	ar rc $(NAME) $(OBJS)

clean :
			${RM} ${OBJS} ${OBJSB}
fclean : 	clean
			${RM} ${NAME} ${bonus}
re : fclean all
.PHONY : all
