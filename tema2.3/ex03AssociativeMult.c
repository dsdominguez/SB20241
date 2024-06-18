#include <stdio.h>

int main(int argc, char const *argv[])
{
    float x = 1e20,
          y = 1e20,    
          z = 1e-20,    
          res1,
          res2;

    res1 = (x * y) * z;      
    res2 = x * (y * z);      

    printf("(1e20 * 1e20) * 1e-20  = %.2e\n", res1);
    printf("1e20 * (1e20 * 1e-20) = %.2e\n", res2);

    return 0;
}          