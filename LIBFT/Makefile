# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ybiloshy <ybiloshy@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/11 15:23:53 by ybiloshy          #+#    #+#              #
#    Updated: 2024/06/14 20:49:07 by ybiloshy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			=	ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c \
					ft_itoa.c ft_strmapi.c  ft_putchar_fd.c ft_putstr_fd.c\
					ft_putendl_fd.c ft_putnbr_fd.c ft_strlcpy.c ft_strlcat.c
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

re:						fclean $(NAME)