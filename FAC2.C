#include<stdio.h>
#include<conio.h>

long factorial(int);

void main()
{
   int number;
   long fact = 1;
   clrscr();

   printf("Enter a number to calculate it's factorial= ");
   scanf("%d",&number);

   printf("%d! = %ld\n", number, factorial(number));

   getch();
}

long factorial(int n)
{
   int c;
   long result = 1;

   for( c = 1 ; c <= n ; c++ )
	 result = result*c;

   return ( result );
   getch();
}
