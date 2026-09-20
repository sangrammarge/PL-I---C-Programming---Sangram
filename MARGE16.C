/*Program(16):
Solution(3):Using for loop*/

#include<stdio.h>
int main()
{
    int num,i=1;

    printf("Enter a Number:");
    scanf("%d", &num);

    printf("\n Multiplication Table of %d \n",num);

   for(i=1; i<=10;i++)
   {
    printf("%d×%d = %d\n", num,i,num*i);
      i++;
   }
    
    return 0;
 } 