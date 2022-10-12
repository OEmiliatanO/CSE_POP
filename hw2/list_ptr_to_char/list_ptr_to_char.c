#include "../src/list_ptr_to_char.h"
#include "../src/mm.h"
typedef char* ptr_to_char;
list_ptr_to_char * new_list_ptr_to_char()
{
	list_ptr_to_char * l = (list_ptr_to_char *) mymalloc(sizeof(list_ptr_to_char));
	l->size = 0;
	l->head = l->tail = NULL;
	return l;
}

static void _insert(node_ptr_to_char * now, ptr_to_char val)
{
	if (!now) return;
	if (now->nex == NULL)
	{
		now->nex = (node_ptr_to_char *)mymalloc(sizeof(list_ptr_to_char));
		now->nex->val = val;
		now->nex->nex = NULL;
		now->nex->prev = now;
	}
	else
	{
		node_ptr_to_char * tmp = (node_ptr_to_char *)mymalloc(sizeof(list_ptr_to_char));
		tmp->val = val;
		tmp->nex = now->nex;
		tmp->prev = now;
		now->nex = tmp;
		tmp->nex->prev = tmp;
	}
}

static void _remove(node_ptr_to_char * now)
{
	if (!now) return;
	if (now->nex == NULL && now->prev)
		now->prev->nex = NULL;
	else if (now->prev == NULL && now->nex)
		now->nex->prev = NULL;
	else if (now->prev && now->nex)
	{
		now->nex->prev = now->prev;
		now->prev->nex = now->nex;
	}
	myfree(now);
}

void list_ptr_to_char_insert(list_ptr_to_char * li, size_t pos, ptr_to_char val)
{
	if (!li) return;
	if (li->size == 0)
	{
		++li->size;
		li->head = (node_ptr_to_char *)mymalloc(sizeof(node_ptr_to_char));
		li->head->val = val;
		li->head->prev = NULL;
		li->head->nex = (node_ptr_to_char *)mymalloc(sizeof(node_ptr_to_char));
		li->tail = li->head->nex;
		li->tail->val = 0;
		li->tail->prev = li->head;
		li->tail->nex = NULL;
		return;
	}
	if (pos >= li->size) return;
	if (pos == li->size - 1)
	{
		++li->size;
		_insert(li->tail->prev, val);
		return;
	}
	
	++li->size;
	node_ptr_to_char * p = li->head;
	for(size_t i = 0; i < pos; ++i) p = p->nex;
	_insert(p, val);
}

void list_ptr_to_char_remove(list_ptr_to_char * li, size_t pos)
{
	if (!li) return;
	if (pos >= li->size) return;
	if (pos == 0)
	{
		--li->size;
		li->head = li->head->nex;
		_remove(li->head->prev);
		return;
	}
	if (pos == li->size - 1)
	{
		--li->size;
		_remove(li->tail->prev);
		return;
	}
	
	--li->size;
	node_ptr_to_char * p = li->head;
	for(size_t i = 0; i < pos; ++i) p = p->nex;
	_remove(p);
}

void list_ptr_to_char_push_front(list_ptr_to_char * li, ptr_to_char val)
{
	if (!li) return;
	if (li->size == 0) { list_ptr_to_char_insert(li, 0, val); return; }
	node_ptr_to_char * tmp = (node_ptr_to_char *)mymalloc(sizeof(node_ptr_to_char));
	tmp->nex = li->head;
	tmp->prev = NULL;
	tmp->val = val;
	li->head->prev = tmp;
	li->head = tmp;
	++li->size;
}

void list_ptr_to_char_push_back(list_ptr_to_char * li, ptr_to_char val)
{
	if (!li) return;
	if (li->size == 0) { list_ptr_to_char_insert(li, 0, val); return; }
	list_ptr_to_char_insert(li, li->size - 1, val);
}

void list_ptr_to_char_pop_front(list_ptr_to_char * li)
{
	if (!li) return;
	if (li->size == 0) return;
	list_ptr_to_char_remove(li, 0);
}

void list_ptr_to_char_pop_back(list_ptr_to_char * li)
{
	if (!li) return;
	if (li->size == 0) return;
	list_ptr_to_char_remove(li, li->size - 1);
}
