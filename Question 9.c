/*Program to Convert even number into its upper nearest odd number
Switch Statement.*/
#include<stdio.h>

int main()
{
    int n,choice;
    printf("enter any value ");
    scanf("%d",&n);
    switch(choice=n%2==0?1:2)
    {
    case 1:
        printf("the upper nearest odd number of a given number is %d",n+1);
        break;
    case 2:
        printf("the number is already an odd number ");
        break;
    }
    return 0;
}
