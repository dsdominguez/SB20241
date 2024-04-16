#include <stdio.h>
#include"prnHexBin.h"

int main(int argc, char const *argv[])
{
    unsigned short u = 149u;
    unsigned char cu = (unsigned char) u;

    short s = 149;
    char cs = (char) s;

    unsigned short u1 = 518;
    unsigned char cu1 = (unsigned char) u1;

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

    printf("u1=%hu\t", u1);
    show_bytes((byte_pointer) &u1, sizeof(short));
    show_binary_from_hex((byte_pointer) &u1, sizeof(short));
    printf("\n");
    
    printf("cu1=%hu\t", cu1);
    show_bytes((byte_pointer) &cu1, sizeof(char));
    show_binary_from_hex((byte_pointer) &cu1, sizeof(char));
    printf("\n");

    return 0;
}