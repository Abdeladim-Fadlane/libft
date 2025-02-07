# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: afadlane <afadlane@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/23 10:20:33 by afadlane          #+#    #+#              #
#    Updated: 2022/10/30 14:36:14 by afadlane         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
cc  =  cc
CFLAGS = -Wall -Wextra -Werror
SRCS =  ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_strlen.c \
		ft_memset.c \
		ft_bzero.c \
		ft_memmove.c \
		ft_strlcpy.c \
		ft_strlcat.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strncmp.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_atoi.c \
		ft_calloc.c \
		ft_strdup.c \
		ft_strtrim.c \
		ft_substr.c \
		ft_strjoin.c \
		ft_itoa.c \
		ft_memcpy.c\
		ft_strnstr.c\
		ft_strmapi.c\
		ft_striteri.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_split.c 

OBJ = ${SRCS:.c=.o}

all : ${NAME}

${NAME} : ${OBJ}
	ar r ${NAME} ${OBJ}
	
.o : .c
	${cc} $(CFLAGS) -c $^
	
clean :
	rm -f ${OBJ}

fclean : clean
	rm -f ${NAME}
	
re : fclean all 