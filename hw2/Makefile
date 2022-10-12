CC:=gcc
FLAG:=-Wall -Wextra -Werror
OBJQ:=main_queue_char.o queue.o list.o mm.o
OBJS:=main_stack.o stack.o list.o mm.o
SOURCE:=main_queue.c main_stack.c queue.c stack.c list.c mm.c

main_queue_char.o: queue_char/main_queue_char.c
main_queue_short.o: queue_char/main_queue_short.c
main_queue_int.o: queue_char/main_queue_int.c
main_queue_long.o: queue_char/main_queue_long.c
main_queue_float.o: queue_char/main_queue_float.c
main_queue_double.o: queue_char/main_queue_double.c

main_queue_ptr_to_char.o: queue_char/main_queue_ptr_to_char.c
main_queue_ptr_to_short.o: queue_char/main_queue_ptr_to_short.c
main_queue_ptr_to_int.o: queue_char/main_queue_ptr_to_int.c
main_queue_ptr_to_long.o: queue_char/main_queue_ptr_to_long.c
main_queue_ptr_to_float.o: queue_char/main_queue_ptr_to_float.c
main_queue_prt_to_double.o: queue_char/main_queue_ptr_to_double.c

queue_char.o: queue_char/main_queue_char.c
queue_short.o: queue_char/main_queue_short.c
queue_int.o: queue_char/main_queue_int.c
queue_long.o: queue_char/main_queue_long.c
main_queue_float.o: queue_char/main_queue_float.c
main_queue_double.o: queue_char/main_queue_double.c

main_queue_ptr_to_char.o: queue_char/main_queue_ptr_to_char.c
main_queue_ptr_to_short.o: queue_char/main_queue_ptr_to_short.c
main_queue_ptr_to_int.o: queue_char/main_queue_ptr_to_int.c
main_queue_ptr_to_long.o: queue_char/main_queue_ptr_to_long.c
main_queue_ptr_to_float.o: queue_char/main_queue_ptr_to_float.c
main_queue_prt_to_double.o: queue_char/main_queue_ptr_to_double.c


main_stack_char.o: stack_char/main_stack_char.c
main_stack_short.o: stack_char/main_stack_short.c
main_stack_int.o: stack_char/main_stack_int.c
main_stack_long.o: stack_char/main_stack_long.c
main_stack_float.o: stack_char/main_stack_float.c
main_stack_double.o: stack_char/main_stack_double.c

main_stack_ptr_to_char.o: stack_char/main_stack_ptr_to_char.c
main_stack_ptr_to_short.o: stack_char/main_stack_ptr_to_short.c
main_stack_ptr_to_int.o: stack_char/main_stack_ptr_to_int.c
main_stack_ptr_to_long.o: stack_char/main_stack_ptr_to_long.c
main_stack_ptr_to_float.o: stack_char/main_stack_ptr_to_float.c
main_stack_prt_to_double.o: stack_char/main_stack_ptr_to_double.c

list_char.o: list_char/list_char.c
list_short.o: list_short/list_short.c
list_int.o: list_int/list_int.c
list_long.o: list_long/list_long.c
list_float.o: list_float/list_float.c
list_double.o: list_double/list_double.c

list_ptr_to_char.o: list_ptr_to_char/list_ptr_to_char.c
list_ptr_to_short.o: list_ptr_to_short/list_ptr_to_short.c
list_ptr_to_int.o: list_ptr_to_int/list_ptr_to_int.c
list_ptr_to_long.o: list_ptr_to_long/list_ptr_to_long.c
list_ptr_to_float.o: list_ptr_to_float/list_ptr_to_float.c
list_prt_to_double.o: list_ptr_to_double/list_ptr_to_double.c


dep: 
	
all: $(OBJQ) $(OBJS)
	$(CC) -o main_queue $(OBJQ)
	$(CC) -o main_stack $(OBJS)

.PHONY: clean
clean: 
	-rm -rf *.o

sinclude .dep
