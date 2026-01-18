#include <stdio.h>
#include <string.h>
void main()
{
    char name[20],address[20];
    int age,number;
    float sallary;
    printf("enter your name : ");
    scanf("%s",&name);

    printf("enter yor address : ");
    scanf("%s",&address);

   
    printf("enter your age : ");
    scanf("%s",&age);
    printf("enter your mobile no :");
    scanf("%lld",&number);
    printf("enter your sallary : ");
    scanf("%.2f",&sallary);
    
    printf("Hello %s , Nice to meet you !\n",name);
    printf("you live in %s \n",address);
    printf("%s ,You are %d year's old.\n",name,age);
    printf("your mobile number is %lld\n",number);
    printf("Your monthly income is %.2f \n",sallary);


}