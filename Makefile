# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jamendoe <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/12 18:29:24 by jamendoe          #+#    #+#              #
#    Updated: 2022/11/12 18:29:30 by jamendoe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libftprintf.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

REMOVE = rm -f

AR = ar rcs

LIBFT = libft

FILES = ft_printf.c \
		ft_print_numberhex.c \
		ft_print_pointer.c \
		ft_print_ui_number.c

FILES_OBJ = $(FILES:c=o)

all: $(NAME)

$(NAME): $(FILES_OBJ)
	make -C $(LIBFT)
	cp libft/libft.a .
	mv libft.a $(NAME)
	$(AR) $(NAME) $(FILES_OBJ)

clean:
	$(REMOVE) $(FILES_OBJ)
	make clean -C libft/

fclean: clean
	$(REMOVE) $(NAME)
	make fclean -C libft/

re: fclean all

.PHONY: all bonus clean fclean re
