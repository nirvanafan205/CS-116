//triple

#include <iostream>

using namespace std;

void triple(const double ar[], unsigned els);

int main()
{
	double arays[] = {1.1, 2.2, 3.3};
	unsigned els = 3;

	triple(arays, els); 

}

void triple(const double ar[], unsigned els)
{

	for (unsigned i = 0; i < els; ++i)
	{

		double arays[] = {1.1, 2.2, 3.3};
		arays[i] = 3 * arays[i];

		cout << arays[i] << endl;
	}	
}
