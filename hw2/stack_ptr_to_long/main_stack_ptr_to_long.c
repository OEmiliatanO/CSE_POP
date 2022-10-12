#include <stdio.h>
#include "../src/mm.h"
#include "../src/list_ptr_to_long.h"
#include "../src/stack_ptr_to_long.h"

int main()
{
	stack_ptr_to_long* st;
	st = new_stack_ptr_to_long();
	int op;
	while(1)
	{
		printf("\n1:push, 2:pop, 3:peek, 4:exit.\nwhat's ur operation: ");
		scanf("%d%*c", &op);
		if (op == 1)
		{
			long v;
			long* x = (long *)mymalloc(sizeof(long));
			printf("value to be put: ");
			scanf("%ld%*c", &v);
			*x = v;
			stack_ptr_to_long_push(st, x);
		}
		else if (op == 2)
		{
			if (st->size)
			{
				printf("value returned: %ld\n", *stack_ptr_to_long_top(st));
				myfree(stack_ptr_to_long_top(st));
				stack_ptr_to_long_pop(st);
			}
			else
				printf("empty\n");
		}
		else if (op == 3)
		{
			if (st->size)
				printf("value returned: %ld\n", *stack_ptr_to_long_top(st));
			else
				printf("empty\n");
		}
		else if (op == 4)
			break;
	}

	return 0;
}
