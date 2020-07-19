//unsigned sum
#include <iostream>

using namespace std;

unsigned sum(const unsigned ar[], unsigned els);

int main()
{
        unsigned _array4[] = {1, 3, 3, 4};
        unsigned elements4 = 4;

        sum(_array4, elements4);
}

unsigned sum(const unsigned ar[], unsigned els)
{
        unsigned sumVal = 0;

        for(unsigned i = 0; i < els; ++i)
        {
                sumVal = sumVal + ar[i];
        }

        return sumVal;
}
