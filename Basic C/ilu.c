#include <stdio.h>
#include <windows.h>

void setColor(int color) {
    
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i = 1; i <=n; i++)
    {
        
        printf("%d. I love you <3 \n",i);
        Sleep(300);
        if (i % 2 == 0) {
            setColor(12); // Red for even
        } else {
            setColor(11); // Cyan for odd
        }
    }
    
    return 0;
}