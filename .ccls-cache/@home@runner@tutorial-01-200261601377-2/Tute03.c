#include <stdio.h>

int main() 
{
   float sum=0;
   int n,i;
   
   printf("Enter the Numbers:");
   scanf("%d",&n);
   
   for 
   (i = 1; i <= n; i++) 
   {
        sum += i;
    }
  
   printf("Sum is:%.2f",sum);
    return 0;
}