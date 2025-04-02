#include <stdio.h>

/* Square number pattern 
1 1 1 1 1
2 2 2 2 2
3 3 3 3 3
4 4 4 4 4
5 5 5 5 5
*/

int main()
{
    int i,j,n;
    printf("Enter number of values to be printed: ");
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ", i+1);
        }
        printf("\n");
    }
}