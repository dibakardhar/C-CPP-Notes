#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
clrscr();
int *p ;
p = (int *)malloc(30*sizeof(int));
 
printf("%d",p);

getch();

}