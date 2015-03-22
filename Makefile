#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tcarmet <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/02/16 17:42:06 by tcarmet           #+#    #+#              #
#    Updated: 2015/03/21 15:41:15 by tcarmet          ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME 		= ft_select

DEBUG 		= no
ifeq ($(DEBUG),no)
    FLAGS	= -Wall -Werror -Wextra
else
    FLAGS	=-g
endif
SRC 		= 	ft_select.c ft_term_change.c ft_print_select.c ft_myputchar.c ft_list.c \
				ft_select_misc.c ft_keyhook.c ft_moves.c

OBJ 		= $(SRC:.c=.o)
INC 		= ft_select.h
LIBFLAGS 	= -L./libft/ -lft
SRCDIR  	= ./srcs/
OBJDIR  	= ./
INCDIRLIB	= ./libft/includes/
INCDIR		= ./includes/
SRCS    	= $(addprefix $(SRCDIR), $(SRC))
OBJS    	= $(addprefix $(OBJDIR), $(OBJ))

.SILENT:

all : 		$(NAME)

$(NAME) :
ifeq ($(DEBUG),yes)
		echo "\\033[1;31mDEBUG COMPILATION.. (no flags except -g)\\033[0;39m"
else
		echo "\\033[1;31mCompilation with -Wall -Wextra -Werror...\\033[0;39m"
endif
		echo "\\033[1;34mGenerating objects... Please wait.\\033[0;39m"
			Make -C libft/
			cc $(FLAGS) -c $(SRCS) -I $(INCDIR) -I $(INCDIRLIB)
			echo "compiling $(NAME)..."
			cc $(FLAGS) -ltermcap -o $(NAME) $(OBJS) $(LIBFLAGS)
			echo "$(NAME) has been created !"

.PHONY: 	clean fclean re

clean : 
			Make -C ./libft/ clean
			rm -rf $(OBJS)
			echo "objects files has been removed !"

fclean :	clean
			Make -C ./libft/ fclean
			rm -rf $(NAME)
			echo "$(NAME) has been removed !"

re		: 	fclean all


git :
			git add .
			echo "Enter Your Commit : "
			read root_path ; git commit -m "$$root_path"
			git push
