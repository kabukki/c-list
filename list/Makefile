## 
## Made by Lucien Le Roux
## Login   <le-rou_c@epitech.net>
## 
## Started on  Thu Mar 23 15:17:30 2017 Lucien Le Roux
## Last update Fri Mar 24 10:54:46 2017 Lucien Le Roux
##

NAME	=	lib/liblist.so

SRC	=	src/lnode.c		\
		src/lcopy.c		\
		src/ldelete.c		\
		src/liter.c		\
		src/lsize.c		\
		src/lswap.c		\
		src/lappend.c		\
		src/lprepend.c		\
		src/linsert.c		\
		src/lconcat.c		\
		src/lapply.c		\
		src/lsort.c		\
		src/lmerge.c		\
		src/lrev.c		\
		src/lat.c		\
		src/llast.c		\
		src/lfind.c		\
		src/print_int.c		\
		src/print_string.c

OBJ	=	$(SRC:.c=.o)

INC	=	-I./include

CFLAGS	=	$(INC) -g
CC	=	gcc $(CFLAGS)

all:	$(NAME)

$(NAME):	$(OBJ)
	$(CC) -shared $(OBJ) -o $(NAME)
	@ cp $(NAME) ..
%.o:	%.c
	$(CC) -fPIC -c $< -o $@

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all
