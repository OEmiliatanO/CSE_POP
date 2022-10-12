#include <stdio.h>
#include "../src/mm.h"
#include "../src/list_int.h"
#include "../src/stack_int.h"

int main()
{
	stack_int* st;
	st = new_stack_int();
	int op;
	while(1)
	{
		printf("\n1:push, 2:pop, 3:peek, 4:exit.\nwhat's ur operation: ");
		scanf("%d%*c", &op);
		if (op == 1)
		{
			int x;
			printf("value to be put: ");
			scanf("%d%*c", &x);
			stack_int_push(st, x);
		}
		else if (op == 2)
		{
			if (st->size)
			{
				printf("value returned: %d\n", stack_int_top(st));
				stack_int_pop(st);
			}
			else
				printf("empty\n");
		}
		else if (op == 3)
		{
			if (st->size)
				printf("value returned: %d\n", stack_int_top(st));
			else
				printf("empty\n");
		}
		else if (op == 4)
			break;
	}

	return 0;
}
