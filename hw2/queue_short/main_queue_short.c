#include <stdio.h>
#include "../src/mm.h"
#include "../src/list_short.h"
#include "../src/queue_short.h"

int main()
{
	queue_short* q;
	q = new_queue_short();
	int op;
	while(1)
	{
		printf("\n1:enqueue, 2:dequeue, 3:peek, 4:exit.\nwhat's ur operation: ");
		scanf("%d%*c", &op);
		if (op == 1)
		{
			short x;
			printf("value to be put: ");
			scanf("%hd%*c", &x);
			queue_short_push(q, x);
		}
		else if (op == 2)
		{
			if (q->size)
			{
				printf("value returned: %hd\n", queue_short_top(q));
				queue_short_pop(q);
			}
			else
				printf("empty\n");
		}
		else if (op == 3)
		{
			if (q->size)
				printf("value returned: %hd\n", queue_short_top(q));
			else
				printf("empty\n");
		}
		else if (op == 4)
			break;
	}

	return 0;
}
