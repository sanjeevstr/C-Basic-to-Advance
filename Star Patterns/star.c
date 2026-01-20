// Before running this code, make sure to declare the n varible and set its value.

// This code demonstrates various star patterns using nested loops in C.

#include <stdio.h>
int main() {
    int n = 4;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++)
            printf("* ");
        printf("\n");
    }

// output:  * * * *
//          * * * *
//          * * * *
//          * * * * 


    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++)
            printf("* ");
        printf("\n");
    }


// output:  *
//          * *
//          * * *
//          * * * *



    for(int i = n; i >= 1; i--) {
        for(int j = 1; j <= i; j++)
            printf("* ");
        printf("\n");
    }


// output:  * * * *
//          * * *
//          * *
//          *



    for(int i = 1; i <= n; i++) {
        for(int s = n - i; s > 0; s--)
            printf("  ");
        for(int j = 1; j <= i; j++)
            printf("* ");
        printf("\n");
    }


// output:        *
//              * *
//            * * *
//          * * * *


    // Upper pyramid

    for(int i = 1; i <= n; i++) {
        for(int s = n - i; s > 0; s--)
            printf("  ");
        for(int j = 1; j <= 2*i - 1; j++)
            printf("* ");
        printf("\n");
    }

    //Lower pyramid

    for(int i = n; i >= 1; i--) {
        for(int s = n - i; s > 0; s--)
            printf("  ");
        for(int j = 1; j <= 2*i - 1; j++)
            printf("* ");
        printf("\n");
    }



// output:       *
//             * * *
//           * * * * *
//         * * * * * * *
//        * * * * * * * *
//         * * * * * * *
//           * * * * *
//             * * *
//               *



    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            if(i == 1 || i == n || j == 1 || j == n)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }


// output:  * * * *
//          *     *
//          *     *
//          * * * *



// Butterfly pattern

    // Upper part
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++)
            printf("* ");
        for(int s = 1; s <= 2*(n-i); s++)
            printf("  ");
        for(int j = 1; j <= i; j++)
            printf("* ");
        printf("\n");
    }

    // Lower part
    for(int i = n; i >= 1; i--) {
        for(int j = 1; j <= i; j++)
            printf("* ");
        for(int s = 1; s <= 2*(n-i); s++)
            printf("  ");
        for(int j = 1; j <= i; j++)
            printf("* ");
        printf("\n");
    }


// output:  *             *
//          * *         * *
//          * * *     * * *
//          * * * * * * * *
//          * * * * * * * *
//          * * *     * * *
//          * *         * *          
//          *             *




    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            printf("%d", j);
            if(j < i)
                printf(" * ");
        }
        printf("\n");
    }


// output:  1
//          1 * 2
//          1 * 2 * 3
//          1 * 2 * 3 * 4




    for(int i = 1; i <= n; i++) {
        for(int s = n - i; s > 0; s--)
            printf("  ");

        for(int j = 1; j <= i; j++) {
            printf("%d", j);
            if(j < i)
                printf(" * "); 
        }
        printf("\n");
    }


// output:        1
//              1 * 2
//            1 * 2 * 3
//          1 * 2 * 3 * 4

    return 0;
}

