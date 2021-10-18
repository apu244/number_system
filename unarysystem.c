#include<stdio.h>
#include<string.h>
#include"help.h"

int main()
{
    while(1)
    {
        int choice;
        printf("Select a choice: \n 1.Addition \n 2.Multiplication \n");
        printf("Enter a choice: ");
        scanf("%d", &choice);
        if(choice==1)
        {
            char un1[500],un2[500];
            printf("Enter two un no.s: ");
            scanf("%s %s", un1,un2);
            if(validun(un1)==1 && validun(un2)==1)
            {
                strcat(un1,un2);
                printf("Sum is: %s\n",un1);
            }
        }
        else if(choice==2)
        {
            char un1[500],un2[500];
            printf("Enter two un no.s: ");
            scanf("%s %s", un1,un2);
            if(validun(un1)==1 && validun(un2)==1)
            {
                printf("Product is: ");
                for(int i=0;i<strlen(un2);i++)
                {
                    printf("%s",un1);
                }
                printf("\n");
            }
        }
        
    }
    return 0;
}