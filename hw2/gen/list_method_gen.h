#define define_list_method(__TYPE__)\
list_##__TYPE__ * new_list_##__TYPE__()\
{\
	list_##__TYPE__ * l = (list_##__TYPE__ *) mymalloc(sizeof(list_##__TYPE__));\
	l->size = 0;\
	l->head = l->tail = NULL;\
	return l;\
}\
\
void _insert(node_##__TYPE__ * now, __TYPE__ val)\
{\
	if (!now) return;\
	if (now->nex == NULL)\
	{\
		now->nex = (node_##__TYPE__ *)mymalloc(sizeof(list_##__TYPE__));\
		now->nex->val = val;\
		now->nex->nex = NULL;\
		now->nex->prev = now;\
	}\
	else\
	{\
		node_##__TYPE__ * tmp = (node_##__TYPE__ *)mymalloc(sizeof(list_##__TYPE__));\
		tmp->val = val;\
		tmp->nex = now->nex;\
		tmp->prev = now;\
		now->nex = tmp;\
		tmp->nex->prev = tmp;\
	}\
}\
\
void _remove(node_##__TYPE__ * now)\
{\
	if (!now) return;\
	if (now->nex == NULL && now->prev)\
		now->prev->nex = NULL;\
	else if (now->prev == NULL && now->nex)\
		now->nex->prev = NULL;\
	else if (now->prev && now->nex)\
	{\
		now->nex->prev = now->prev;\
		now->prev->nex = now->nex;\
	}\
	myfree(now);\
}\
\
void list_##__TYPE__##_insert(list_##__TYPE__ * li, size_t pos, __TYPE__ val)\
{\
	if (!li) return;\
	if (li->size == 0)\
	{\
		++li->size;\
		li->head = (node_##__TYPE__ *)mymalloc(sizeof(node_##__TYPE__));\
		li->head->val = val;\
		li->head->prev = NULL;\
		li->head->nex = (node_##__TYPE__ *)mymalloc(sizeof(node_##__TYPE__));\
		li->tail = li->head->nex;\
		li->tail->val = 0;\
		li->tail->prev = li->head;\
		li->tail->nex = NULL;\
		return;\
	}\
	if (pos >= li->size) return;\
	if (pos == li->size - 1)\
	{\
		++li->size;\
		_insert(li->tail->prev, val);\
		return;\
	}\
	\
	++li->size;\
	node_##__TYPE__ * p = li->head;\
	for(size_t i = 0; i < pos; ++i) p = p->nex;\
	_insert(p, val);\
}\
\
void list_##__TYPE__##_remove(list_##__TYPE__ * li, size_t pos)\
{\
	if (!li) return;\
	if (pos >= li->size) return;\
	if (pos == 0)\
	{\
		--li->size;\
		li->head = li->head->nex;\
		_remove(li->head->prev);\
		return;\
	}\
	if (pos == li->size - 1)\
	{\
		--li->size;\
		_remove(li->tail->prev);\
		return;\
	}\
	\
	--li->size;\
	node_##__TYPE__ * p = li->head;\
	for(size_t i = 0; i < pos; ++i) p = p->nex;\
	_remove(p);\
}\
\
void list_##__TYPE__##_push_front(list_##__TYPE__ * li, __TYPE__ val)\
{\
	if (!li) return;\
	if (li->size == 0) { list_##__TYPE__##_insert(li, 0, val); return; }\
	node_##__TYPE__ * tmp = (node_##__TYPE__ *)mymalloc(sizeof(node_##__TYPE__));\
	tmp->nex = li->head;\
	tmp->prev = NULL;\
	tmp->val = val;\
	li->head->prev = tmp;\
	li->head = tmp;\
	++li->size;\
}\
\
void list_##__TYPE__##_push_back(list_##__TYPE__ * li, __TYPE__ val)\
{\
	if (!li) return;\
	if (li->size == 0) { list_##__TYPE__##_insert(li, 0, val); return; }\
	list_##__TYPE__##_insert(li, li->size - 1, val);\
}\
\
void list_##__TYPE__##_pop_front(list_##__TYPE__ * li)\
{\
	if (!li) return;\
	if (li->size == 0) return;\
	list_##__TYPE__##_remove(li, 0);\
}\
\
void list_##__TYPE__##_pop_back(list_##__TYPE__ * li)\
{\
	if (!li) return;\
	if (li->size == 0) return;\
	list_##__TYPE__##_remove(li, li->size - 1);\
}
