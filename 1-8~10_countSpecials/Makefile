CC				= gcc
CFLAGS			= -Wall -Wextra -Werror -Iincludes
SOURCES			= get_eof.run count_specials.run \
				duplicate_space_replace.run \
				materialize_spaces.run
lib_additionals	:= ~/Documents/c/libs/additionals

.DEFAULT_GOAL	:= all

.PHONY: all
all: build

.PHONY: help
help:
	@echo "Targets: build fclean"
	@echo "can build specific target below each with command arg"
	@echo $(SOURCES)

build: $(SOURCES)

get_eof.run:
	$(CC) $(CFLAGS)	-o $@ srcs/get_eof.c

count_specials.run: $(lib_additionals)
	$(CC) $(CFLAGS) -o $@ srcs/count_specials.c ft_additionals.a

duplicate_space_replace.run:
	$(CC) $(CFLAGS) -o $@ srcs/duplicate_space_replace.c ft_additionals.a

materialize_spaces.run:
	$(CC) $(CFLAGS)	-o $@ srcs/materialize_spaces.c

.PHONY: $(lib_additionals)
$(lib_additionals):
	$(MAKE) --directory=$@
	mv $@/ft_additionals.a ./
	$(MAKE) clean --directory=$@

.PHONY: fclean
fclean:
	/bin/rm ./*.run ./ft_additionals.a

.PHONY: re
re: fclean build
