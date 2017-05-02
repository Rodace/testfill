# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nadam <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/04/24 09:48:30 by nadam             #+#    #+#              #
#    Updated: 2017/04/28 11:42:47 by nadam            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit
CC = gcc
DIROBJ = obj/
DIRSRC = src/
DIRINC = includes/
FLAG = -Wall -Wextra -Werror
QUIET = 
SRC = main.c \
	  findsquare.c\

OBJ = $(SRC:.c=.o)
COMPIL = $(QUIET)$(CC) $(FLAG) -I $(DIRINC)

.PHONY : all clean fclean re
#---------------------------------------------#

$(NAME) : all

all : $(DIROBJ)$(OBJ)
	$(COMPIL) -o $(NAME) $(DIROBJ)$(OBJ)

$(DIROBJ)%.o : $(DIRSRC)%.c
	$(COMPIL) -o $@ -c $<

clean :
	$(QUIET)rm -rf $(DIROBJ)$(OBJ)

fclean : clean
	$(QUIET)rm -rf $(NAME)

re : fclean all
