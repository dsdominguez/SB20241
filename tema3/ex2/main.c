#include <stdio.h>

long exchange(long *, long);

int main(int argc, char const *argv[])
{
    long a = 4;
    long b = 3; 
    
    b = exchange(&a, b);
    
    printf("a = %ld, b = %ld\n", a, b);
    return 0;
}
