/*
Deve aumentar o tamanho do stack para funcionar.

Em WSL:
    - Check stack size: ulimit -s
    - Set stack size: sudo prlimit --stack=unlimited --pid $$
*/

#include <stdio.h>
#include <time.h>

#define N 2048

void copyij(int src[N][N],
            int dst[N][N])
{
  int i,j;
  
  for (i = 0; i < N; i++)
    for (j = 0; j < N; j++){
      dst[i][j] = src[i][j];
    }
}


void copyji(int src[N][N],
            int dst[N][N])
{
  int i,j;
  for (j = 0; j < N; j++)
    for (i = 0; i < N; i++)
      dst[i][j] = src[i][j];
}


int main(void)
{
    clock_t start, end;
    double cpu_time_used;

    int A[N][N], B[N][N];

    // Record the start time
    start = clock();

    copyij(A, B);

    // Record the end time
    end = clock();

    // Calculate the elapsed time
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;

    printf("Execution time: %f seconds\n", cpu_time_used);


    // Record the start time
    start = clock();

    copyji(A, B);

    // Record the end time
    end = clock();

    // Calculate the elapsed time
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;

    printf("Execution time: %f seconds\n", cpu_time_used);

    return 0;
}
