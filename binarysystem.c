
#include<stdio.h>
#include"help.h"

int main()
{
    while(1)
    {
        int choice;
        printf("Select a choice: \n 1. Add \n 2. Multiplication \n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
        if(choice==1)
        {
            long bin1,bin2;
            printf("Enter two bin no.s: ");
            scanf("%ld %ld",&bin1,&bin2);
            int i=0,reminder=0,sum[20];
            while(bin1!=0 || bin2!=0)
            {
                sum[i++]=(bin1%10 + bin2%10 + reminder)%2;
                reminder=(bin1%10 + bin2%10 + reminder)/2;
                bin1=bin1/10;
                bin2=bin2/10;
            }
            if(reminder!=0)
            {
                sum[i++]=reminder;
                i--;
                printf("Sum is: ");
                while(i>=0)
                { 
                    printf("%d\n",sum[i--]);
                }
            }
        }
        else if(choice==2)
        {
            long bin1,bin2,multi=0;
            printf("Enter two bin no.s: ");
            scanf("%ld %ld",&bin1,&bin2);
            int digit,factor=1;
            while(bin2!=0)
            {
                digit=bin2%10;
                if(digit==1)
                {
                    bin1=bin1*factor;
                    multi=binproduct(bin1,multi);
                }
                else
                {
                    bin1=bin1*factor;
                    bin2=bin2/10;
                    factor=10;
                }
            }
            printf("Product is: %ld\n",multi);
        }
        
    }
    return 0;
}