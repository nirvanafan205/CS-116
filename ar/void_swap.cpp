#include <iostream>

using namespace std;

void swap(unsigned ar0[], unsigned ar2[], unsigned elms);

int main()
{
	unsigned first_arraysqap[] = { 1, 2, 3 };
	unsigned second_arraysqap[] = { 10, 9, 8 };
	unsigned elementssqap = 3;

	swap(first_arraysqap, second_arraysqap, elementssqap);
}

void swap(unsigned ar0[], unsigned ar2[], unsigned elms)
{
	unsigned helpersqap[] = { 1, 2, 3 };

	for (unsigned i = 0; i < elms; i++)
	{
		helpersqap[i] = ar0[i];

		ar0[i] = ar2[i];

		cout << ar0[i] << " ";
	}
	cout << " , ";

	for (unsigned i = 0; i < elms; i++)
	{
		ar2[i] = helpersqap[i];

		cout << ar2[i] << " ";
	}
	cout << endl;
}
