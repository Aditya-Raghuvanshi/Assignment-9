//Write a program which takes the month number as an input and display number of days in that month.
#include<stdio.h>

int main()
{
    int m; //m is month number.
    printf("enter month number ");
    scanf("%d",&m);
    switch(m)
    {
    case 1:
        printf("no. of days in 1st month equal to 31");
        break;
    case 2:
        printf("no. of days in 2nd month equal to 28");
        break;
    case 3:
        printf("no. of days in 3rd month equal to 31");
        break;
    case 4:
        printf("no. of days in 4th month equal to 30");
        break;
    case 5:
        printf("no. of days in 5th month equal to 31");
        break;
    case 6:
        printf("no. of days in 6th month equal to 30");
        break;
    case 7:
        printf("no. of days in 7th month equal to 31");
        break;
    case 8:
        printf("no. of days in 8th month equal to 31");
        break;
    case 9:
        printf("no. of days in 9th month equal to 30");
        break;
    case 10:
        printf("no. of days in 10th month equal to 31");
        break;
    case 11:
        printf("no. of days in 11th month equal to 30");
        break;
    case 12:
        printf("no. of days in 12th month equal to 31");
        break;
    }
    return 0;
}
