# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: jmetzger <jmetzger@student.codam.n>          +#+                      #
#                                                    +#+                       #
#    Created: 2022/10/14 07:17:37 by jmetzger      #+#    #+#                  #
#    Updated: 2022/11/26 20:14:15 by jmetzger      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

# 1. Target - files that need to be up-to-date to build the program
# 2. Command - to build main if thode dependencies are satisfied
# NOTE - command needs to be a tab
# 3. CC -name of compiler / CFLAGS
# NOTE - replace - $
# 4. NAME - gives a name to our executable (the traditional a.out)
# 5. SRC - specifies all files with the .c extenstion that we want to compile together
# 6. OBJ - tranforms all .c to .o
# 7. Clean - to "redo" make, otherwise it will tell you "file up-to-date"
# 8. fclean - will first clean, than removes the excutable
# 9. re - first fclean, then rebuild all
# 10. PHONY - prevents conflict when you have a file named, clean, fclean, re

NAME = libft.a

SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c \
	  ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c \
	  ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_atoi.c \
	  ft_strnstr.c ft_strdup.c ft_calloc.c ft_substr.c ft_putchar_fd.c ft_putstr_fd.c ft_putnbr_fd.c \
	  ft_putendl_fd.c ft_strjoin.c ft_striteri.c ft_strmapi.c ft_itoa.c ft_strtrim.c ft_split.c

BONUS_SRC = ft_lstnew.c ft_lstsize.c ft_lstadd_back.c ft_lstadd_front.c ft_lstlast.c \
			ft_lstdelone.c ft_lstiter.c ft_lstclear.c ft_lstmap.c

CC = gcc
CFLAGS = -Wall -Werror -Wextra

OBJ = $(SRC:.c=.o)

BONUS_OBJ = $(BONUS_SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ) 
	ar rc $(NAME) $(OBJ) 

bonus: $(NAME)
	ar rc $(NAME) $(BONUS_OBJ)
	
clean:
	rm -f $(OBJ) $(BONUS_OBJ)

fclean:
	rm -f $(OBJ) $(BONUS_OBJ)
	rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re bonus
