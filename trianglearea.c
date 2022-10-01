#include<stdio.h>
#include<conio.h>
void main();
{
  int b,h;
  clrscr();
  printf("Enter the base of triangle:\n");
  scanf("%d",&b);
  printf("Enter the height of triangle:\n");
  scanf("%d",h);
  printf("Area of the triangle is:\n%d",0.5*b*h);
  getch();
}
