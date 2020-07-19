// mult array

#include <iostream>

using namespace std;

double multiply(const double ar[], unsigned els);

int main()
{
	double arra_ys[] = {1, 2, 3, 4, 1.2};
	unsigned lements = 5;

	multiply(arra_ys, lements);
}

double multiply(const double ar[], unsigned els)
{
	double multVal = 1;

	for(unsigned i = 0; i < els; ++i)
	{
		multVal = ar[i] * multVal; 
	}
		return multVal;
}
