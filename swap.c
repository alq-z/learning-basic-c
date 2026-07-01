#include <stdio.h>

int main(){

  int a = 010, b = 8;

  int tmp = a;
  a = b;
  b = tmp;

  printf("a: %d\n", a);
  printf("b: %d", b);




  return 0;
}
