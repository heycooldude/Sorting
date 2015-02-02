#pragma once
#include "Interfaces03.h"
//#include <vector>
class HeapSort:public IHeapSort
{
public:
	HeapSort();
	~HeapSort();
	void sort(std::vector<int>& vector);
	void fixDown(std::vector<int>& vector, int low,int i);
	void buildheap(std::vector<int>& vector,int low, int high);
};

