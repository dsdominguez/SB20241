#include"prnHexBin.h"

typedef unsigned char *byte_pointer;

void prn_bin_from_hex_digit(char hex){
    switch (hex){
        case '0':
            printf("0000 ");
            break;
        case '1':
            printf("0001 ");
            break;
        case '2':
            printf("0010 ");
            break;    
        case '3':
            printf("0011 ");
            break;    
        case '4':
            printf("0100 ");
            break;
        case '5':
            printf("0101 ");
            break;
        case '6':
            printf("0110 ");
            break;    
        case '7':
            printf("0111 ");
            break;    
        case '8':
            printf("1000 ");
            break;
        case '9':
            printf("1001 ");
            break;
        case 'a':
        case 'A':
            printf("1010 ");
            break;    
        case 'b':
        case 'B':
            printf("1011 ");
            break;    
        case 'c':
        case 'C':
            printf("1100 ");
            break;
        case 'd':
        case 'D':
            printf("1101 ");
            break;
        case 'e':
        case 'E':
            printf("1110 ");
            break;    
        case 'f':
        case 'F':
            printf("1111 ");
            break;    
        default:
            printf("Erro\n");
            break;
        }   
}

void show_binary_from_hex(byte_pointer start, size_t len){
    size_t i;
    char strhex[3];
    for (i = 0; i < len; i++){
        sprintf(strhex, "%.2x", start[i]);
        prn_bin_from_hex_digit(strhex[0]);
        prn_bin_from_hex_digit(strhex[1]);
    }    
    printf("\t"); 
}

void show_bytes(byte_pointer start, size_t len) {
    size_t i;
    for (i = 0; i < len; i++)
	    printf(" %.2x", start[i]);    //line:data:show_bytes_printf
    printf("\t");
}