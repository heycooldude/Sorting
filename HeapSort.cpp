#include "HeapSort.h"
#include<iostream>

HeapSort::HeapSort()
{
}


HeapSort::~HeapSort()
{
}

void HeapSort::sort(std::vector<int>& vector){
	
	buildheap(vector,0,(vector.size()-1));
	//int x = 0;
	int end = vector.size()-1;
	//for (int i = vector.size(); i > 0; --i){}
	while (end > 0)
	{
		int tmp = vector[end];
		vector[end] = vector[0];
		vector[0] = tmp;
		--end;
		
		fixDown(vector,0, end);
		
		
	}
}

void HeapSort::fixDown(std::vector<int>& vector, int low,int end){
	
	int root = low;
	
	while ((root * 2) + 1 <= end)
	
	{
		int left = (root * 2) + 1;
		int right = left + 1;
		int largest = root;

		
		if (vector[largest] < vector[left])
		{
			largest = left;
		}
		
		if ((right <= end) && (vector[largest] < vector[right]))
		{
			largest = right;
		}
		if (largest != root)
		{
			int tmp = vector[root];
			vector[root] = vector[largest];
			vector[largest] = tmp;
			root = largest;
		}
		else
		{
			break;
		}
	}
	return;
}

void HeapSort:: buildheap(std::vector<int>& vector, int low, int end)
{

	/*for (int i = vector.size(); i >= 0; i--)
	{
		fixdown(vector,0, i);
	}*/
	int middle = vector.size() / 2;
	while (middle >= 0)
	{
		fixDown(vector, middle, end);
		--middle;
	}
	return;
}
