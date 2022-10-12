#include <stdio.h>
#include "../src/mm.h"
#include "../src/list_ptr_to_float.h"
#include "../src/stack_ptr_to_float.h"

int main()
{
	stack_ptr_to_float* st;
	st = new_stack_ptr_to_float();
	int op;
	while(1)
	{
		printf("\n1:push, 2:pop, 3:peek, 4:exit.\nwhat's ur operation: ");
		scanf("%d%*c", &op);
		if (op == 1)
		{
			float v;
			float* x = (float *)mymalloc(sizeof(float));
			printf("value to be put: ");
			scanf("%f%*c", &v);
			*x = v;
			stack_ptr_to_float_push(st, x);
		}
		else if (op == 2)
		{
			if (st->size)
			{
				printf("value returned: %f\n", *stack_ptr_to_float_top(st));
				myfree(stack_ptr_to_float_top(st));
				stack_ptr_to_float_pop(st);
			}
			else
				printf("empty\n");
		}
		else if (op == 3)
		{
			if (st->size)
				printf("value returned: %f\n", *stack_ptr_to_float_top(st));
			else
				printf("empty\n");
		}
		else if (op == 4)
			break;
	}

	return 0;
}
