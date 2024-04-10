#include <stdio.h>
#include"prnHexBin.h"

int main(int argc, char const *argv[])
{
    short x = 12345;
    short mx = -x;
    unsigned ux = 53191u;

    printf("x=%hd\t\t", x);
    show_bytes((byte_pointer) &x, sizeof(short));
    show_binary_from_hex((byte_pointer) &x, sizeof(short));
    printf("\n");
    
    printf("mx=%hd\t", mx);
    show_bytes((byte_pointer) &mx, sizeof(short));
    show_binary_from_hex((byte_pointer) &mx, sizeof(short));
    printf("\n");

    printf("ux=%hu\t", ux);
    show_bytes((byte_pointer) &ux, sizeof(short));
    show_binary_from_hex((byte_pointer) &ux, sizeof(short));
    printf("\n");

    return 0;
}

