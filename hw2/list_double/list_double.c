#include "../src/list_double.h"
#include "../src/mm.h"
list_double * new_list_double()
{
	list_double * l = (list_double *) mymalloc(sizeof(list_double));
	l->size = 0;
	l->head = l->tail = NULL;
	return l;
}

static void _insert(node_double * now, double val)
{
	if (!now) return;
	if (now->nex == NULL)
	{
		now->nex = (node_double *)mymalloc(sizeof(list_double));
		now->nex->val = val;
		now->nex->nex = NULL;
		now->nex->prev = now;
	}
	else
	{
		node_double * tmp = (node_double *)mymalloc(sizeof(list_double));
		tmp->val = val;
		tmp->nex = now->nex;
		tmp->prev = now;
		now->nex = tmp;
		tmp->nex->prev = tmp;
	}
}

static void _remove(node_double * now)
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

void list_double_insert(list_double * li, size_t pos, double val)
{
	if (!li) return;
	if (li->size == 0)
	{
		++li->size;
		li->head = (node_double *)mymalloc(sizeof(node_double));
		li->head->val = val;
		li->head->prev = NULL;
		li->head->nex = (node_double *)mymalloc(sizeof(node_double));
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
	node_double * p = li->head;
	for(size_t i = 0; i < pos; ++i) p = p->nex;
	_insert(p, val);
}

void list_double_remove(list_double * li, size_t pos)
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
	node_double * p = li->head;
	for(size_t i = 0; i < pos; ++i) p = p->nex;
	_remove(p);
}

void list_double_push_front(list_double * li, double val)
{
	if (!li) return;
	if (li->size == 0) { list_double_insert(li, 0, val); return; }
	node_double * tmp = (node_double *)mymalloc(sizeof(node_double));
	tmp->nex = li->head;
	tmp->prev = NULL;
	tmp->val = val;
	li->head->prev = tmp;
	li->head = tmp;
	++li->size;
}

void list_double_push_back(list_double * li, double val)
{
	if (!li) return;
	if (li->size == 0) { list_double_insert(li, 0, val); return; }
	list_double_insert(li, li->size - 1, val);
}

void list_double_pop_front(list_double * li)
{
	if (!li) return;
	if (li->size == 0) return;
	list_double_remove(li, 0);
}

void list_double_pop_back(list_double * li)
{
	if (!li) return;
	if (li->size == 0) return;
	list_double_remove(li, li->size - 1);
}
