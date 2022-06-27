// Palindrome Number Check

#include <stdio.h>

int main(void){
  int num;
  printf("Enter a positive number greater than 9 to check for a palindrome number: ");
  scanf("%d",&num);

  // Finding the length of the number
  int len=1;
  int temp = num;
  while(temp/10 != 0)
  {
    len++;
    temp/=10;
  }
  
  // Extracting each number into an element of the array
  int arr_num[len];
  temp = num;
  for(int i=len-1;i>=0;i--)
  {
    arr_num[i] = temp%10;
    temp/=10;
  }

  // Checking for palindrome
  int count = 1;
  for(int i=0;i<(len/2);i++)
  {
    if(arr_num[i] != arr_num[len-i-1])
    {
      count = 0;
    }
  }

  if(count)
  {
    printf("%d is a palindrome number.",num);
  }
  else
  {
    printf("%d is not a palindrome number.",num);
  }
  
  return 0;
}
