#include <stdio.h>

typedef struct {  
  int a[2];
  double d;
} struct_t;

double fun(int i) {
  volatile struct_t s;
  s.d = 3.14;
  s.a[i] = 1073741824; 
  return s.d;
}

int main(int argc, char const *argv[]){
  
  printf("%.12f\n", fun(0));
  printf("%.12f\n", fun(1));
  printf("%.12f\n", fun(2));
  printf("%.12f\n", fun(3));
  printf("%.12f\n", fun(4));
  printf("%.12f\n", fun(6));
  
  return 0;
}
