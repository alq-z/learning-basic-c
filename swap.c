#include <stdio.h>

int main(void){

  int a = 010, b = 8;

  int tmp = a;
  a = b;
  b = tmp;

  printf("a: %d\n", a);
  printf("\n");
  printf("b: %d", b);
}
