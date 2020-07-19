#include <iostream>

using namespace std;

int copy(int ar0[], int ar2[],  unsigned elms);

int main()
{
	int first_array[] = { 11, 12, 12 };
	int second_array[] = {-1, -2, -3};
	unsigned elements = 3;

	copy(first_array,  second_array ,  elements);
}

int copy(int ar0[],  int ar2[],  unsigned elms)
{
	for (unsigned i = 0; i < elms; i++)
	{
		ar0[i] = ar2[i];
		
		return ar0[i];
	}
}
