#include <iostream>

using namespace std;

unsigned allZero(unsigned ar[], unsigned els);

int main()
{
	unsigned array1[] = { 5, 0, 0};
	unsigned elements1 = 3;

	allZero(array1, elements1);

}

unsigned allZero(unsigned ar[], unsigned els)
{
	unsigned sumVal = 0;

	for(unsigned i = 0; i < els; i++)
	{
		sumVal = sumVal + ar[i];
	}

	if (sumVal > 0)
	{
		return false;
	}
	else
	{
		return true;
	}
		return sumVal;
}
