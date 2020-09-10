  
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cda-silv <cda-silv@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/24 20:15:20 by apuchill          #+#    #+#              #
#    Updated: 2020/05/02 13:47:37 by apuchill         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#CC		= gcc

CC		= clang
# CFLAGS	= -Wall -Wextra -Werror
RM		= /bin/rm -f

NAME	= libftprintf.a

SRCS	= ft_printf.c ft_printf_flags.c ft_printf_cs_pct.c ft_printf_piduxo.c \
			ft_printf_fg.c ft_printf_e.c ft_ftoa_rnd.c \
			ft_printf_utils.c ft_printf_utils_2.c ft_printf_utils_3.c

OBJS	= $(SRCS:.c=.o)

.c.o:
		@$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJS)
			@ar -rcs $(NAME) $(OBJS)

clean:
		@$(RM) $(OBJS)

fclean:		clean
		@$(RM) $(NAME)

re:		fclean all


.PHONY:		all clean fclean re