//sum function
#include <iostream>

using namespace std;

double sum(const double ar[], unsigned els);

int main()
{
	double _array[] = {1.5, 3.2, 3.3, 4.4};
	unsigned elements = 4;

	sum(_array, elements);
}

double sum(const double ar[], unsigned els)
{
	double sumVal = 0;

	for(unsigned i = 0; i < els; ++i)
	{
		sumVal = sumVal + ar[i];
	}

	return sumVal;
}
