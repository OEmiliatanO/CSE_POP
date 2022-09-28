#include <stdio.h>
#include "src/mm.h"
#include "src/list.h"
#include "src/stack.h"

int main()
{
	stack* s;
	s = new_stack();
	int x;
	char c;
	while(~scanf("%d%c", &x, &c)) { spush(s, x); if (c == '\n') break; }
	while(s->size) { printf("%d ", stop(s)); spop(s); }
	puts("");

	return 0;
}
