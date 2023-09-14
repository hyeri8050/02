#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  printf("Hello, Sookmyung Electronics! \n");
   
  int a, b;
  a = 10;
  b = 20;
  printf("%d + %d = %d\n", a, b, a+b); 
  
  getchar(); //Prevents execution from ending quickly
  return 0;
}
