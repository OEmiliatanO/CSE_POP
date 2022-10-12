#include "../src/list_long.h"
#include "../src/mm.h"
list_long * new_list_long()
{
	list_long * l = (list_long *) mymalloc(sizeof(list_long));
	l->size = 0;
	l->head = l->tail = NULL;
	return l;
}

static void _insert(node_long * now, long val)
{
	if (!now) return;
	if (now->nex == NULL)
	{
		now->nex = (node_long *)mymalloc(sizeof(list_long));
		now->nex->val = val;
		now->nex->nex = NULL;
		now->nex->prev = now;
	}
	else
	{
		node_long * tmp = (node_long *)mymalloc(sizeof(list_long));
		tmp->val = val;
		tmp->nex = now->nex;
		tmp->prev = now;
		now->nex = tmp;
		tmp->nex->prev = tmp;
	}
}

static void _remove(node_long * now)
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

void list_long_insert(list_long * li, size_t pos, long val)
{
	if (!li) return;
	if (li->size == 0)
	{
		++li->size;
		li->head = (node_long *)mymalloc(sizeof(node_long));
		li->head->val = val;
		li->head->prev = NULL;
		li->head->nex = (node_long *)mymalloc(sizeof(node_long));
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
	node_long * p = li->head;
	for(size_t i = 0; i < pos; ++i) p = p->nex;
	_insert(p, val);
}

void list_long_remove(list_long * li, size_t pos)
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
	node_long * p = li->head;
	for(size_t i = 0; i < pos; ++i) p = p->nex;
	_remove(p);
}

void list_long_push_front(list_long * li, long val)
{
	if (!li) return;
	if (li->size == 0) { list_long_insert(li, 0, val); return; }
	node_long * tmp = (node_long *)mymalloc(sizeof(node_long));
	tmp->nex = li->head;
	tmp->prev = NULL;
	tmp->val = val;
	li->head->prev = tmp;
	li->head = tmp;
	++li->size;
}

void list_long_push_back(list_long * li, long val)
{
	if (!li) return;
	if (li->size == 0) { list_long_insert(li, 0, val); return; }
	list_long_insert(li, li->size - 1, val);
}

void list_long_pop_front(list_long * li)
{
	if (!li) return;
	if (li->size == 0) return;
	list_long_remove(li, 0);
}

void list_long_pop_back(list_long * li)
{
	if (!li) return;
	if (li->size == 0) return;
	list_long_remove(li, li->size - 1);
}
