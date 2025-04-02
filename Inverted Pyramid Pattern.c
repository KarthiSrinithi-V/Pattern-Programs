#include <stdio.h>

/* Inverted Pyramid Pattern
* * * * *
* * * *
* * *
* * 
*   */

int main()
{
   int n,i,j;
   printf("Enter the number of stars: ");
   scanf("%d", &n);
   for(i=0;i<n;i++)
   {
       for(j=0;j<n-i;j++)
       {
           printf("* ");
       }
       printf("\n");
   }
}
