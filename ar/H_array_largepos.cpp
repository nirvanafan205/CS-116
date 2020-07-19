// largest pos

#include <iostream>

using namespace std;

double largestPos(const double ar[], unsigned els);

int main()
{
	double numbers[] = {1,9,2,9,3,9};
	unsigned els = 6;

	largestPos(numbers, els);	
}

double largestPos(const double ar[], unsigned els)
{

	double maxVal = ar[0];
	unsigned helper = 0;

	for(int i = 0; i < els; ++i) 
	{
		if(ar[i] > maxVal)
		{
			maxVal = ar[i];
			helper = helper + 1;
		}
	}
	return helper;
}
