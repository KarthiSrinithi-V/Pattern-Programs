#include<stdio.h>

/*Right Half Pyramid pattern or Right half triangle
* 
* * 
* * * 
* * * * 
* * * * *
*/
int main(){
int n,i,j;
printf("Enter the number of stars to be printed: ");
scanf("%d", &n);
for(i=0;i<n;i++)
{   
    for(j=0;j<i+1;j++)
    {    
        printf("* ");    
        
    }
        printf("\n");
}
}