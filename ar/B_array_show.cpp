// show unsigned
#include <iostream>

using namespace std;

void show(const unsigned ar[], unsigned els);

int main()
{
	unsigned array[] = {1, 2, 3, 4};
	unsigned num_of_elements = 4;

	show(array,num_of_elements);
}

void show(const unsigned ar[], unsigned els)
{
	for(unsigned i = 0; i < els ; ++i)
	{
		if(i == 0)
		{
			cout << ar[i];
		}
		else
		{
			cout << ", " << ar[i];
		}
	}

	cout << endl;
}
