CC:=gcc
CFLAG:=-Wall -Wextra -Werror
OBJQ:=main_queue.o mm.o list.o queue.o
OBJS:=main_stack.o mm.o list.o stack.o

main_queue.elf: $(OBJQ)
main_stack.elf: $(OBJS)

dep:
	$(CC) $(CFLAG) -MM *.c > .dep

all: $(OBJQ) $(OBJS)
	$(CC) -o main_queue.elf $(OBJQ)
	$(CC) -o main_stack.elf $(OBJS)

.PHONY: clean
clean:
	-rm -rf *.o
include .dep
