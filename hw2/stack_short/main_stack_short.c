#include <stdio.h>
#include "../src/mm.h"
#include "../src/list_short.h"
#include "../src/stack_short.h"

int main()
{
	stack_short* st;
	st = new_stack_short();
	int op;
	while(1)
	{
		printf("\n1:push, 2:pop, 3:peek, 4:exit.\nwhat's ur operation: ");
		scanf("%d%*c", &op);
		if (op == 1)
		{
			short x;
			printf("value to be put: ");
			scanf("%hd%*c", &x);
			stack_short_push(st, x);
		}
		else if (op == 2)
		{
			if (st->size)
			{
				printf("value returned: %hd\n", stack_short_top(st));
				stack_short_pop(st);
			}
			else
				printf("empty\n");
		}
		else if (op == 3)
		{
			if (st->size)
				printf("value returned: %hd\n", stack_short_top(st));
			else
				printf("empty\n");
		}
		else if (op == 4)
			break;
	}

	return 0;
}
