/* Program for a simple calculator 
in C using Switch_Case */
#include <stdio.h>
#include <conio.h>
main()
{
/* Variable declarations */
        int i,a,b,choice,result;
        void menu(int a,int b,int choice);
        printf("ENTER TWO NUMBERS:n");
        printf("a=:");
        scanf("%d",&a);
        printf("b=:");
        scanf("%d",&b);
        i=0;
        while(choice != 6)
        {
            menu(a,b,choice);
            i++;
        }
        getch();
        return 0;
}
void menu(int a, int b, int choice)
{
        int result,i;
        for(i=0;i < 35;i++)
        printf("*"); printf("\n\n");
        printf("\tC CALCULATOR\n\n");
        for(i=0;i < 35;i++)
        printf("_"); printf("\n\n");
        printf("1.ADDITION\n");
        printf("2.SUBTRACTION\n");
        printf("3.MULTIPLICATION\n");
        printf("4.DIVISION\n");
        printf("5.MODULO \n");
        printf("6.CLOSE\n");
        for(i=0;i < 35;i++)
        printf("_"); printf("\n\n");
        printf("Enter your Choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            result = a + b;
            for(i=0;i < 35;i++)
            printf("_"); printf("\n\n");
            printf("Result=%d\n",result);
/* Addition Operation */
            printf("\n\n");
            break;
        case 2:
            result = a - b;
            for(i=0;i < 35;i++)
            printf("_"); printf("\n\n");
            printf("Result=%d\n",result); 
/* Subtraction */
            printf("\n\n");
            break;
        case 3:
            result = a * b;
            for(i=0;i < 35;i++)
            printf("_"); printf("\n\n");
            printf("Result=%d\n",result); 
/* Multiplication */
            break;
        case 4:
            result = a/b;
            for(i=0;i < 35;i++)
            printf("_"); printf("\n\n");
            printf("Result=%d\n",result); 
/* Division operation */
            printf("\n\n");
            break;
        case 5:
            result = a % b;
            for(i=0;i < 35;i++)
            printf("_"); printf("\n\n");
            printf("Result=%d\n",result); 
/* Modulo operation */
            printf("\n\n");
            break;
            default:
            exit(0);
    }
}