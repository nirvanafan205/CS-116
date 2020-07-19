#include <iostream>

using namespace std;

double average(const unsigned ar[], unsigned els);

bool die(const string & msg);

int main()
{
	unsigned arays[] = { 2, 4, 5};
	unsigned elyementse = 0;

	if(elyementse == 0)
	{
		die("undefined");	
	}


	average(arays, elyementse);

}

double average(const unsigned ar[], unsigned els)
{
	unsigned add = 0;
	unsigned howmany = 0;

	for(unsigned i = 0; i < els; i++)
	{
		if(ar[i] % 2 == 0)
		{
			add = add + ar[i];
			howmany++;
		}

	}

	return  (add / howmany);
}

bool die(const string & msg)
{

	cout << "Fatal error: " << msg << "\n";
	exit(EXIT_FAILURE);
}
