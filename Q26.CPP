#include<stdio.h>
#include<conio.h>

# define cube_macro(x) x*x*x
int cube_fun (int x) { return x * x * x;}
void main()
 {

int i=2 , j , k;


clrscr();

j = cube_fun ( 3+i ) ;
k = cube_macro ( 3+i ) ;

printf("%d  \n",j);
printf("%d",k);

getch();
}
