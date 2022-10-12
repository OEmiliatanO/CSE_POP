#define define_list(__TYPE__) \
typedef struct node_##__TYPE__\
{\
	__TYPE__ val;\
	struct node_##__TYPE__ * prev, *nex;\
}node_##__TYPE__;\
\
typedef struct list_##__TYPE__\
{\
	size_t size;\
	node_##__TYPE__ * head, *tail;\
}list_##__TYPE__;\
\
list_##__TYPE__ * new_list_##__TYPE__();\
static void _insert(node_##__TYPE__ *, __TYPE__);\
static void _remove(node_##__TYPE__ *);\
void list_##__TYPE__##_insert(list_##__TYPE__ *, size_t, __TYPE__);\
void list_##__TYPE__##_remove(list_##__TYPE__ *, size_t);\
void list_##__TYPE__##_push_front(list_##__TYPE__ *, __TYPE__);\
void list_##__TYPE__##_push_back(list_##__TYPE__ *, __TYPE__);\
void list_##__TYPE__##_pop_front(list_##__TYPE__ *);\
void list_##__TYPE__##_pop_back(list_##__TYPE__ *);
