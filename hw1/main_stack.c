#include <stdio.h>
#include "src/mm.h"
#include "src/list.h"
#include "src/stack.h"

int main()
{
	stack* st;
	st = new_stack();
	int op;
	while(1)
	{
		printf("1:push, 2:pop, 3:peek 4:exit\nwhat's ur operation: ");
		scanf("%d", &op);
		if (op == 1)
		{
			int x;
			printf("value to push: ");
			scanf("%d", &x);
			spush(st, x);
		}
		else if (op == 2)
		{
			if (st->size)
			{
				printf("value returned: %d\n", stop(st));
				spop(st);
			}
			else
				printf("empty\n");
		}
		else if (op == 3)
		{
			if (st->size)
				printf("value returned: %d\n", stop(st));
			else
				printf("empty\n");
		}
		else if (op == 4)
			break;
	}
	puts("");

	return 0;
}
