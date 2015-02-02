#include "LinkedListSort.h"


LinkedListSort::LinkedListSort()
{
}


LinkedListSort::~LinkedListSort()
{
}
LinkedListNode * LinkedListSort::sort(LinkedListNode * list){
	LinkedListNode * a=new LinkedListNode ;
	LinkedListNode * b=new LinkedListNode;
	if (list == NULL||list->next==NULL){ return NULL; }
	Split(list, a, b);
	sort(a);
	sort(b);
	return merge(a,b);
}

LinkedListNode * LinkedListSort::merge(LinkedListNode * a, LinkedListNode * b){
	LinkedListNode * result = NULL;
	if (a == NULL)
		return(b);
	else if (b == NULL)
		return(a);

	/* Pick either a or b, and recur */
	if (a->key <= b->key)
	{
		result = a;
		result->next = merge(a->next, b);
	}
	else
	{
		result = b;
		result->next = merge(a, b->next);
	}
	return(result);
}

void LinkedListSort::Split(LinkedListNode * h, LinkedListNode * l1, LinkedListNode * l2){
	LinkedListNode * slow;
	LinkedListNode * fast;
	if (h == NULL || h->next == NULL)
	{
		/* length < 2 cases */
		l1 = h;
		l2 = NULL;
	}
	else
	{
		slow = h;
		fast = h->next;

		/* Advance 'fast' two nodes, and advance 'slow' one node */
		while (fast != NULL)
		{
			fast = fast->next;
			if (fast != NULL)
			{
				slow = slow->next;
				fast = fast->next;
			}
		}

		/* 'slow' is before the midpoint in the list, so split it in two
		at that point. */
		l1 = h;
		l2 = slow->next;
		slow->next = NULL;
	}
}