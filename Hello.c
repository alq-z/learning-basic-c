#include <stdio.h>
void sayHello();
int add(int x, int y);
int main (){
  int x = 0;
  int y = 0;
  
  printf("This will print Hello");
  sayHello();
  return 0;
}

void sayHello(){
  return printf("Hello, World");
}
int add(int x, int y){
  int result = x + y;
  
  return result;
}
