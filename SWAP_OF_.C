#include<stdio.h>
#include<conio.h>
void main()
{
   int a,b;
   clrscr();
   printf("enter first number= ");
   scanf("%d",&a);
   printf("enter second number= ");
   scanf("%d",&b);
   a=a+b;
   b=a-b;
   a=a-b;
   printf("\n first number= %d",a);
   printf("\n second number= %d",b);
   getch();
}