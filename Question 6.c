//Program to check whether a year is a leap year or not. Using switch statement.
#include<stdio.h>

int main()
{
    int y,x; //y is year.
    printf("enter the year ");
    scanf("%d",&y);
    switch(x=(y%400==0?1:y%100==0?2:y%4==0?3:4))
    {
    case 1:
        printf("it is a leap year");
        break;
    case 2:
        printf("it is a not a leap year");
        break;
    case 3:
        printf("it is a leap year");
        break;
    case 4:
        printf("it is not leap year ");
        break;
    }
    return 0;
}
