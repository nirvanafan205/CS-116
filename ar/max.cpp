// max
#include <iostream>

using namespace std;

unsigned max_num(const unsigned ar[], unsigned els);

bool die(const string & msg);

int main()
{
	unsigned numbers[] = {50, 20, 40, 30};
	unsigned els = 0;

	if(els == 0)
	{
		die("No numbers");
	}

	max_num(numbers, els);	
}

bool die(const string & msg)
{
	cout << "Fatal error: " << msg << "\n";
	exit(EXIT_FAILURE);
}


unsigned max_num(const unsigned ar[], unsigned els)
{
	unsigned maxVal = ar[0];

	for(unsigned i = 0; i < els; ++i) 
	{
		if(ar[i] > maxVal)
		{
			maxVal = ar[i];
		}
	}
	return maxVal;
}
