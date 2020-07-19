#include <iostream>

using namespace std;

void reverse(unsigned ar[], unsigned els);

int main()
{
	unsigned ar[] = {1,2,3,4,5,6,7};
	unsigned els = 7;

	reverse(ar, els);
}

void reverse(unsigned ar[], unsigned els)
{
   unsigned tempVal;

   for(unsigned i = 0; i < els / 2; ++i)
   {
	   if(els / 2 == 1)
		{
			i == 1;
		}
      tempVal = ar[i];                        
      ar[i] = ar[els - 1 - i];
      ar[els - 1 - i] = tempVal;

   }
   for(unsigned i = 0; i < els; ++i)
	{
		cout << ar[i] <<" ";
	}

}
