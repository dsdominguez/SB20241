#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i1 = 16777215, 
        i2 = 16777216, 
        i3 = 16777217, 
        i4 = 16777218, 
        i5 = 16777219; 

    float f1 = (float) i1,
          f2 = (float) i2,    
          f3 = (float) i3,    
          f4 = (float) i4,
          f5 = (float) i5;

    printf("Int1: %d \t Float1: %.2f\n", i1, f1);
    printf("Int2: %d \t Float2: %.2f\n", i2, f2);
    printf("Int3: %d \t Float3: %.2f\n", i3, f3);
    printf("Int4: %d \t Float4: %.2f\n", i4, f4);
    printf("Int5: %d \t Float5: %.2f\n", i5, f5);

    return 0;
}          