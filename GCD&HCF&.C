#include<stdio.h>
#include<conio.h>
void main()
{
   int a,b,s,i,hcf,lcm;
   clrscr();
   printf("Enter first number= ");
   scanf("%d",&a);
   printf("Enter second number= ");
   scanf("%d",&b);
   if (a<b)
   {
       s=a;
   }
   else
       s=b;
   for(i=1;i<=s;i++)
   {
       if(a%i==0 && b%i==0)
       {
	   hcf=i;
       }
   }
   printf("HCF = %d",hcf);
   printf("\n");
   lcm=(a*b)/hcf;
   printf("LCM = %d",lcm);
   getch();
}


