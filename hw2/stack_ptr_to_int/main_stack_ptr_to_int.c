#include <stdio.h>
#include "../src/mm.h"
#include "../src/list_ptr_to_int.h"
#include "../src/stack_ptr_to_int.h"

int main()
{
	stack_ptr_to_int* st;
	st = new_stack_ptr_to_int();
	int op;
	while(1)
	{
		printf("\n1:push, 2:pop, 3:peek, 4:exit.\nwhat's ur operation: ");
		scanf("%d%*c", &op);
		if (op == 1)
		{
			int v;
			int* x = (int *)mymalloc(sizeof(int));
			printf("value to be put: ");
			scanf("%d%*c", &v);
			*x = v;
			stack_ptr_to_int_push(st, x);
		}
		else if (op == 2)
		{
			if (st->size)
			{
				printf("value returned: %d\n", *stack_ptr_to_int_top(st));
				myfree(stack_ptr_to_int_top(st));
				stack_ptr_to_int_pop(st);
			}
			else
				printf("empty\n");
		}
		else if (op == 3)
		{
			if (st->size)
				printf("value returned: %d\n", *stack_ptr_to_int_top(st));
			else
				printf("empty\n");
		}
		else if (op == 4)
			break;
	}

	return 0;
}
