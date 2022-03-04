#include<stdio.h>

int main()
{
  int a = 11;
  int b = 60;
  
  printf("Before swapping");
  printf("Value of a: %d", a);
  printf("Value of b: %d", b);
  
  int temp = a;
  a = b;
  b = temp; 
  
  printf("After swapping");
  printf("Value of a: %d", a);
  printf("Value of b: %d", b);
  
}
