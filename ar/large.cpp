
#include <iostream>

using namespace std;



void max_num(const double ar[], unsigned els);

int main()
{
	double numbers[] = {-1.1, 2.2, -3.3};
	unsigned els = 3;

	max_num(numbers, els);	
}

void max_num(const double ar[], unsigned els)
{

	double maxVal = ar[0];

	for(int i = 0; i < els; ++i) 
	{
		if(ar[i] > maxVal)
		{
			maxVal = ar[i];
		}
	}
	cout << "Max: " << maxVal << endl;
}
