# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ajearuth <ajearuth@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/15 09:56:00 by ajearuth          #+#    #+#              #
#    Updated: 2021/09/15 11:33:02 by ajearuth         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =

SRCS = 
SRCSD = srcs/
bonus = \

OBJSD = objs/

LIBFT_PATH = libft/
LIBFT_SRCS = 
LIBFT_OBJS = $(addprefix $(OBJSD), $(LIBFT_SRCS:.c=.o))
OBJS = $(addprefix $(OBJSD), $(SRCS:.c=.o))
OBJSBONUS = $(bonus:.c=.o)

CC = gcc -c -o
// LINKER = ar rcs
FLAGS = -Wall -Wextra -Werror

$(NAME):	$(OBJS) $(LIBFT_OBJS)
	$(LINKER) $@ $(OBJS) $(LIBFT_OBJS)
	@echo "\033[0;32m\n          _         "
	@echo "   ______/ \-.   _  "
	@echo ".-/     (    o\_//   MAKEFILE OK"
	@echo " |  ___  \_/\---'   "
	@echo "  |_||  |_||        "
	@echo "\033[0;35m                     Bonne correction !"

$(OBJSD)%.o: $(SRCSD)%.c
	mkdir -p $(OBJSD)
	$(CC) $@ $< $(FLAGS) 

$(OBJSD)%.o: $(LIBFT_PATH)%.c
	$(CC) $@ $< $(FLAGS)

all: $(NAME)

clean:
	rm -rf $(OBJSD) $(OBJSBONUS)

fclean:	clean
	rm -rf $(NAME)

re: fclean all 

.PHONY: all clean fclean re
