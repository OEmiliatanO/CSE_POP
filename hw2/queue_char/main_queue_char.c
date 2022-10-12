#include <stdio.h>
#include "../src/mm.h"
#include "../src/list_char.h"
#include "../src/queue_char.h"

int main()
{
	queue_char* q;
	q = new_queue_char();
	int op;
	while(1)
	{
		printf("\n1:enqueue, 2:dequeue, 3:peek, 4:exit.\nwhat's ur operation: ");
		scanf("%d%*c", &op);
		if (op == 1)
		{
			char x;
			printf("value to be put: ");
			scanf("%c%*c", &x);
			queue_char_push(q, x);
		}
		else if (op == 2)
		{
			if (q->size)
			{
				printf("value returned: %c\n", queue_char_top(q));
				queue_char_pop(q);
			}
			else
				printf("empty\n");
		}
		else if (op == 3)
		{
			if (q->size)
				printf("value returned: %c\n", queue_char_top(q));
			else
				printf("empty\n");
		}
		else if (op == 4)
			break;
	}

	return 0;
}
