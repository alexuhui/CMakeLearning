#include <stdio.h>
#include "calc.h"
#include "swap.h"
#include "floor.h"

int main()
{
    int a = 33;
    int b = 20;
    int result = mul(a, b);

    printf("lib use, %d * %d = %d\n", a, b, result);

    int s1 = 888;
    int s2 = 999;
    printf("before swap s1 : %d  s2 : %d\n", s1, s2);
    swap(s1, s2);
    printf("after swap s1 : %d  s2 : %d\n", s1, s2);

    float f = 3.14159;
    int fr = floor(f);
    printf("f : %f  floor int : %d \n", f, fr);

    return 0;
}