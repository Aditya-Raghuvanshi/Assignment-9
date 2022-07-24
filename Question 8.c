/*8. Program to convert a positive number into a negative number and negative
number into a positive number using a switch statement.*/
#include<stdio.h>

int main()
{
    int n,choice;
    printf("enter any value ");
    scanf("%d",&n);
    switch(choice=n>0?1:2)
    {
    case 1:
        printf("the negative of a given positive number is %d",(-1)*n);
        break;
    case 2:
        printf("the positive of a given negative number is %d",(-1)*n);
        break;
    }
    return 0;
}
