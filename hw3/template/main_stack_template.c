#include <stdio.h>
#include "../src/mm.h"
#include "../src/list_<type>.h"
#include "../src/stack_<type>.h"

int main()
{
	stack_<type>* st;
	st = new_stack_<type>();
	int op;
	while(1)
	{
		printf("\n1:push, 2:pop, 3:peek, 4:exit.\nwhat's ur operation: ");
		scanf("%d%*c", &op);
		if (op == 1)
		{
			<type> x;
			printf("value to be put: ");
			scanf("%c%*c", &x);
			stack_<type>_push(q, x);
		}
		else if (op == 2)
		{
			if (st->size)
			{
				printf("value returned: %c\n", stack_<type>_top(q));
				stack_<type>_pop(q);
			}
			else
				printf("empty\n");
		}
		else if (op == 3)
		{
			if (st->size)
				printf("value returned: %c\n", stack_<type>_top(q));
			else
				printf("empty\n");
		}
		else if (op == 4)
			break;
	}

	return 0;
}
