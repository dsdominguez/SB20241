#include <stdio.h>
#include <string.h>

typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer start, size_t len) {
    //printf("%p\n", start);
    //puts(start);
    size_t i;
    for (i = 0; i < len; i++)
	printf(" %.2x", start[i]);    
    printf("\n");
}

void show_string(void *x) {
    //printf("%p\n", x);
    //puts(x);
    show_bytes((byte_pointer) x, strlen(x)+1);
}

int main(int argc, char *argv[]){
    const char *val = "123456";
    //printf("%p\n", val);
    //puts(val);

    show_string((void *) val);

    return 0;
}