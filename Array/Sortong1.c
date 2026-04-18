#include <stdio.h>
void main()

{
    int a[4],temp;

    printf("Enter 4 element: ");
    for (int i = 0; i < 4; i++)
    {
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = i + 1; j < 4 ; j++)
        {
            if (a[i] > a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
            
        }
        
    }
    printf("Acending Order: ");
    for (int i = 0; i < 4; i++)
    {
        printf("%d",a[i]);
    }
    
    
    
}