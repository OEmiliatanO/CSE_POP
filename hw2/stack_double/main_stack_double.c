#include <stdio.h>
#include "../src/mm.h"
#include "../src/list_double.h"
#include "../src/stack_double.h"

int main()
{
	stack_double* st;
	st = new_stack_double();
	int op;
	while(1)
	{
		printf("\n1:push, 2:pop, 3:peek, 4:exit.\nwhat's ur operation: ");
		scanf("%d%*c", &op);
		if (op == 1)
		{
			double x;
			printf("value to be put: ");
			scanf("%lf%*c", &x);
			stack_double_push(st, x);
		}
		else if (op == 2)
		{
			if (st->size)
			{
				printf("value returned: %lf\n", stack_double_top(st));
				stack_double_pop(st);
			}
			else
				printf("empty\n");
		}
		else if (op == 3)
		{
			if (st->size)
				printf("value returned: %lf\n", stack_double_top(st));
			else
				printf("empty\n");
		}
		else if (op == 4)
			break;
	}

	return 0;
}
