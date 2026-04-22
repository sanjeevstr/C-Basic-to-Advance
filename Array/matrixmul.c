#include <stdio.h>
void main()
{
    int i,j,k;
    int a[10][10],b[10][10],c[10][10];

    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d",&a[i][j]);
        }
        
    }
    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d",&b[i][j]);
        }
        
    }
    printf("Multiplication of two matrices is:\n");
    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 2; j++)
        {
            for ( k = 0; k < 2; k++)
            {
                c[i][j]+=a[i][k]*b[k][j];
            }
            printf("%d ",c[i][j]);
        }
        printf("\n");
        
    }
    
}