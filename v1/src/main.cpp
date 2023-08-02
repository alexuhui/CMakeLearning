#include <iostream>
#include <stdio.h>
#include "../include/head.h"

using namespace std;

int main()
{

#ifdef DEBUG 
    cout << "is debug" << endl;
#else
    cout << "is release" << endl;
#endif

    int a = 5;
    int b = 2;
    printf("add : %d + %d = %d\n", a, b, add(a, b));
    printf("sub : %d - %d = %d\n", a, b, sub(a, b));
    printf("mul : %d * %d = %d\n", a, b, mul(a, b));
    printf("div : %d / %d = %d\n", a, b, divide(a, b));
}