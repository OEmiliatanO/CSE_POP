#include "src/list.h"
#include "src/mm.h"
#include <stddef.h>

list* new_list()
{
	list* l = (list *) mymalloc(sizeof(list));
	l->size = 0;
	l->head = l->tail = NULL;
	return l;
}

void _insert(node* now, int val)
{
	if (!now) return;
	if (now->nex == NULL)
	{
		now->nex = (node *)mymalloc(sizeof(list));
		now->nex->val = val;
		now->nex->nex = NULL;
		now->nex->prev = now;
	}
	else
	{
		node* tmp = (node *)mymalloc(sizeof(list));
		tmp->val = val;
		tmp->nex = now->nex;
		tmp->prev = now;
		now->nex = tmp;
		tmp->nex->prev = tmp;
	}
}

void _remove(node* now)
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

void linsert(list* li, size_t pos, int val)
{
	if (!li) return;
	if (li->size == 0)
	{
		++li->size;
		li->head = (node *)mymalloc(sizeof(node));
		li->head->val = val;
		li->head->prev = NULL;
		li->head->nex = (node *)mymalloc(sizeof(node));
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
	node* p = li->head;
	for(size_t i = 0; i < pos; ++i) p = p->nex;
	_insert(p, val);
}

void lremove(list* li, size_t pos)
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
	node* p = li->head;
	for(size_t i = 0; i < pos; ++i) p = p->nex;
	_remove(p);
}

void lpush_front(list *li, int val)
{
	if (!li) return;
	if (li->size == 0) { linsert(li, 0, val); return; }
	node* tmp = (node *)mymalloc(sizeof(node));
	tmp->nex = li->head;
	tmp->prev = NULL;
	tmp->val = val;
	li->head->prev = tmp;
	li->head = tmp;
	++li->size;
}

void lpush_back(list *li, int val)
{
	if (!li) return;
	if (li->size == 0) { linsert(li, 0, val); return; }
	linsert(li, li->size - 1, val);
}

void lpop_front(list* li)
{
	if (!li) return;
	if (li->size == 0) return;
	lremove(li, 0);
}

void lpop_back(list* li)
{
	if (!li) return;
	if (li->size == 0) return;
	lremove(li, li->size - 1);
}
