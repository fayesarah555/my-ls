CFLAGS  =  -W -Wall -Wextra -std=c11 -g

CC 		= 	gcc

NAME 	= 	my_ls

SRC		= 	main.c		\
			functions/my_putstr.c \

OBJ		=	$(SRC:.c=.o)

RM		=	rm -f

$(NAME):	$(OBJ)
			$(CC) $(OBJ) -o $(NAME)

all:	$(NAME)

clean:  
	rm *.o

