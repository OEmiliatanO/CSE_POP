#include <stdio.h>
#include "src/mm.h"
#include "src/list.h"
#include "src/queue.h"

int main()
{
	queue* q;
	qinit(&q);
	int x;
	while(~scanf("%d", &x)) qpush(q, x);
	while(q->size) { printf("%d ", qtop(q)); qpop(q); }
	puts("");

	return 0;
}
