# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbotelho <mbotelho@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/20 11:18:52 by mbotelho          #+#    #+#              #
#    Updated: 2026/01/13 20:40:01 by mbotelho         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CC = cc
FLAGS = -Wall -Werror -Wextra -I includes
RM = rm -f

# Folders
LIB = libft
SRC_DIR = srcs/main_functions
MOVE_DIR = srcs/moves

# Push_swap

SRCS =  $(SRC_DIR)/push_swap.c \
		$(SRC_DIR)/read_input.c \
    	$(SRC_DIR)/error_handling.c \
		$(SRC_DIR)/build_stack.c \
		$(SRC_DIR)/algorithm.c \
		$(SRC_DIR)/algorithm_utils.c \
		$(SRC_DIR)/algorithm_utils2.c \
        $(MOVE_DIR)/push.c \
        $(MOVE_DIR)/swap.c \
        $(MOVE_DIR)/rotate.c \
        $(MOVE_DIR)/reverse_rotate.c

# LIBFT & FT_PRINTF
FT = ft_
B = _bonus
PART1 = $(LIB)/$(FT)isalpha.c          $(LIB)/$(FT)isdigit.c           $(LIB)/$(FT)isalnum.c        $(LIB)/$(FT)isascii.c \
	    $(LIB)/$(FT)isprint.c          $(LIB)/$(FT)strlen.c            $(LIB)/$(FT)memset.c         $(LIB)/$(FT)bzero.c \
        $(LIB)/$(FT)memcpy.c           $(LIB)/$(FT)memmove.c           $(LIB)/$(FT)strlcpy.c        $(LIB)/$(FT)strlcat.c \
	    $(LIB)/$(FT)strchr.c           $(LIB)/$(FT)strrchr.c           $(LIB)/$(FT)strncmp.c        $(LIB)/$(FT)memchr.c \
	    $(LIB)/$(FT)tolower.c          $(LIB)/$(FT)toupper.c           $(LIB)/$(FT)memcmp.c         $(LIB)/$(FT)strnstr.c \
	    $(LIB)/$(FT)atoi.c             $(LIB)/$(FT)calloc.c            $(LIB)/$(FT)strdup.c

PART2 = $(LIB)/$(FT)substr.c           $(LIB)/$(FT)strjoin.c           $(LIB)/$(FT)strtrim.c        $(LIB)/$(FT)split.c \
	    $(LIB)/$(FT)itoa.c             $(LIB)/$(FT)strmapi.c           $(LIB)/$(FT)striteri.c       $(LIB)/$(FT)putchar_fd.c \
	    $(LIB)/$(FT)putstr_fd.c        $(LIB)/$(FT)putendl_fd.c        $(LIB)/$(FT)putnbr_fd.c

BONUS = $(LIB)/$(FT)lstnew$(B).c       $(LIB)/$(FT)lstadd_front$(B).c  $(LIB)/$(FT)lstsize$(B).c    $(LIB)/$(FT)lstlast$(B).c \
        $(LIB)/$(FT)lstadd_back$(B).c  $(LIB)/$(FT)lstdelone$(B).c     $(LIB)/$(FT)lstclear$(B).c   $(LIB)/$(FT)lstiter$(B).c \
		$(LIB)/$(FT)lstmap$(B).c

FT_PRINTF = $(LIB)/$(FT)putchar.c      $(LIB)/$(FT)putstr.c            $(LIB)/$(FT)printf.c         $(LIB)/$(FT)putadress.c \
			$(LIB)/$(FT)putnbr_base.c  $(LIB)/$(FT)putnbr_base_upper.c $(LIB)/$(FT)putnbr_unsigned.c



# SRCS & OBJS
LIBFT_SRCS = $(PART1) $(PART2) $(BONUS) $(FT_PRINTF)
LIBFT_OBJS = $(LIBFT_SRCS:.c=.o)


OBJS = $(SRCS:.c=.o)

# Compile
$(NAME): $(OBJS) $(LIBFT_OBJS)
	$(CC) $(FLAGS) $(OBJS) $(LIBFT_OBJS) -o $(NAME)

.c.o:
	$(CC) $(FLAGS) -c $< -o $(<:.c=.o)

# Rules

all: $(NAME)

clean:
	$(RM) $(OBJS) $(LIBFT_OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
