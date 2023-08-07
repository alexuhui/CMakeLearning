#include <iostream>
#include "swap.h"

using namespace std;

int main()
{
    int a = 10;
    int b = 20;
    cout << "before swap a : " << a  << "  b : " << b << endl;
    swap(a, b);
    cout << "after swap a : " << a  << "  b : " << b << endl;

    return 0;
}