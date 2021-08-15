#include<stdio.h>
#include<conio.h>
void main()
{
    int a=0,b=1,c,n;
    clrscr();
    printf("Enter the range: ");
    scanf("%d",&n);
    printf("%2d",a);
    printf("%2d",b);
    c=a+b;
    while(c<=n)
    {
	a=b;
	b=c;
	printf("%2d",c);
	c=a+b;
    }
    getch();
}
