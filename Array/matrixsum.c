// 2D Array Addition

#include <stdio.h>
void main ()
       {
	int a[10][10],b[10][10],c[10][10];

	printf("Enter Elements of First Matrix: \n");
	for(int i=0; i<2; i++)
	   for(int j=0; j<2; j++)
	      scanf("%d",&a[i][j]);

	printf("Enter Element of 2nd Matrix: \n");
	for(int i=0; i<2; i++)
	   for(int j=0; j<2; j++)
	      scanf("%d",&b[i][j]);

    for(int i=0; i<2; i++)
       for(int j=0; j<2; j++)
          c[i][j]=a[i][j]+b[i][j];

    printf("Sum of two Matrix is: \n");
    for(int i=0; i<2; i++)
    {
       for(int j=0; j<2; j++)
          printf("%d\t",c[i][j]);
       printf("\n");
    }

}