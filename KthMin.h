#pragma once
#include "Interfaces03.h"
#include "DoubleList03.h"
#include "DoubleNode03.h"
class KthMin:public IKthMin
{
public:
	KthMin();
	~KthMin();
	int findKthMin(IDoubleList03 * data, int k);
};

