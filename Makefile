# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/03 15:07:03 by meserghi          #+#    #+#              #
#    Updated: 2023/11/08 12:31:52 by meserghi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c \
	ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c \
	ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c \
	ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c \
	ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

SRC_B = ft_lstnew.c ft_lstadd_front.c ft_lstlast.c ft_lstsize.c ft_lstadd_back.c\
	ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c
OBJ	= ${SRC:.c=.o}
OBJ_B = ${SRC_B:.c=.o}
CFLAGS = cc -Wall -Wextra -Werror
RM = rm -f
SL = ar -rcs
NAME = libft.a
LB = libft.h

all : ${NAME}

${NAME} : ${OBJ}
	${SL} ${NAME} ${OBJ}

bonus : ${NAME} ${OBJ_B}
	${SL} ${NAME} ${OBJ_B}

%.o: %.c ${LB}
	${CFLAGS} -c $< -o $@

fclean : clean
	 ${RM} ${NAME} ${OBJ_B}

clean :
	${RM} ${OBJ} {OBJ_B}

re : fclean all

.PHONY : all fclean clean re bonus
