# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gabdoush <gabdoush@student.42abudhabi      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/03 12:42:29 by gabdoush          #+#    #+#              #
#    Updated: 2021/10/11 02:26:50 by gabdoush         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FILES =  ft_atoi\
	 ft_isalnum\
	 ft_isalpha\
	 ft_isascii\
	 ft_isblank\
	 ft_iscntrl\
	 ft_isdigit\
	 ft_isgraph\
	 ft_islower\
	 ft_isprint\
	 ft_ispunct\
	 ft_isspace\
	 ft_isupper\
	 ft_isxdigit\
	 ft_itoa\
	 ft_tolower\
	 ft_toupper\
	 ft_bzero\
	 ft_calloc\
	 ft_memcmp\
	 ft_memset\
	 ft_strcat\
	 ft_memcpy\
	 ft_memmove\
	 ft_memccpy\
	 ft_memchr\
	 ft_split\
	 ft_strchr\
	 ft_strcmp\
	 ft_strcpy\
	 ft_strlen\
	 ft_strdup\
	 ft_strlcat\
	 ft_strjoin\
	 ft_strtrim\
	 ft_strlcpy\
	 ft_strlen_2\
	 ft_strncat\
	 ft_strncmp\
	 ft_strncpy\
	 ft_strnrcmp\
	 ft_strnstr\
	 ft_strrchr\
	 ft_strstr\
	 ft_putchar_fd\
	 ft_putstr_fd\
	 ft_putendl_fd\
	 ft_putnbr_fd\
	 ft_strmapi\
	 ft_substr

BONUS_FILES = ft_lstnew\
	      ft_lstadd_front\
	      ft_lstsize\
	      ft_lstlast\
	      ft_lstadd_back\
	      ft_lstdelone\
	      ft_lstclear\
	      ft_lstiter\
	      ft_lstmap

OBJECTS =	$(FILES:.c=.o)

BONUS_OBJ =	$(BONUS_FILES:.c=.o)

HEADERS = libft.h 

FLAGS = -Wall -Werror -Wextra

CC = gcc -c $(FLAGS)

all: $(NAME)

$(NAME): $(OBJECTS)
	ar rc libft.a $(OBJECTS)

bonus: $(BONUS_OBJ)
	ar -rc $(NAME) $(BONUS_OBJ)

clean:
	/bin/rm -f $(OBJECTS) $(BONUS_OBJ)

fclean: clean
	/bin/rm -f  $(NAME)

re: fclean all


%.o: %.c
	$(CC) $< -I $(HEADERS) -o $@ 
