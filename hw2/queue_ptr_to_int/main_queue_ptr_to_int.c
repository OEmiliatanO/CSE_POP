#include <stdio.h>
#include "../src/mm.h"
#include "../src/list_ptr_to_int.h"
#include "../src/queue_ptr_to_int.h"

int main()
{
	queue_ptr_to_int* q;
	q = new_queue_ptr_to_int();
	int op;
	while(1)
	{
		printf("\n1:enqueue, 2:dequeue, 3:peek, 4:exit.\nwhat's ur operation: ");
		scanf("%d%*c", &op);
		if (op == 1)
		{
			int v;
			int* x = mymalloc(sizeof(int));
			printf("value to be put: ");
			scanf("%d%*c", &v);
			*x = v;
			queue_ptr_to_int_push(q, x);
		}
		else if (op == 2)
		{
			if (q->size)
			{
				printf("value returned: %d\n", *queue_ptr_to_int_top(q));
				myfree(queue_ptr_to_int_top(q));
				queue_ptr_to_int_pop(q);
			}
			else
				printf("empty\n");
		}
		else if (op == 3)
		{
			if (q->size)
				printf("value returned: %d\n", *queue_ptr_to_int_top(q));
			else
				printf("empty\n");
		}
		else if (op == 4)
			break;
	}

	return 0;
}
