#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tcarmet <tcarmet@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/11/04 11:00:56 by tcarmet           #+#    #+#              #
#    Updated: 2015/02/16 19:13:04 by tcarmet          ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = libft.a

FLAG = -Wall -Wextra -Werror

SRC = ft_atoi.c\
	ft_strcmp.c\
	ft_strlen.c\
	ft_strcpy.c\
	ft_isdigit.c\
	ft_isalpha.c\
	ft_isprint.c\
	ft_isascii.c\
	ft_isalnum.c\
	ft_tolower.c\
	ft_toupper.c\
	ft_strcat.c\
	ft_strdup.c\
	ft_strncpy.c\
	ft_strncat.c\
	ft_strncmp.c\
	ft_memset.c\
	ft_bzero.c\
	ft_memcpy.c\
	ft_strchr.c\
	ft_memmove.c\
	ft_strlcat.c\
	ft_strstr.c\
	ft_memchr.c\
	ft_putchar.c\
	ft_putstr.c\
	ft_putnbr.c\
	ft_putendl.c\
	ft_putchar_fd.c\
	ft_putstr_fd.c\
	ft_putendl_fd.c\
	ft_memcmp.c\
	ft_strrchr.c\
	ft_memccpy.c\
	ft_strnstr.c\
	ft_strclr.c\
	ft_striter.c\
	ft_strmap.c\
	ft_memdel.c\
	ft_memalloc.c\
	ft_strnew.c\
	ft_strdel.c\
	ft_striteri.c\
	ft_strmapi.c\
	ft_strequ.c\
	ft_strnequ.c\
	ft_putnbr_fd.c\
	ft_strsub.c\
	ft_strtrim.c\
	ft_itoa.c\
	ft_strsplit.c\
	ft_strjoin.c\
	ft_strrev.c\
	get_next_line.c\
	ft_lstnew.c\
	ft_lstdelone.c\
	ft_lstdel.c\
	ft_lstadd.c\
	ft_lstiter.c\
	ft_lstmap.c\
	ft_strrev.c\
	ft_swapchar.c\
	ft_swapint.c\
	ft_strjoin3.c\
	ft_strjoin_free.c\
	ft_strlower.c\
	ft_free_tb.c\
	ft_strlen_tab.c\

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME) :
	@echo "Processing files..."
	@gcc $(FLAG) -c $(SRC) -I ./includes
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)
	@echo "$(NAME) has been created !"

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME)
	@echo "$(NAME) has been removed !"

re: fclean all