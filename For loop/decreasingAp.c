#include <stdio.h>

int main() {
    for (int a = 100; a > 0; a -= 3) {
        if (a % 2 == 1) {
            printf("%d ", a);
        }
    }
    return 0;
}
