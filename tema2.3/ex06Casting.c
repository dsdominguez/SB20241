#include <stdio.h>

int main(int argc, char const *argv[])
{
    float a = 1e10;
    int b = (int) a;
    float c = 1e8;
    int d = (int) c;

    printf("a  = %.2e\n", a);
    printf("b  = %d\n", b);
    printf("c  = %.2f\n", c);
    printf("d  = %d\n", d);

    return 0;
}          