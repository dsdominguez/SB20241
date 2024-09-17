#include <stdio.h>
#include"prnHexBin.h"

int main(int argc, char const *argv[])
{
    char x = 99;
    char mx = -x;
    unsigned char ux = 157u;

    printf("x= %hd\t", x);
    show_bytes((byte_pointer) &x, sizeof(char));
    show_binary_from_hex((byte_pointer) &x, sizeof(char));
    printf("\n");
    
    printf("mx=%hd\t", mx);
    show_bytes((byte_pointer) &mx, sizeof(char));
    show_binary_from_hex((byte_pointer) &mx, sizeof(char));
    printf("\n");

    printf("ux=%hu\t", ux);
    show_bytes((byte_pointer) &ux, sizeof(char));
    show_binary_from_hex((byte_pointer) &ux, sizeof(char));
    printf("\n");

    return 0;
}

