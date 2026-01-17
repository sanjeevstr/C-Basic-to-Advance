// Traffic Light

#include <stdio.h>
void main()
{
    char light;

    printf("Enter Trafic light Colour (R/Y/G): ");
    scanf("%c",&light);

    if (light == 'R' || light == 'r' )
    {
        printf ("%c For Red light --> STOP ",light);
    }
    else if (light == 'Y' || light == 'y' )
    {
        printf("%c For Yellow Light --> READY",light);
    }
    else if (light == 'G' || light == 'g')
    {
        printf("%c For Green light --> GO",light);
    }
    else
    {
        printf("%c is a Invalid Charater",light);
    }
    
}