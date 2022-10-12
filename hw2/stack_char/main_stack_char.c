#include <stdio.h>
#include "../src/mm.h"
#include "../src/stack_char.h"

int main()
{
	stack_char* st;
	st = new_stack_char();
	int op;
	while(1)
	{
		printf("\n1:push, 2:pop, 3:peek, 4:exit.\nwhat's ur operation: ");
		scanf("%d%*c", &op);
		if (op == 1)
		{
			char x;
			printf("value to be put: ");
			scanf("%c%*c", &x);
			stack_char_push(st, x);
		}
		else if (op == 2)
		{
			if (st->size)
			{
				printf("value returned: %c\n", stack_char_top(st));
				stack_char_pop(st);
			}
			else
				printf("empty\n");
		}
		else if (op == 3)
		{
			if (st->size)
				printf("value returned: %c\n", stack_char_top(st));
			else
				printf("empty\n");
		}
		else if (op == 4)
			break;
	}

	return 0;
}
