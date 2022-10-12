#include <stdio.h>
#include "../src/mm.h"
#include "../src/list_ptr_to_short.h"
#include "../src/stack_ptr_to_short.h"

int main()
{
	stack_ptr_to_short* st;
	st = new_stack_ptr_to_short();
	int op;
	while(1)
	{
		printf("\n1:push, 2:pop, 3:peek, 4:exit.\nwhat's ur operation: ");
		scanf("%d%*c", &op);
		if (op == 1)
		{
			short v;
			short* x = (short *)mymalloc(sizeof(short));
			printf("value to be put: ");
			scanf("%hd%*c", &v);
			*x = v;
			stack_ptr_to_short_push(st, x);
		}
		else if (op == 2)
		{
			if (st->size)
			{
				printf("value returned: %hd\n", *stack_ptr_to_short_top(st));
				myfree(stack_ptr_to_short_top(st));
				stack_ptr_to_short_pop(st);
			}
			else
				printf("empty\n");
		}
		else if (op == 3)
		{
			if (st->size)
				printf("value returned: %hd\n", *stack_ptr_to_short_top(st));
			else
				printf("empty\n");
		}
		else if (op == 4)
			break;
	}

	return 0;
}
