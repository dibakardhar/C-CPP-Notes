#include<stdio.h>
#include<conio.h>
void main()
{
   int a;
   clrscr();
   printf("Enter any number= ");
   scanf("%d",&a);
   if(a%2 == 0)
   {
      printf("\n Even number");
   }
   else
      printf("\n Odd number");

   getch();
}
