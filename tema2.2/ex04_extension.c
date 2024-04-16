#include <stdio.h>
#include"prnHexBin.h"

int main(int argc, char const *argv[])
{
    char sx = -107;
    unsigned char usx = sx;

    short x = sx;
    unsigned short ux = usx; 

    printf("x=%hd\t", sx);
    show_bytes((byte_pointer) &sx, sizeof(char));
    show_binary_from_hex((byte_pointer) &sx, sizeof(char));
    printf("\n");
    
    printf("usx=%hu\t", usx);
    show_bytes((byte_pointer) &usx, sizeof(char));
    show_binary_from_hex((byte_pointer) &usx, sizeof(char));
    printf("\n");

    printf("x=%hd\t", x);
    show_bytes((byte_pointer) &x, sizeof(short));
    show_binary_from_hex((byte_pointer) &x, sizeof(short));
    printf("\n");
    
    printf("mx=%hu\t", ux);
    show_bytes((byte_pointer) &ux, sizeof(short));
    show_binary_from_hex((byte_pointer) &ux, sizeof(short));
    printf("\n");

    return 0;
}