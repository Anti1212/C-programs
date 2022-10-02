
#include <stdio.h>

int main()
{
  int x,i,p=0;
 
    printf("Enter the numbers\n");
    scanf("%d",&x);
    for(i=1;i<=x;i++)
    {
        if(x%i==0)
        {
            p++;
        }
    }
    if(p==2)
    {
        printf("%d is a prime number\n",x);
    }
    else
    {
        printf("%d is not a prime number\n",x);
    }
    
return 0;
}
