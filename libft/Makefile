# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ybiloshy <ybiloshy@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/02 20:22:01 by ybiloshy          #+#    #+#              #
#    Updated: 2024/07/11 21:33:16 by ybiloshy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			=	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
					ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c \
					ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c \
					ft_toupper.c ft_tolower.c ft_strchr.c ft_strncmp.c \
					ft_strrchr.c ft_memchr.c ft_strnstr.c ft_memcmp.c\
					ft_atoi.c ft_striteri.c ft_substr.c ft_strjoin.c \
					ft_calloc.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c \
					ft_putchar_fd.c ft_strdup.c ft_strtrim.c ft_split.c \
					ft_itoa.c ft_strmapi.c
					
OBJS			= $(SRCS:.c=.o)

CC				= cc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror -I.

NAME			= libft.a

all:			$(NAME)

$(NAME):		$(OBJS)
				ar rcs $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)