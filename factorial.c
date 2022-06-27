// Factorial of a Number
// Change the data type with longer bytes to get factorial of higher numbers

#include <stdio.h>

int factorial(int n)
{
  if(n == 1 || n == 0)
  {
    return 1;
  }
  return n*factorial(n-1);
}
int main(void){
  int num;
  printf("Enter a positive number to recieve factorial of all numbers till that number: ");
  scanf("%d",&num);

  for(int i=0;i<=num;i++)
  {
    printf("Factorial of %d is: %d\n",i,factorial(i));
  }
  
  return 0;
}
