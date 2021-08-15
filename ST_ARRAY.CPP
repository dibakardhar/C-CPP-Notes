// Implementation stack using array

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define MAX 10
int st[MAX],top=-1;
void push(int st [],int val);
int pop(int st[]);
void display(int st []);
void main()
{
int val,option;
do
{
 printf("\n ** MAIN MENU ***");
 printf("\n 1. PUSH");
 printf("\n 2. POP");
 printf("\n 3. DISPLAY");
 printf("\n 4. EXIT");
 printf("\n Enter your option:");
 scanf("%d",&option);
 switch(option)
 {
 case 1:
	 printf("\n Enter the number to be pushed on stack:");
	 scanf("%d",&val);
	 push(st,val);
	 break;
 case 2:
	val=pop(st);
	if(val!=-1)
	printf("\n The value deleted from stack is:%d", val);
	break;

 case 3:
	display(st);
	break;
	}
	}
	while(option!=4);
	getch();
	}
	void push(int st[],int val)
	{
	if(top==MAX-1)
	{
	printf("\n STACK OVERFLOW");
	}
	else
	{
	top++;
	st[top]=val;
	}
	}
	int pop(int st[])
	{
	int val;
	if(top==-1)
	{
	printf("\n STACK UNDERFLOEW");
	return -1;
	}
	else
	{
	val=st[top];
	top--;
	return val;
	}
	}
	void display(int st[])
	{
	int i;
	if (top==-1)
	printf("\n STACK IS EMPTY");
	else
	{
	  for(i=top;i>=0;i--)
	  printf("\n %d ", st[i]);
	  printf("\n ");
	  }
	  }