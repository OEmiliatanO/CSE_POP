#define define_queue(__TYPE__)\
typedef struct queue_##__TYPE__\
{\
	size_t size;\
	list_##__TYPE__ * List;\
}queue_##__TYPE__;\
\
queue_##__TYPE__ * new_queue_##__TYPE__();\
void queue_##__TYPE__##_push(queue_##__TYPE__ *, __TYPE__);\
__TYPE__ queue_##__TYPE__##_top(queue_##__TYPE__ *);\
void queue_##__TYPE__##_pop(queue_##__TYPE__ *);
