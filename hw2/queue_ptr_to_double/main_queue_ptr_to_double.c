#include <stdio.h>
#include "../src/mm.h"
#include "../src/list_ptr_to_double.h"
#include "../src/queue_ptr_to_double.h"

int main()
{
	queue_ptr_to_double* q;
	q = new_queue_ptr_to_double();
	int op;
	while(1)
	{
		printf("\n1:enqueue, 2:dequeue, 3:peek, 4:exit.\nwhat's ur operation: ");
		scanf("%d%*c", &op);
		if (op == 1)
		{
			double v;
			double* x = (double *)mymalloc(sizeof(double));
			printf("value to be put: ");
			scanf("%lf%*c", &v);
			*x = v;
			queue_ptr_to_double_push(q, x);
		}
		else if (op == 2)
		{
			if (q->size)
			{
				printf("value returned: %lf\n", *queue_ptr_to_double_top(q));
				myfree(queue_ptr_to_double_top(q));
				queue_ptr_to_double_pop(q);
			}
			else
				printf("empty\n");
		}
		else if (op == 3)
		{
			if (q->size)
				printf("value returned: %lf\n", *queue_ptr_to_double_top(q));
			else
				printf("empty\n");
		}
		else if (op == 4)
			break;
	}

	return 0;
}
