#include <iostream>

using namespace std;

unsigned howMany(unsigned look, const unsigned ar[], unsigned els);

int main ()
{
	unsigned num = 2;
	unsigned numbers[] = { 2, 2 ,2, 2 , 2};
	unsigned elements = 5;

	howMany(num, numbers, elements);
}

unsigned howMany(unsigned look, const unsigned ar[], unsigned els)
{
	unsigned helper = 0;
	for(unsigned i = 0; i < els; i++)
	{

		if(ar[i] == look )
		{
			helper = helper + 1;

		}


	}

	return helper;
}
