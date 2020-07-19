#include <iostream>

using namespace std;

double average( unsigned ar[], unsigned els);

bool die(const string & msg);

int main()
{
	unsigned _array_[] = {2,2,2};
	unsigned elements_ = 0;

	if(elements_ == 0)
	{
		die("no inputs");
	}

	average(_array_, elements_);
}

double average( unsigned ar[], unsigned els)
{
	unsigned sumVal = 0;

	for(unsigned i = 0; i < els; ++i)
	{
		sumVal = sumVal + ar[i];
	}

	return (sumVal / els) ;
}

bool die(const string & msg)
{

	cout << "Fatal error: " << msg << "\n";
	exit(EXIT_FAILURE);
}
