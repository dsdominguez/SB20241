#include<stdio.h>

int main(int argc, char const *argv[]){
    int val = 0x89ABCDEF, mask = 0xFFF;
    int result;

    printf("%08x\n", val);

    result = val & mask;

    printf("%08x\n", result);

    return 0;
}
