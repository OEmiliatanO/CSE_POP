#include "../src/list_<type>.h"
#include "../src/mm.h"
list_<type> * new_list_<type>()
{
	list_<type> * l = (list_<type> *) mymalloc(sizeof(list_<type>));
	l->size = 0;
	l->head = l->tail = NULL;
	return l;
}

static void _insert(node_<type> * now, <type> val)
{
	if (!now) return;
	if (now->nex == NULL)
	{
		now->nex = (node_<type> *)mymalloc(sizeof(list_<type>));
		now->nex->val = val;
		now->nex->nex = NULL;
		now->nex->prev = now;
	}
	else
	{
		node_<type> * tmp = (node_<type> *)mymalloc(sizeof(list_<type>));
		tmp->val = val;
		tmp->nex = now->nex;
		tmp->prev = now;
		now->nex = tmp;
		tmp->nex->prev = tmp;
	}
}

static void _remove(node_<type> * now)
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

void list_<type>_insert(list_<type> * li, size_t pos, <type> val)
{
	if (!li) return;
	if (li->size == 0)
	{
		++li->size;
		li->head = (node_<type> *)mymalloc(sizeof(node_<type>));
		li->head->val = val;
		li->head->prev = NULL;
		li->head->nex = (node_<type> *)mymalloc(sizeof(node_<type>));
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
	node_<type> * p = li->head;
	for(size_t i = 0; i < pos; ++i) p = p->nex;
	_insert(p, val);
}

void list_<type>_remove(list_<type> * li, size_t pos)
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
	node_<type> * p = li->head;
	for(size_t i = 0; i < pos; ++i) p = p->nex;
	_remove(p);
}

void list_<type>_push_front(list_<type> * li, <type> val)
{
	if (!li) return;
	if (li->size == 0) { list_<type>_insert(li, 0, val); return; }
	node_<type> * tmp = (node_<type> *)mymalloc(sizeof(node_<type>));
	tmp->nex = li->head;
	tmp->prev = NULL;
	tmp->val = val;
	li->head->prev = tmp;
	li->head = tmp;
	++li->size;
}

void list_<type>_push_back(list_<type> * li, <type> val)
{
	if (!li) return;
	if (li->size == 0) { list_<type>_insert(li, 0, val); return; }
	list_<type>_insert(li, li->size - 1, val);
}

void list_<type>_pop_front(list_<type> * li)
{
	if (!li) return;
	if (li->size == 0) return;
	list_<type>_remove(li, 0);
}

void list_<type>_pop_back(list_<type> * li)
{
	if (!li) return;
	if (li->size == 0) return;
	list_<type>_remove(li, li->size - 1);
}
