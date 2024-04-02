#include<stdio.h>

void inplace_swap(int *x, int *y) {
    *y = *x ^ *y; /* Step 1 */
    *x = *x ^ *y; /* Step 2 */
    *y = *x ^ *y; /* Step 3 */
}

void reverse_array(int a[], int cnt) {
    int first, last;
    for (first = 0, last = cnt-1;
    first <= last;
    first++,last--)
    inplace_swap(&a[first], &a[last]);
}

void prn_vet(int a[], int cnt){
    for (int i = 0; i < cnt; i++)
        printf("%d\t", a[i]);
    printf("\n");    
}

int main(int argc, char const *argv[])
{
    //int vec[] = {1, 2, 3, 4, 5, 6}, cnt = 6;
    int vec[] = {1, 2, 3, 4, 5}, cnt = 5;

    prn_vet(vec, cnt);

    reverse_array(vec, cnt);

    prn_vet(vec, cnt);

    return 0;
}
