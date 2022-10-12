#include <stdio.h>
#include "../src/mm.h"
#include "../src/list_ptr_to_double.h"
#include "../src/stack_ptr_to_double.h"

int main()
{
	stack_ptr_to_double* st;
	st = new_stack_ptr_to_double();
	int op;
	while(1)
	{
		printf("\n1:push, 2:pop, 3:peek, 4:exit.\nwhat's ur operation: ");
		scanf("%d%*c", &op);
		if (op == 1)
		{
			double v;
			double* x = (double *)mymalloc(sizeof(double));
			printf("value to be put: ");
			scanf("%lf%*c", &v);
			*x = v;
			stack_ptr_to_double_push(st, x);
		}
		else if (op == 2)
		{
			if (st->size)
			{
				printf("value returned: %lf\n", *stack_ptr_to_double_top(st));
				myfree(stack_ptr_to_double_top(st));
				stack_ptr_to_double_pop(st);
			}
			else
				printf("empty\n");
		}
		else if (op == 3)
		{
			if (st->size)
				printf("value returned: %lf\n", *stack_ptr_to_double_top(st));
			else
				printf("empty\n");
		}
		else if (op == 4)
			break;
	}

	return 0;
}
