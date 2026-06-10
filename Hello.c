#include <stdio.h>
void sayHello();
int main (){

  printf("This will print Hello");
  sayHello();
  return 0;
}

void sayHello(){
  return printf("Hello, World");
}
