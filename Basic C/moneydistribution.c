// 

#include <stdio.h>
void main()
{
    int money,fivehun,fivehun1,thundred,thundred1,hundred,hundred1,fifty,fifty1,twenty,twenty1,ten,ten1,five,five1,one;
    
    printf("Enter the Money you want:");
    scanf("%d",&money);

    fivehun=money/500;
    fivehun1=money%500;
    thundred=fivehun1/200;
    thundred1=fivehun1%200;
    hundred=thundred1/100;
    hundred1=thundred1%100;
    fifty=hundred1/50;
    fifty1=hundred1%50;
    twenty=fifty1/20;
    twenty1=fifty1%20;
    ten=twenty1/10;
    ten1=twenty1%10;
    five=ten1/5;
    five1=ten1%5;
    one=five1/1;


    printf("500 Rupee Note: %d\n",fivehun);
    printf("200 Rupee note: %d\n",thundred);
    printf("100 Rupee Note: %d\n",hundred);
    printf("50 Rupee Note: %d\n",fifty);
    printf("20 Rupee Note: %d\n",twenty);
    printf("10 Rupee Note: %d\n",ten);
    printf("5 Rupee note: %d\n",five);
    printf("1 Rupee note: %d",one);
    

}
