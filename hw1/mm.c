#include "./src/mm.h"
#include <stdlib.h>

void *mymalloc(size_t size) { return malloc(size); }
void myfree(void* p) { free(p); }
void *myrealloc(void* p, size_t size) { return realloc(p, size); }
void *mycalloc(size_t nmemb, size_t size) { return calloc(nmemb, size); }
