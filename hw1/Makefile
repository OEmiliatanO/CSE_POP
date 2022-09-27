CC:=gcc
FLAG:=-Wall -Wextra -Werror
OBJ:=main.o queue.o stack.o list.o mm.o
SOURCE:=main.c queue.c stack.c list.c mm.c

main.o: main.c
	$(CC) $(FLAG) -c main.c
queue.o: queue.c
	$(CC) $(FLAG) -c queue.c
stack.o: stack.c
	$(CC) $(FLAG) -c stack.c
list.o: list.c
	$(CC) $(FLAG) -c list.c
mm.o: mm.c
	$(CC) $(FLAG) -c mm.c

dep: $(SOURCE)
	make $(OBJ)

all: $(OBJ)
	$(CC) -o main $(OBJ)

.PHONY: clean
clean: 
	-rm -rf *.o
