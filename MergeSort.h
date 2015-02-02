#pragma once
#include"Interfaces03.h"
class MergeSort:public IMergeSort
{
public:
	MergeSort();
	~MergeSort();
	void mergeSort(ICircularList * input);
	ICircularList * Merge(ICircularList* firstNode, ICircularList* secondNode);
};

