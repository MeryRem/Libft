# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mariredo0 <mariredo@student.42malaga.com>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/04/19 19:20:45 by mariredo          #+#    #+#              #
#    Updated: 2026/04/19 19:20:45 by mariredo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc
CFLAGS = -Wall -Werror -Wextra
AR = ar rcs
RM = rm -fr

#archivos que componen el ejecutable
FILES = 	ft_isalpha.c 	\
			ft_isdigit.c 	\
			ft_isalnum.c 	\
			ft_isascii.c 	\
			ft_isprint.c 	\
			ft_strlen.c 	\
			ft_memset.c		\
			ft_bzero.c		\
			ft_memcpy.c		\
			ft_memmove.c 	\
			ft_toupper.c	\
			ft_tolower.c	\
			ft_strchr.c		\
			ft_strrchr.c	\
			ft_strncmp.c	\
			ft_strlcpy.c	\
			ft_strlcat.c	\
			ft_strnstr.c	\
			ft_memchr.c		\
			ft_memcmp.c		\
			ft_atoi.c		\
			ft_calloc.c		\
			ft_strdup.c		\
			ft_substr.c		\
			ft_strjoin.c	\
			ft_strtrim.c	\
			ft_split.c		\
			ft_itoa.c		\
			ft_strmapi.c	\
			ft_striteri.c	\
			ft_putchar_fd.c	\
			ft_putstr_fd.c	\
			ft_putendl_fd.c	\
			ft_putnbr_fd.c	\
			
BONUS_FILES =	ft_lstnew.c	\
		ft_lstsize.c		\
		ft_lstiter.c		\
		ft_lstlast.c		\
		ft_lstadd_back.c	\
		ft_lstdelone.c		\
		ft_lstclear.c		\
		ft_lstmap.c			\
		ft_lstadd_front.c

OBJECTS = $(FILES:.c=.o) 			#convierte cada archivo .c en .o
OBJECTS_BON = $(BONUS_FILES:.c=.o)  #convierte cada archivo bonus .c en .o

all: $(NAME)

$(NAME): $(OBJECTS) 				#construye la libreria con todos los .o
	ar rcs $(NAME) $(OBJECTS)

bonus: all $(OBJECTS_BON)
	ar rcs $(NAME) $(OBJECTS_BON)

%.o: %.c							#compila cada .c en su .o
	$(CC) $(CFLAGS) -c $< -o $@

clean:								#borra los .o
	$(RM) $(OBJECTS) $(OBJECTS_BON)

fclean: clean						#borra los .o y el libft.a
	$(RM) $(NAME)

re: fclean all						#recompila todo desde cero

.PHONY: all bonus clean fclean re
