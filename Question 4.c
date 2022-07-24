/*Write a menu driven program with the following options:
a. Check whether a given set of three numbers are lengths of an
isosceles triangle or not
b. Check whether a given set of three numbers are lengths of sides of
a right angled triangle or not
c. Check whether a given set of three numbers are equilateral triangle
or not
d. Exit*/
#include<stdio.h>

int main()
{
    int i=1,choice,a,b,c;
    printf("1. Check whether a given set of three numbers are lengths of an isosceles triangle or not\n");
    printf("2. Check whether a given set of three numbers are lengths of sides of a right angled triangle or not\n");
    printf("3. Check whether a given set of three numbers are equilateral triangle or not\n");
    printf("4. Exit\n");

    while(i)
    {
        printf("enter your choice\n ");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            printf("enter three numbers  ");
            scanf("%d %d %d",&a,&b,&c);
            if(a==b||b==c||c==a)
                printf("these are the sides of isosceles traingle \n");
            else
                printf("these are the Not sides of isosceles traingle \n");
            break;
        case 2:
            printf("enter three numbers  ");
            scanf("%d %d %d",&a,&b,&c);
            if(a*a==(b*b+c*c)||b*b==(a*a+c*c)||c*c==(a*a+b*b))
                printf("these are the sides of right angled traingle \n");
            else
                printf("these are the Not sides of right angled traingle \n");
            break;
        case 3:
            printf("enter three numbers  ");
            scanf("%d %d %d",&a,&b,&c);
            if(a==b&&b==c&&c==a)
                printf("these are the sides of Equilateral traingle \n");
            else
                printf("these are the Not sides of Equilateral traingle \n");
            break;
        case 4:
            printf("Exit");
            break;
        }
        if(choice==4)
           break;
    }
    return 0;

}
