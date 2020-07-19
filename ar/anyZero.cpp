// bool anyZero

#include <iostream>

using namespace std;

bool anyZero(unsigned ar[], unsigned els);

int main()
{
	unsigned array2[] = { 1, 1, 0 };
	unsigned elements2 = 3;

	anyZero(array2, elements2);

	
}

bool anyZero(unsigned ar[], unsigned els)
{
	for (unsigned i = 0; i < els; i++)
	{
		if (ar[i] == 0)
		{
			
			return true;
		}
		else
		{

			return false;
		}
	}
}
