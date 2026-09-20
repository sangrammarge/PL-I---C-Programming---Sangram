/*Program(14):write a program to generate the multiple table of the any using while loop, do while loop, and for loop.

#include<stdio.h>
int main()
{
    int num,i=1;

    printf("Enter a Number:");
    scanf("%d", &num);

    printf("\n Multiplication Table of %d \n",num);

    while(i<=10)
   {
    printf("%d×%d = %d\n", num,i,num*i);
      i++;
   }
    return 0;
 } 