#define define_queue_method(__TYPE__)\
queue_##__TYPE__ * new_queue_##__TYPE__()\
{\
	queue_##__TYPE__* q = (queue_##__TYPE__ *)mymalloc(sizeof(queue_##__TYPE__));\
	q->size = 0;\
	q->List = new_list_##__TYPE__();\
	return q;\
}\
\
void queue_##__TYPE__##_push(queue_##__TYPE__ * q, __TYPE__ val)\
{\
	if (!q) return;\
	list_##__TYPE__##_push_front(q->List, val);\
	++q->size;\
}\
\
void queue_##__TYPE__##_pop(queue_##__TYPE__ * q)\
{\
	if (!q) return;\
	if (q->size == 0) return;\
	list_##__TYPE__##_pop_back(q->List);\
	--q->size;\
}\
\
__TYPE__ queue_##__TYPE__##_top(queue_##__TYPE__ * q)\
{\
	if (!q) return 0;\
	if (q->size == 0) return 0;\
	return (q->List->tail->prev)->val;\
}
