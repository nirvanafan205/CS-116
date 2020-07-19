
#include <iostream>

using namespace std;

unsigned multiply(const unsigned ar[], unsigned els);

int main()
{
	unsigned arra_ys[] = {2, 2, 2, 2, 2};
	unsigned lements = 5;

	multiply(arra_ys, lements);
}

unsigned multiply(const unsigned ar[], unsigned els)
{
	unsigned multVal = 1;

	for(unsigned i = 0; i < els; ++i)
	{
		multVal = ar[i] * multVal; 
	}
	return multVal;
}
