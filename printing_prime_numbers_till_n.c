// Printing Prime Numbers from 1 to num where num is entered by the user

#include <stdio.h>

int main(void){
  int num;
  printf("Enter a positive number to print all the prime numbers until that number is encountered: ");
  scanf("%d",&num);
  

  for(int j=2;j<=num;j++)
  {
    int count = 0;
    for(int i=2;i<j;i++)
    {
      if((j%i) == 0)
      {
        count = 1;
        break;
      }
    }

    if(!count)
    {
      printf("%d\n",j);
    }  
  }

  return 0;
}
