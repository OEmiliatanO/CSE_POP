#ifndef __MM_H__
#define __MM_H__

#include <stddef.h>

void *mymalloc(size_t);
void myfree(void*);
void *myrealloc(void*, size_t);
void *mycalloc(size_t, size_t);

#endif
