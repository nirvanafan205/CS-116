#include <iostream>

using namespace std;

bool increasing(unsigned ar[], unsigned els ); 

int main()
{
	unsigned the_array[] = {5,6,7,8};
	unsigned elyments = 4;

	increasing(the_array, elyments);
}

bool increasing(unsigned ar[], unsigned els ) 
{

	unsigned check = 0;

	for(unsigned i = 0; i < els; ++i)
	{

		if(els < 2)
		{
			cout << ar[i] << ": True" << endl;
		}
		else if(ar[i] > check)
		{
			check++;
		}

	}

	if(check == els )
	{
		return true;
	}
	else
	{
		return false;
	}
}

