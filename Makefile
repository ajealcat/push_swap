# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ajearuth <ajearuth@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/15 09:56:00 by ajearuth          #+#    #+#              #
#    Updated: 2021/11/25 18:03:43 by ajearuth         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

BIN = push_swap

SRCS = main.c operations.c operations_r.c operations_rr.c quicksort_utils.c \
		quicksort.c weird_sort.c weird_sort_utils.c main_utils.c \
		quicksort_aux.c 
SRCSD = srcs/
bonus = checker.c checker_utils.c get_next_line.c get_next_line_utils.c

OBJSD = objs/

LIBFT_PATH = libft/
LIBFT_SRCS = ft_atoi.c ft_putstr_fd.c ft_strlen.c ft_isdigit.c ft_isalnum.c ft_strncmp.c
LIBFT_OBJS = $(addprefix $(OBJSD), $(LIBFT_SRCS:.c=.o))
OBJS = $(addprefix $(OBJSD), $(SRCS:.c=.o))
OBJSBONUS = $(bonus:.c=.o)

CC = gcc -c -o
LINKER = gcc -o
FLAGS = -Wall -Wextra -Werror

$(BIN):	$(OBJS) $(LIBFT_OBJS)
	$(LINKER) $@ $(OBJS) $(LIBFT_OBJS)
	@echo "\033[0;32m\n          _         "
	@echo "   ______/ \-.   _  "
	@echo ".-/     (    o\_//    *~o~o~* MAKEFILE OK *~o~o~* "
	@echo " |  ___  \_/\---'   "
	@echo "  |_||  |_||        "
	@echo "\033[0;35m                     Bonne correction !"


$(OBJSD)%.o: $(SRCSD)%.c
	mkdir -p $(OBJSD)
	$(CC) $@ $< $(FLAGS) 

$(OBJSD)%.o: $(LIBFT_PATH)%.c
	$(CC) $@ $< $(FLAGS)

all: $(BIN)

clean:
	rm -rf $(OBJSD) $(OBJSBONUS)

fclean:	clean
	rm -rf $(BIN)

re: fclean all 

.PHONY: all clean fclean re
