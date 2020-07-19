// show doubles
#include <iostream>

using namespace std;

void show(const double ar[], unsigned els);

int main()
{
	double array[] = {1.1, 2.2, 3.3, 4.4};
	unsigned num_of_elements = 4;

	show(array,num_of_elements);
}


void show(const double ar[], unsigned els)
{
	for(unsigned i = 0; i < els ; ++i)
	{
		if(i == 0)
		{
			cout <<  ar[i];
		}
		else
		{
			cout << ", " << ar[i];
		}
	}

	cout << endl;
}
