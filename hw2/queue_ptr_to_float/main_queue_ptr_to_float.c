#include <stdio.h>
#include "../src/mm.h"
#include "../src/list_ptr_to_float.h"
#include "../src/queue_ptr_to_float.h"

int main()
{
	queue_ptr_to_float* q;
	q = new_queue_ptr_to_float();
	int op;
	while(1)
	{
		printf("\n1:enqueue, 2:dequeue, 3:peek, 4:exit.\nwhat's ur operation: ");
		scanf("%d%*c", &op);
		if (op == 1)
		{
			float v;
			float* x = (float *)mymalloc(sizeof(float));
			printf("value to be put: ");
			scanf("%f%*c", &v);
			*x = v;
			queue_ptr_to_float_push(q, x);
		}
		else if (op == 2)
		{
			if (q->size)
			{
				printf("value returned: %f\n", *queue_ptr_to_float_top(q));
				myfree(queue_ptr_to_float_top(q));
				queue_ptr_to_float_pop(q);
			}
			else
				printf("empty\n");
		}
		else if (op == 3)
		{
			if (q->size)
				printf("value returned: %f\n", *queue_ptr_to_float_top(q));
			else
				printf("empty\n");
		}
		else if (op == 4)
			break;
	}

	return 0;
}
