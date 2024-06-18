#include <stdio.h>

int main(int argc, char const *argv[])
{
    float x = 3.14,
          y = 1e10,    
          z = 1e10,    
          res1,
          res2;

    res1 = (x + y) - z;      
    res2 = x + (y - z);      

    printf("(3.14 + 1e10) - 1e10 = %.4f\n", res1);
    printf("3.14 + (1e10- 1e10) = %.4f\n", res2);

    return 0;
}          