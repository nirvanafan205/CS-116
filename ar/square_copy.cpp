#include <iostream>

using namespace std;

void copy(int ar0[], int ar2[],  unsigned elms);

int main()
{
	int first_arraysq[] = { 11, 12, 12 };
	int second_arraysq[] = {3, 6, 2};
	unsigned elements = 3;

	copy(first_arraysq,  second_arraysq ,  elements);
}

void copy(int ar0[],  int ar2[],  unsigned elms)
{
	for (unsigned i = 0; i < elms; i++)
	{
		ar0[i] = ar2[i] * ar2[i];

		cout << ar0[i] << " ";

	}
	cout << endl;
	for(unsigned i = 0; i < elms; i++)
	{
		cout << ar2[i] << " ";	
	}
	cout << endl;
}
