CC:=gcc
FLAG:=-Wall -Wextra -Werror
OBJQ:=main_queue.o queue.o list.o mm.o
OBJS:=main_stack.o stack.o list.o mm.o
SOURCE:=main_queue.c main_stack.c queue.c stack.c list.c mm.c

dep:
	gcc -M $(SOURCE) > .dep

all: $(OBJQ) $(OBJS)
	$(CC) $(FLAG) -o main_queue $(OBJQ)
	$(CC) $(FLAG) -o main_stack $(OBJS)

.PHONY: clean
clean: 
	-rm -rf *.o

sinclude .dep
