// Printing first n prime numbers

#include <stdio.h>

int main(void){
  int num;
  printf("Enter a positive number to print the first n prime numbers: ");
  scanf("%d",&num);
  printf("The first %d prime numbers are: \n",num);
  
  int count_num=0;
  for(int j=2;count_num<num;j++)
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
      count_num++;
    }  
  }

  return 0;
}
