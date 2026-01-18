// Convert GB into MB, KB, and Bytes

#include <stdio.h>
void main() {
    int gb,mb,kb,byte;
    printf("Enter the value in GB: ");
    scanf("%d",&gb);
    mb = gb * 1024;
    kb = mb * 1024;
    byte = kb * 1024;
    printf("The value in MB is: %d\n",mb);
    printf("The value in KB is: %ld\n",kb);
    printf("The value in Bytes is: %lld\n",byte);

}