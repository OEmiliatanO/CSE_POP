#include <stdio.h>
#include "src/mm.h"
#include "src/queue_char.h"

int main()
{
	queue_char* q;
	q = new_queue_char();
	char x;
	char c;
	while(~scanf("%c%c", &x, &c)) { queue_char_push(q, x); if (c == '\n') break; }
	while(q->size) { printf("%c ", queue_char_top(q)); queue_char_pop(q); }
	puts("");

	return 0;
}
