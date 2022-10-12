#include <stdio.h>
#include "../src/mm.h"
#include "../src/list_<type>.h"
#include "../src/queue_<type>.h"

int main()
{
	queue_<type>* q;
	q = new_queue_<type>();
	int op;
	while(1)
	{
		printf("\n1:enqueue, 2:dequeue, 3:peek, 4:exit.\nwhat's ur operation: ");
		scanf("%d%*c", &op);
		if (op == 1)
		{
			<type> x;
			printf("value to be put: ");
			scanf("%c%*c", &x);
			queue_<type>_push(q, x);
		}
		else if (op == 2)
		{
			if (q->size)
			{
				printf("value returned: %c\n", queue_<type>_top(q));
				queue_<type>_pop(q);
			}
			else
				printf("empty\n");
		}
		else if (op == 3)
		{
			if (q->size)
				printf("value returned: %c\n", queue_<type>_top(q));
			else
				printf("empty\n");
		}
		else if (op == 4)
			break;
	}

	return 0;
}
