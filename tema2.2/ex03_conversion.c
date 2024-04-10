#include <stdio.h>

int main(int argc, char const *argv[])
{
    short x = -12345, su;    
    unsigned short u = 53191u, ux;

    ux = (unsigned short) x;
    su = (short) u;

    printf("Signed x = %hd\tUnsigned ux=%hu\n", x, ux);
    printf("Unsigned u = %hu\tSigned su=%hd\n", u, su);


    //unsigned uM = 4294967295u; /* UMax */
    //int tu = (int) uM;
//
    //printf("Unsigned u = %hu\tSigned tu=%hd\n", uM, tu);

    return 0;
}