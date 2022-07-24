/*Write a menu driven program with the following options:
a. Addition
b. Subtraction
c. Multiplication
d. Division
e. Exit*/
#include<stdio.h>

int main()
{
    int i=1,choice,a,b;
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Exit\n");

    while(i)
    {
        printf("enter your choice\n ");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            printf("enter two number ");
            scanf("%d %d",&a,&b);
            printf("sum is %d\n",a+b);
            break;
        case 2:
            printf("enter two number ");
            scanf("%d %d",&a,&b);
            printf("subtration is %d\n",a-b);
            break;
        case 3:
            printf("enter two number ");
            scanf("%d %d",&a,&b);
            printf("multiplication is %d\n",a*b);
            break;
        case 4:
            printf("enter two number ");
            scanf("%d %d",&a,&b);
            printf("division is %d\n",a/b);
            break;
        case 5:
            printf("Exit");
            break;
        }
        if(choice==5)
           break;
    }
    return 0;

}
