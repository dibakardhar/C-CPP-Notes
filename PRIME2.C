#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i;
    clrscr();
    printf("Enter any number: ");
    scanf("%d",&n);
    for(i=2;i<=n-1;i++)
      if(n%i ==0)
      break;
    if(n==i)
    {
	printf("%d is a prime number",n);
    }
    else
    {
       printf("%d is not a prime number",n);
    }
    getch();
}
