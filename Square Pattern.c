#include<stdio.h>

/*SQUARE PATTERN
* * * * *
* * * * *
* * * * *
* * * * *
* * * * *
*/
int main(){
int n,i,j;
printf("Enter the number of stars to be printed:");
scanf("%d", &n);
for(i=0;i<n;i++)
{   
    for(j=0;j<n;j++)
    {    
        printf("* ");    
        
    }
        printf("\n");
}
}