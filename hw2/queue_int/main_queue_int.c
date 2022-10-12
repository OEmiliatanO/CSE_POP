#include <stdio.h>
#include "../src/mm.h"
#include "../src/list_int.h"
#include "../src/queue_int.h"

int main()
{
	queue_int* q;
	q = new_queue_int();
	int op;
	while(1)
	{
		printf("\n1:enqueue, 2:dequeue, 3:peek, 4:exit.\nwhat's ur operation: ");
		scanf("%d%*c", &op);
		if (op == 1)
		{
			int x;
			printf("value to be put: ");
			scanf("%d%*c", &x);
			queue_int_push(q, x);
		}
		else if (op == 2)
		{
			if (q->size)
			{
				printf("value returned: %d\n", queue_int_top(q));
				queue_int_pop(q);
			}
			else
				printf("empty\n");
		}
		else if (op == 3)
		{
			if (q->size)
				printf("value returned: %d\n", queue_int_top(q));
			else
				printf("empty\n");
		}
		else if (op == 4)
			break;
	}

	return 0;
}
