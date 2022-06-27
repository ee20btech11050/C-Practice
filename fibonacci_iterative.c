// Fibonacci Series printing using iteration method
// Here, we are assuming that 0th term is 0 and 1st term is 1 in the fibonacci series.
#include <stdio.h>

int main(void){
  int num;
  printf("Enter the number of terms you want in the fibonacci series: ");
  scanf("%d",&num);

  int n1 = 0,n2 = 1,n3;
  printf("%d %d ",n1,n2); // printing the first two terms of the fibonacci series

  for(int i=0;i<(num-1);i++)
  {
    n3 = n1+n2;
    n1 = n2;
    n2 = n3;
    printf("%d ",n3); // for printing all the terms of the fibonacci series
  }
  // printf("The %dth term of the fibonacci series: %d",num,n3); // printing the required term of the fibonacci series
  
  return 0;
}
