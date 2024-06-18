//#define _GNU_SOURCE 1
//#include <math.h>

#define _GNU_SOURCE 1
#include <math.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
    float a = INFINITY;
    double b = NAN;

    printf("a  = %.2e\n", a);
    printf("b  = %.2e\n", b);

    return 0;
}          