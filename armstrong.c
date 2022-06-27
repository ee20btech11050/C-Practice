// Armstrong of a Number

#include <stdio.h>
#include <math.h> // For using pow() function in armstrong function

double armstrong(int n,int p)
{
  int rem;
  double sum = 0;
  do
  {
    rem = n%10;
    n /= 10;
    sum += (pow(rem,p));
  }while(n != 0);
  
  return sum;
}

// Finding the length of the number
int length(int num)
{
  int len=1;
  int temp = num;
  while(temp/10 != 0)
  {
    len++;
    temp/=10;
  }
  return len;
}

int main(void){
  int num;
  printf("Enter a positive number to recieve factorial of all numbers till that number: ");
  scanf("%d",&num);
  for(int i=0;i<=num;i++)
  {
    if(armstrong(i,length(i)) == (i+0.0))
    {
      printf("%d is an Armstrong Number.\n",i);
    }
  }
  
  return 0;
}
