#include<stdio.h>
#include<conio.h>
void main()
{
    int a,i,b=0,c=1,d;
    clrscr();
    printf("Enter your range= ");
    scanf("%d",&a);
    for(i=0;i<=a;i++)
    {
	printf("%d  ",b);
	d=b+c;
	b=c;
	c=d;

    }
    getch();
}