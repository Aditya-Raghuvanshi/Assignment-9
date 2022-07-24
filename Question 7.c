/*Program to take the value from the user as input electricity unit charges
and calculate total electricity bill according to the given condition . Using
the switch statement.
For the first 50 units Rs. 0.50/unit
For the next 100 units Rs. 0.75/unit
For the next 100 units Rs. 1.20/unit
For units above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill.*/
#include<stdio.h>

int main()
{
    int unit,choice;
    float elec_bill,total_bill;
    printf("1.unit is less than or equal to 50\n");
    printf("2.unit is less than or equal to 150\n");
    printf("3.unit is less than or equal to 250\n");
    printf("4.unit is above 250 \n");
    printf("enter your choice ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
            printf("enter the no. of units ");
            scanf("%d",&unit);
            elec_bill=unit*0.50;
            total_bill=elec_bill+(0.20*elec_bill);
            printf("your total electricity bill by including additional surcharge of 20 percent is %f\n",total_bill);
            break;
        case 2:
            printf("enter the no. of units ");
            scanf("%d",&unit);
            elec_bill=((unit-50)*0.75)+(50*0.50);
            total_bill=elec_bill+(0.20*elec_bill);
            printf("your total electricity bill by including additional surcharge of 20 percent is %f\n",total_bill);
            break;
        case 3:
            printf("enter the no. of units ");
            scanf("%d",&unit);
            elec_bill=((unit-150)*1.20)+(100*0.75)+(50*0.50);
            total_bill=elec_bill+(0.20*elec_bill);
            printf("your total electricity bill by including additional surcharge of 20 percent is %f\n",total_bill);
            break;
        case 4:
            printf("enter the no. of units ");
            scanf("%d",&unit);
            elec_bill=((unit-250)*1.50)+(100*1.20)+(100*0.75)+(50*0.50);
            total_bill=elec_bill+(0.20*elec_bill);
            printf("your total electricity bill by including additional surcharge of 20 percent is %f\n",total_bill);
            break;
    }
    return 0;
}
