#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int gcd, lcm, n, m, rem, temp1, temp2;
    printf("Enter 2 number:");
    scanf("%d%d", &m, &n);
    temp1 = m;
    temp2 = n;
    while (n != 0)
    {
        rem = m % n;
        m = n;
        n = rem;
    }
    gcd = m;
    lcm = (temp1 * temp2) / gcd;
    printf("Lcm:%d\t", lcm);
    printf("GCD:%d", gcd);
}