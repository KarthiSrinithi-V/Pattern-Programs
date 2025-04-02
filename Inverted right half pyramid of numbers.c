#include <stdio.h>

/* Inverted right half pyramid of numbers
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1
*/

int main()
{
    int i,j,n;
    printf("Enter number of values to be printed: ");
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            printf("%d ", j+1);
        }
        printf("\n");
    }
}