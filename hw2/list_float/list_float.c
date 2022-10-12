#include "../src/list_float.h"
#include "../src/mm.h"
list_float * new_list_float()
{
	list_float * l = (list_float *) mymalloc(sizeof(list_float));
	l->size = 0;
	l->head = l->tail = NULL;
	return l;
}

static void _insert(node_float * now, float val)
{
	if (!now) return;
	if (now->nex == NULL)
	{
		now->nex = (node_float *)mymalloc(sizeof(list_float));
		now->nex->val = val;
		now->nex->nex = NULL;
		now->nex->prev = now;
	}
	else
	{
		node_float * tmp = (node_float *)mymalloc(sizeof(list_float));
		tmp->val = val;
		tmp->nex = now->nex;
		tmp->prev = now;
		now->nex = tmp;
		tmp->nex->prev = tmp;
	}
}

static void _remove(node_float * now)
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

void list_float_insert(list_float * li, size_t pos, float val)
{
	if (!li) return;
	if (li->size == 0)
	{
		++li->size;
		li->head = (node_float *)mymalloc(sizeof(node_float));
		li->head->val = val;
		li->head->prev = NULL;
		li->head->nex = (node_float *)mymalloc(sizeof(node_float));
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
	node_float * p = li->head;
	for(size_t i = 0; i < pos; ++i) p = p->nex;
	_insert(p, val);
}

void list_float_remove(list_float * li, size_t pos)
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
	node_float * p = li->head;
	for(size_t i = 0; i < pos; ++i) p = p->nex;
	_remove(p);
}

void list_float_push_front(list_float * li, float val)
{
	if (!li) return;
	if (li->size == 0) { list_float_insert(li, 0, val); return; }
	node_float * tmp = (node_float *)mymalloc(sizeof(node_float));
	tmp->nex = li->head;
	tmp->prev = NULL;
	tmp->val = val;
	li->head->prev = tmp;
	li->head = tmp;
	++li->size;
}

void list_float_push_back(list_float * li, float val)
{
	if (!li) return;
	if (li->size == 0) { list_float_insert(li, 0, val); return; }
	list_float_insert(li, li->size - 1, val);
}

void list_float_pop_front(list_float * li)
{
	if (!li) return;
	if (li->size == 0) return;
	list_float_remove(li, 0);
}

void list_float_pop_back(list_float * li)
{
	if (!li) return;
	if (li->size == 0) return;
	list_float_remove(li, li->size - 1);
}
