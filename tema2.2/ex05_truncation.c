#include <stdio.h>
#include"prnHexBin.h"

int main(int argc, char const *argv[])
{
    unsigned short u = 149u;
    unsigned char cu = (unsigned char) u;

    short s = 149;
    char cs = (char) s;

    printf("u=%hu\t", u);
    show_bytes((byte_pointer) &u, sizeof(short));
    show_binary_from_hex((byte_pointer) &u, sizeof(short));
    printf("\n");
    
    printf("cu=%hu\t", cu);
    show_bytes((byte_pointer) &cu, sizeof(char));
    show_binary_from_hex((byte_pointer) &cu, sizeof(char));
    printf("\n");

    printf("s=%hd\t", s);
    show_bytes((byte_pointer) &s, sizeof(short));
    show_binary_from_hex((byte_pointer) &s, sizeof(short));
    printf("\n");
    
    printf("cs=%hd\t", cs);
    show_bytes((byte_pointer) &cs, sizeof(char));
    show_binary_from_hex((byte_pointer) &cs, sizeof(char));
    printf("\n");

    /*printf("x=%hd\t", x);
    show_bytes((byte_pointer) &x, sizeof(short));
    show_binary_from_hex((byte_pointer) &x, sizeof(short));
    printf("\n");
    
    printf("mx=%hu\t", ux);
    show_bytes((byte_pointer) &ux, sizeof(short));
    show_binary_from_hex((byte_pointer) &ux, sizeof(short));
    printf("\n");*/

    return 0;
}