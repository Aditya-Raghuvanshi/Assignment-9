//C program to find all roots of a quadratic equation using switch case
#include<stdio.h>
#include<math.h>
int main()
{
    int D,a,b,c,choice; //a,b are the coefficient of x^2,x respectively and c is constant of the quadratic equation.
    //D is discriminant .
    float x,y;
    printf("enter the value of coefficients and constant ");
    scanf("%d %d %d",&a,&b,&c);
    D=b*b-(4*a*c);
    switch(choice=D==0?1:D>0?2:3)
    {
    case 1:
        printf("both the roots are equal to %f",(-1)*b/(2.0*a));
        break;
    case 2:
        printf("one root is equal to %f\n",((-1)*b+sqrt(D))/(2.0*a));
        printf("another root is equal to %f\n",((-1)*b-sqrt(D))/(2.0*a));
        break;
    case 3:
        x=(sqrt(D))/(2.0*a);
        y=(-1)*b/(2.0*a);
        printf("one root is equal to %f + %f i \n",y,x);
        printf("another root is equal to %f - %f i \n",y,x);
        break;
    }
    return 0;
}
