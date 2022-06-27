// Fibonacci Series printing using iteration method
// Here, we are assuming that 0th term is 0 and 1st term is 1 in the fibonacci series.
#include <stdio.h>

int fibonacci_recursive(int num)
{
  if(num<2)
  {
    return num;
  }
  else
  {
    return fibonacci_recursive(num-2)+fibonacci_recursive(num-1);
  }
}

int main(void){
  int num;
  printf("Enter the number of terms you want in the fibonacci series: ");
  scanf("%d",&num);

  int n1 = 0,n2 = 1,n3;
  // printf("%d ",num); // printing the required term of the fibonacci series

  for(int i=0;i<=num;i++)
  {
    printf("%d ",fibonacci_recursive(i)); // for printing all the terms of the fibonacci series
  }
  
  return 0;
}
