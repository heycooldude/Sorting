#pragma once
#include "Interfaces03.h"
class LinkedListSort
{
public:
	LinkedListSort();
	~LinkedListSort();
	LinkedListNode * sort(LinkedListNode * list);
	LinkedListNode * merge(LinkedListNode * list1, LinkedListNode * list2);
	void Split(LinkedListNode * h, LinkedListNode * l1, LinkedListNode * l2);
};

