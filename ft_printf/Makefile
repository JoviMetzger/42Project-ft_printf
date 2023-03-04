# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: jmetzger <jmetzger@student.codam.n>          +#+                      #
#                                                    +#+                       #
#    Created: 2022/11/07 13:34:05 by jmetzger      #+#    #+#                  #
#    Updated: 2022/11/26 20:18:35 by jmetzger      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
LIBFT = ./libft/libft.a
CC = gcc
CFLAGS = -Wall -Werror -Wextra 

SRC = ft_printf.c ft_print_str.c ft_print_usigned_integer.c ft_print_char.c ft_print_number.c ft_hexadecimal.c ft_print_pointer.c 

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(LIBFT):
		@$(MAKE) -C ./libft

$(NAME): $(LIBFT) $(OBJ)
		@cp $(LIBFT) $(NAME)
		ar rc $(NAME) $(OBJ)

clean:
		@$(MAKE) clean -C ./libft
		rm -f $(OBJ)

fclean:
		@$(MAKE) fclean -C ./libft
		rm -f $(OBJ)
		rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
