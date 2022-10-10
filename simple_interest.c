#include <stdio.h>

int main()
{
    float principle, time, rate, interest;
	
	printf("Enter principle (amount): ");
    scanf("%f", &principle);

    printf("Enter time: ");
    scanf("%f", &time);

    printf("Enter rate: ");
    scanf("%f", &rate);

    interest = (principle * time * rate) / 100;

    printf("Simple Interest = %f", interest);

    return 0;
}