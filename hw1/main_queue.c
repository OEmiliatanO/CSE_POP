#include <stdio.h>
#include "src/mm.h"
#include "src/list.h"
#include "src/queue.h"

int main()
{
	queue* q;
	q = new_queue();
	int x;
	char c;
	while(~scanf("%d%c", &x, &c)) { qpush(q, x); if (c == '\n') break; }
	while(q->size) { printf("%d ", qtop(q)); qpop(q); }
	puts("");

	return 0;
}
