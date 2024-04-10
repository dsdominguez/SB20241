/*
*   Incluindo novos tipos de dados para ver as diferenças 
*   entre 32 e 64 bits na compilação
*/

#include <stdio.h>

typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer start, size_t len) {
    size_t i;
    for (i = 0; i < len; i++)
	printf(" %.2x", start[i]);    //line:data:show_bytes_printf
    printf("\n");
}

void show_int(int x) {
    show_bytes((byte_pointer) &x, sizeof(int)); 
}

void show_long(long x) {
    show_bytes((byte_pointer) &x, sizeof(long)); 
}

void show_float(float x) {
    show_bytes((byte_pointer) &x, sizeof(float)); 
}

void show_double(double x) {
    show_bytes((byte_pointer) &x, sizeof(double)); 
}

void show_pointer(void *x) {
    show_bytes((byte_pointer) &x, sizeof(void *));
}

void test_show_bytes(int val) {
    int ival = val;
    int lval = (long) ival;
    float fval = (float) ival;
    float dval = (double) ival;
    int *pval = &ival;
    show_int(ival);
    show_long(lval);
    show_float(fval);
    show_double(dval);
    show_pointer(pval);
}

int main(int argc, char *argv[]){
    int val = 12345;

    test_show_bytes(val);

    return 0;
}