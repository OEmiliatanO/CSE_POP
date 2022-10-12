#include <stdio.h>
#include "../src/mm.h"
#include "../src/list_ptr_to_char.h"
#include "../src/stack_ptr_to_char.h"

int main()
{
	stack_ptr_to_char* st;
	st = new_stack_ptr_to_char();
	int op;
	while(1)
	{
		printf("\n1:push, 2:pop, 3:peek, 4:exit.\nwhat's ur operation: ");
		scanf("%d%*c", &op);
		if (op == 1)
		{
			char v;
			char* x = (char *)mymalloc(sizeof(char));
			printf("value to be put: ");
			scanf("%c%*c", &v);
			*x = v;
			stack_ptr_to_char_push(st, x);
		}
		else if (op == 2)
		{
			if (st->size)
			{
				printf("value returned: %c\n", *stack_ptr_to_char_top(st));
				myfree(stack_ptr_to_char_top(st));
				stack_ptr_to_char_pop(st);
			}
			else
				printf("empty\n");
		}
		else if (op == 3)
		{
			if (st->size)
				printf("value returned: %c\n", *stack_ptr_to_char_top(st));
			else
				printf("empty\n");
		}
		else if (op == 4)
			break;
	}

	return 0;
}
