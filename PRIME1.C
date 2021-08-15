#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,s=0,r;
    clrscr();
    printf("Enter any number: ");
    scanf("%d",&n);
    for(i=2;i<=n/2 && s==0; i++)
    {
	r=n%i;
	if(r==0)
	  {
	     s=1;
	  }
    }
    if(s==0)
    {
	printf("\n %d is a prime number",n);
    }
    else
    {
	printf("\n %d is not a prime number",n);
    }
    getch();
}
