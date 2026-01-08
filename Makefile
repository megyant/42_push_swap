# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbotelho <mbotelho@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/20 11:18:52 by mbotelho          #+#    #+#              #
#    Updated: 2026/01/08 10:57:34 by mbotelho         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap.a
FT = ft_
LIB = libft
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

SRCS = $(PART1) $(PART2) $(BONUS) $(FT_PRINTF)
OBJS = $(SRCS:.c=.o)

CC = cc
FLAGS = -Wall -Werror -Wextra
RM = rm -f

.c.o:
	$(CC) $(FLAGS) -c $< -o $(<:.c=.o)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
