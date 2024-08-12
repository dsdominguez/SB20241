#include <stdio.h>

int main(int argc, char const *argv[]){
    float a = 1E20, b = -1E20, c=3.14,
        resA, resB;

    resA = (a + b) + c;

    resB = a + (b + c);

    printf("Res: %f\n", resA);
    printf("Res: %f\n", resB);


    return 0;
}