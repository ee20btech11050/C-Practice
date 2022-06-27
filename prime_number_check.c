// Prime Number Check

#include <stdio.h>

int main(void){
  int num;
  printf("Enter a positive number to check if it is a prime number or not: ");
  scanf("%d",&num);
  int count = 0;

  for(int i=2;i<num;i++)
  {
    if((num%i) == 0)
    {
      count = 1;
      break;
    }
  }

  if(num == 1)
  {
    printf("%d is neither a prime nor a composite number.",num);
  }
  else if(!count)
  {
    printf("%d is a prime number.",num);
  }
  else 
  {
    printf("%d is a composite number.",num);
  }

  return 0;
}
