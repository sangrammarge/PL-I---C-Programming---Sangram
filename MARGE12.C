//Program(12):write a program to determine whether a given number is positve, negative, or zero.

#include <stdio.h>
int main()
{ 
int num;

 printf("Enter a number: ");
 scanf("%d", &num);

 if (num > 0)
  printf("The number is Positive.");

 else if (num < 0)
  printf("The number is Negative.");

 else
  printf("The number is Zero.");

 return 0;
}