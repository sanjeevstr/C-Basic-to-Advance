// profit or loss

#include<stdio.h>
void main()
{
    int sp,cp,profit,loss;

    printf("Enter the cost of the product: ");
    scanf("%d",&cp);
    printf("Enter Seliing price: ");
    scanf("%d",&sp);
    profit= sp-cp;
    loss= cp-sp;


    if (sp>cp)
    {
        printf("the Profit is %d\n",profit);
    }
    else if (cp>sp)
    {
        printf("the loss is %d",loss);
    }
    else if(cp==sp)
    {
        printf("No loss no gain");
    }
    
    
    
        
    
}
    
    


