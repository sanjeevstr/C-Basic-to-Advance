#include <stdio.h>
int main()
{
    int a[4]; 

    printf("Enter Elements: ");
    for (int i = 0; i < 4; i++)
    {
        scanf("%d", &a[i]);    //{0 3 4 5};
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = i +1 ; j < 4; j++)
        {
            if (a[i] > a[j])
            {
                a[i] = a[i] ^ a[j];
                a[j] = a[i] ^ a[j];
                a[i] = a[i] ^ a[j];
            }   
        }
    }
    printf("Sorted Element First: ");
    for (int i = 0; i < 4; i++)
    {
        printf("%d ", a[i]);
    }
    
}
