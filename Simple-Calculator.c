#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b ,result=0,choice;
    printf("you have following choice");
    printf("\n1.Addition");
    printf("\n2.subtraction");
    printf("\n3.multiplication");
    printf("\n4.Division");
    printf("\n5.Exit");
    printf("\nEnter your choice");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
            printf("enter two number");
            scanf("\n%d%d",&a,&b);
            result=a+b;
            printf("addition is %d",result);
            break;
        case 2:
            printf("enter two number");
            scanf("%d%d",&a,&b);
            result=a-b;
            printf("subtraction is %d",result);
            break;
        case 3:
            printf("enter two number");
            scanf("%d%d",&a,&b);
            result=a*b;
            printf("multiplication is %d",result);
            break;
        case 4:
            printf("enter two number");
            scanf("%d%d",&a,&b);
            result=a/b;
            printf("Division is %d",result);
            break;
        case 5:
            exit(1);
        default :
            printf("invalid choice");
    }
getch();
}
