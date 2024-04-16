#include <stdio.h>

float sum_elements(float a[], unsigned length) {
    int i;
    float result = 0;

    for (i = 0; i <= length-1; i++)
        result += a[i];

    return result;
}

int main(int argc, char const *argv[])
{
    /* Caso 1 */
    //float vec[] = {1.0, 2.3, -1.0, 1.7};
    //unsigned l = 4;

    /* Caso 2 */
    float * vec = NULL;
    unsigned l = 0;

    printf("Result=%.2f\n", sum_elements(vec, l));

    return 0;
}

