#include <stdio.h>
#include"prnHexBin.h"

int main(int argc, char const *argv[])
{
    char sx = -107;             /* -107 */  
    
    unsigned char usx = sx;    /* 149 */
    unsigned short ux = usx;   /* 149 */

    unsigned short uy = sx;     /* Mystery! */  

    printf("x=%hd\t", sx);
    show_bytes((byte_pointer) &sx, sizeof(char));
    show_binary_from_hex((byte_pointer) &sx, sizeof(char));
    printf("\n");
    
    printf("usx=%hu\t", usx);
    show_bytes((byte_pointer) &usx, sizeof(char));
    show_binary_from_hex((byte_pointer) &usx, sizeof(char));
    printf("\n");

    printf("ux=%hu\t", ux);
    show_bytes((byte_pointer) &ux, sizeof(short));
    show_binary_from_hex((byte_pointer) &ux, sizeof(short));
    printf("\n");

    printf("uy=%hu", uy);
    show_bytes((byte_pointer) &uy, sizeof(short));
    show_binary_from_hex((byte_pointer) &uy, sizeof(short));
    printf("\n");

    return 0;
}