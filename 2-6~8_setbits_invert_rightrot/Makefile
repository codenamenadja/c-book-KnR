CC				= gcc
CFLAGS			= -Wall -Wextra -Werror
OBJECTS			= srcs/ft_setbits.o \
				srcs/ft_invert.o \
				srcs/ft_rightrot.o
NAME			= ft_bits.a
.DEFAULT_GOAL	:= all

.PHONY: all
all: $(NAME)

$(NAME): $(OBJECTS)
	ar rcs $@ $^
	ranlib $@

.PHONY: clean
clean:
	/bin/rm $(OBJECTS)
	echo "DO clean"

.PHONY: fclean
fclean:
	echo "DO fclean"
	/bin/rm $(NAME)

.PHONY: re
re:	clean fclean all

srcs/ft_setbits.o:
	$(CC) $(CFLAGS) -c srcs/ft_setbits.c -o $@ 

srcs/ft_invert.o:
	$(CC) $(CFLAGS) -c srcs/ft_invert.c -o $@ 
	
srcs/ft_rightrot.o:
	$(CC) $(CFLAGS) -c srcs/ft_rightrot.c -o $@ 
