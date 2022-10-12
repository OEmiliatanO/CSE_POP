#include <stdio.h>
#include "src/mm.h"
#include "src/list_int.h"
#include "src/stack_int.h"

int main()
{
	stack_int* s;
	s = new_stack_int();
	int x;
	char c;
	while(~scanf("%d%c", &x, &c)) { stack_int_push(s, x); if (c == '\n') break; }
	while(s->size) { printf("%d ", stack_int_top(s)); stack_int_pop(s); }
	/*
	while (~scanf("%c%*c", &c))
	{
		if (c == 'h')
		{
			scanf("%d%*c", &x);
			spush(s, x);
		}
		else if (c == 'p')
		{
			printf("%d\n", stop(s));
			spop(s);
		}
	}
	*/
	puts("");

	return 0;
}
