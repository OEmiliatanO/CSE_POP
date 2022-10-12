#include <stdio.h>
#include "src/mm.h"
#include "src/list.h"
#include "src/queue.h"

int main()
{
	queue* q;
	q = new_queue();
	int op;
	while(1)
	{
		printf("\n1:enqueue, 2:dequeue, 3:peek 4:exit\nwhat's ur operation: ");
		scanf("%d", &op);
		if (op == 1)
		{
			int x;
			printf("value to enqueue: ");
			scanf("%d", &x);
			qpush(q, x);
		}
		else if (op == 2)
		{
			if (q->size)
			{
				printf("value returned: %d\n", qtop(q));
				qpop(q);
			}
			else
				printf("empty\n");
		}
		else if (op == 3)
		{
			if (q->size)
				printf("value returned: %d\n", qtop(q));
			else
				printf("empty\n");
		}
		else if (op == 4)
			break;
	}
	puts("");

	return 0;
}
