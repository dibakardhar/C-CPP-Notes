#include<stdio.h>
#include<conio.h>
#include<string.h>
void main( )
{
clrscr();
char one[20] = "Colin Mackenzie";
char two[20] = "William Lambton";
char three[20] = "George Everest";
printf("Three great surveyers mapped India.");
printf("\nFirst: %s", one);
strcpy(one, two);
printf("\nSecond: %s", one);
strcpy(one, three);
printf("\nThird: %s", one);
getch();
}