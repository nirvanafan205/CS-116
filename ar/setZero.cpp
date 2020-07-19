// setZero
#include <iostream>

using namespace std;

void setZero(int ar0[], unsigned elms);

int main()
{
	int first_array3[] = { 11, 12, 12 };
	unsigned elements3 = 3;

	setZero(first_array3,  elements3);
}

void setZero(int ar0[], unsigned elms)
{
	for(unsigned i = 0; i < elms; i++)
	{

		ar0[i] = 0;

		cout << ar0[i] << endl;

	}
}
