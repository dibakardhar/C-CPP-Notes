#include<stdio.h>
#include<conio.h>
void main()
{
   int a,b,c,d,e,f;
   float g;
   clrscr();
   printf("\n Enter first number: ");
   scanf("%d",&a);
   printf("\n Enter second number: ");
   scanf("%d",&b);
   printf("\n --------------------------------------------");
   printf("\n 1. Addition.");
   printf("\n 2. Subtraction. ");
   printf("\n 3. Multiplication");
   printf("\n 4. Division");
   printf("\n --------------------------------------------");
   printf("\n Enter your choice= ");
   scanf("%d",&c);

   switch(c)
   {
       case 1: d=a+b;
	       printf("\n Addition = %d",d);
	       break;
       case 2: e=a-b;
	       printf("\n Subtraction = %d",e);
	       break;
       case 3: f=a*b;
		  printf("\n Multiplication = %d",f);
	       break;
       case 4: g=float(a) / float(b);
	       printf("\n Division is = %f",g);
	       break;
       default:
		printf("\n You have entered a wrong choice");
		break;
   }

   getch();
}
