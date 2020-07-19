#include <iostream>

using namespace std;

double average(const unsigned ar[], unsigned els);

bool die(const string & msg);

int main()
{
	unsigned arays[] = { 1, 4, 8};
	unsigned elyements = 0;

	if( elyements == 0)
	{
		die("No numbers");
	}
	average(arays, elyements);

}
double average(const unsigned ar[], unsigned els)
{

	unsigned even = ar[0];

	for(unsigned i = 0; i < els; i++)
	{
		if(ar[i] % 2 == 0 && ar[i] > even)
		{
			even = ar[i];

		}
	}
		return even;

}


bool die(const string & msg)
{

	cout << "Fatal error: " << msg << "\n";
	exit(EXIT_FAILURE);
}

