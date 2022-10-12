#include "../src/list_short.h"
#include "../src/mm.h"
list_short * new_list_short()
{
	list_short * l = (list_short *) mymalloc(sizeof(list_short));
	l->size = 0;
	l->head = l->tail = NULL;
	return l;
}

static void _insert(node_short * now, short val)
{
	if (!now) return;
	if (now->nex == NULL)
	{
		now->nex = (node_short *)mymalloc(sizeof(list_short));
		now->nex->val = val;
		now->nex->nex = NULL;
		now->nex->prev = now;
	}
	else
	{
		node_short * tmp = (node_short *)mymalloc(sizeof(list_short));
		tmp->val = val;
		tmp->nex = now->nex;
		tmp->prev = now;
		now->nex = tmp;
		tmp->nex->prev = tmp;
	}
}

static void _remove(node_short * now)
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

void list_short_insert(list_short * li, size_t pos, short val)
{
	if (!li) return;
	if (li->size == 0)
	{
		++li->size;
		li->head = (node_short *)mymalloc(sizeof(node_short));
		li->head->val = val;
		li->head->prev = NULL;
		li->head->nex = (node_short *)mymalloc(sizeof(node_short));
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
	node_short * p = li->head;
	for(size_t i = 0; i < pos; ++i) p = p->nex;
	_insert(p, val);
}

void list_short_remove(list_short * li, size_t pos)
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
	node_short * p = li->head;
	for(size_t i = 0; i < pos; ++i) p = p->nex;
	_remove(p);
}

void list_short_push_front(list_short * li, short val)
{
	if (!li) return;
	if (li->size == 0) { list_short_insert(li, 0, val); return; }
	node_short * tmp = (node_short *)mymalloc(sizeof(node_short));
	tmp->nex = li->head;
	tmp->prev = NULL;
	tmp->val = val;
	li->head->prev = tmp;
	li->head = tmp;
	++li->size;
}

void list_short_push_back(list_short * li, short val)
{
	if (!li) return;
	if (li->size == 0) { list_short_insert(li, 0, val); return; }
	list_short_insert(li, li->size - 1, val);
}

void list_short_pop_front(list_short * li)
{
	if (!li) return;
	if (li->size == 0) return;
	list_short_remove(li, 0);
}

void list_short_pop_back(list_short * li)
{
	if (!li) return;
	if (li->size == 0) return;
	list_short_remove(li, li->size - 1);
}
