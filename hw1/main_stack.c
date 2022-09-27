#include <stdio.h>
#include "src/mm.h"
#include "src/list.h"
#include "src/stack.h"

int main()
{
	
	stack* s;
	sinit(&s);
	int x;
	while(~scanf("%d", &x)) spush(s, x);
	while(s->size) { printf("%d ", stop(s)); spop(s); }
	puts("");

	return 0;
}
