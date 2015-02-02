#include "KthMin.h"
#include <iostream>

KthMin::KthMin()
{
}


KthMin::~KthMin()
{
}
int KthMin::findKthMin(IDoubleList03 * data, int k){

	IDoubleNode03 *pk;
	/*int cur = 0;
	pk = data->getHead();
	while (pk != NULL){
	cur = pk->getValue();
	std::cout << cur << "\n";
	pk = pk->getNext();

	}*/

	IDoubleNode03 * j = new DoubleNode03;
	IDoubleNode03 * i = new DoubleNode03;
	IDoubleNode03* iMin = new DoubleNode03;

	while (j != NULL){
		iMin = j;
		/* test against elements after j to find the smallest */
		for (i = j->getNext(); i != NULL; i = i->getNext()) {
			/* if this element is less, then it is the new minimum */
			if (i->getValue() < iMin->getValue())
			{

				iMin = i;
			}


			if (iMin != j) {
				int a = iMin->getValue();
				//int b = iMin->getValue();

				iMin->setValue(j->getValue());
				j->setValue(a);
			}
			j = j->getNext();
		}
		IDoubleNode03 * temp;
		temp = data->getHead();

		for (int z = 0; z <= k; z++){
			temp = temp->getNext();
		}
		return temp->getValue();
	}

}