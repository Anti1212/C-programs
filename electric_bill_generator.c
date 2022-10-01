#include <stdio.h>
float billcalc();
int main(int argc, char const *argv[])
{
    billcalc();
    return 0;
}

float billcalc(){
    int unit;
    float total;
    printf("\nEnter the unit: ");
    scanf("%d", &unit);
    if (unit<=50 && unit>0)
    {
        total = unit*0.5;
    }
    else if (unit<=150)
    {
        total = (50*0.5) + ((unit-50)*0.75);
    }
    else if (unit<=250)
    {
        total = (50*0.5) + (100*0.75) + ((unit-150)*1.20);
    }
    else
    {
        total = (50*0.5) + (100*0.75) + (100*1.20) + ((unit-250)*1.50);
    }

    total = total + 0.2*total;    
    printf("Your total bill is: Rs. %.2f/-", total);
}