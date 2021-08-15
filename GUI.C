#include<stdio.h>
#include<conio.h>
#include<graphics.h>

int a,b,c,d,e,f,g,h;
#include<graph.c>
void main ()
{
gui();
closegraph();
getch();
}
gui()
{
a=b=c=d=e=f=g=h=0;
graph();
action();
return ;
}
action()
{
if((a==1||a==0)&&(b==1||b==0)&&(c==1||c==0)&&(d==1||d==0)&&(e==1||e==0)&&(f==1||f==0)&&(g==1||g==0)&&(h==1||h==0))
{
if(a==1&&b==0&&c==0&&d==0&&e==0&&f==0&&g==0&&h==0)
outtextxy(80,305,"abc");
else if(b==1&&a==0&&c==0&&d==0&&e==0&&f==0&&g==0&&h==0)
outtextxy(80,305,"abC");
else if(c==1&&b==0&&a==0&&d==0&&e==0&&f==0&&g==0&&h==0)
outtextxy(80,305,"aBC");
else if(d==1&&b==0&&c==0&&a==0&&e==0&&f==0&&g==0&&h==0)
outtextxy(80,305,"aBc");
else if(e==1&&b==0&&c==0&&d==0&&a==0&&f==0&&g==0&&h==0)
outtextxy(80,305,"Abc");
else if(f==1&&b==0&&c==0&&d==0&&e==0&&a==0&&g==0&&h==0)
outtextxy(80,305,"AbC");
else if(g==1&&b==0&&c==0&&d==0&&e==0&&f==0&&a==0&&h==0)
outtextxy(80,305,"ABC");
else if(h==1&&b==0&&c==0&&d==0&&e==0&&f==0&&g==0&&a==0)
outtextxy(80,305,"ABc");

//2 BASE 0
else if(a==1&&b==1&&c==0&&d==0&&e==0&&f==0&&g==0&&h==0)
outtextxy(80,305,"ab");
else if(a==1&&c==1&&b==0&&d==0&&e==0&&f==0&&g==0&&h==0)
outtextxy(80,305,"abc+abC");
else if(a==1&&d==1&&c==0&&b==0&&e==0&&f==0&&g==0&&h==0)
outtextxy(80,305,"ac");
else if(a==1&&e==1&&c==0&&d==0&&b==0&&f==0&&g==0&&h==0)
outtextxy(80,305,"bc");
else if(a==1&&f==1&&c==0&&d==0&&e==0&&b==0&&g==0&&h==0)
outtextxy(80,305,"abc+AbC");
else if(a==1&&g==1&&c==0&&d==0&&e==0&&f==0&&b==0&&h==0)
outtextxy(80,305,"abc+ABC");
else if(a==1&&h==1&&c==0&&d==0&&e==0&&f==0&&g==0&&b==0)
outtextxy(80,305,"abc+ABc");


//2 BASE 1
else if(b==1&&c==1&&a==0&&d==0&&e==0&&f==0&&g==0&&h==0)
outtextxy(80,305,"aC");
else if(b==1&&d==1&&c==0&&a==0&&e==0&&f==0&&g==0&&h==0)
outtextxy(80,305,"abC+aBc");
else if(b==1&&e==1&&c==0&&d==0&&a==0&&f==0&&g==0&&h==0)
outtextxy(80,305,"abC+Abc");
else if(b==1&&f==1&&c==0&&d==0&&e==0&&a==0&&g==0&&h==0)
outtextxy(80,305,"bC");
else if(b==1&&g==1&&c==0&&d==0&&e==0&&f==0&&a==0&&h==0)
outtextxy(80,305,"abC+ABC");
else if(b==1&&h==1&&c==0&&d==0&&e==0&&f==0&&g==0&&a==0)
outtextxy(80,305,"abC+ABc");

//2 BASE 2
else if(c==1&&d==1&&a==0&&b==0&&e==0&&f==0&&g==0&&h==0)
outtextxy(80,305,"aB");
else if(c==1&&e==1&&b==0&&d==0&&a==0&&f==0&&g==0&&h==0)
outtextxy(80,305,"aBC+Abc");
else if(c==1&&f==1&&a==0&&d==0&&e==0&&b==0&&g==0&&h==0)
outtextxy(80,305,"aBC+AbC");
else if(c==1&&g==1&&a==0&&d==0&&e==0&&f==0&&b==0&&h==0)
outtextxy(80,305,"BC");
else if(c==1&&h==1&&a==0&&d==0&&e==0&&f==0&&g==0&&b==0)
outtextxy(80,305,"aBC+ABc");

//2 BASE 3
else if(d==1&&e==1&&c==0&&a==0&&b==0&&f==0&&g==0&&h==0)
outtextxy(80,305,"aBc+Abc");
else if(d==1&&f==1&&c==0&&a==0&&e==0&&b==0&&g==0&&h==0)
outtextxy(80,305,"aBc+AbC");
else if(d==1&&g==1&&c==0&&a==0&&e==0&&f==0&&b==0&&h==0)
outtextxy(80,305,"aBc+ABc");
else if(d==1&&h==1&&c==0&&a==0&&e==0&&f==0&&g==0&&b==0)
outtextxy(80,305,"Bc");

//2 BASE 4
else if(e==1&&f==1&&c==0&&d==0&&a==0&&b==0&&g==0&&h==0)
outtextxy(80,305,"AB");
else if(e==1&&g==1&&c==0&&d==0&&a==0&&f==0&&b==0&&h==0)
outtextxy(80,305,"Abc+ABC");
else if(e==1&&h==1&&c==0&&d==0&&a==0&&f==0&&g==0&&b==0)
outtextxy(80,305,"Ac");

//2 BASE 5
else if(f==1&&g==1&&c==0&&d==0&&e==0&&a==0&&b==0&&h==0)
outtextxy(80,305,"AC");
else if(f==1&&h==1&&c==0&&d==0&&e==0&&a==0&&g==0&&b==0)
outtextxy(80,305,"AbC+ABc");

//2 BASE 6
else if(g==1&&h==1&&c==0&&d==0&&e==0&&f==0&&a==0&&b==0)
outtextxy(80,305,"AB");

//3 BASE 0 && 1
else if(a==1&&b==1&&c==1&&d==0&&e==0&&f==0&&g==0&&h==0)
outtextxy(80,305,"ab+aC");
else if(a==1&&b==1&&d==1&&c==0&&e==0&&f==0&&g==0&&h==0)
outtextxy(80,305,"ab+ac");
else if(a==1&&b==1&&e==1&&d==0&&c==0&&f==0&&g==0&&h==0)
outtextxy(80,305,"ab+bc");
else if(a==1&&b==1&&f==1&&d==0&&e==0&&c==0&&g==0&&h==0)
outtextxy(80,305,"ab+bC");
else if(a==1&&b==1&&g==1&&d==0&&e==0&&f==0&&c==0&&h==0)
outtextxy(80,305,"ab+ABC");
else if(a==1&&b==1&&h==1&&d==0&&e==0&&f==0&&g==0&&c==0)
outtextxy(80,305,"ab+ABc");

//3 BASE 0 && 2
else if(a==1&&c==1&&d==1&&b==0&&e==0&&f==0&&g==0&&h==0)
outtextxy(80,305,"ac+aB");
else if(a==1&&c==1&&e==1&&b==0&&d==0&&f==0&&g==0&&h==0)
outtextxy(80,305,"bc+aBC");
else if(a==1&&c==1&&f==1&&d==0&&b==0&&e==0&&g==0&&h==0)
outtextxy(80,305,"abc+AbC+aBC");
else if(a==1&&c==1&&g==1&&d==0&&e==0&&b==0&&f==0&&h==0)
outtextxy(80,305,"abc+BC");
else if(a==1&&c==1&&h==1&&d==0&&e==0&&f==0&&b==0&&g==0)
outtextxy(80,305,"abc+aBC+ABc");

//3 base 0 && 3
else if(a==1&&d==1&&e==1&&b==0&&c==0&&f==0&&g==0&&h==0)
outtextxy(80,305,"ac+bc");
else if(a==1&&d==1&&f==1&&c==0&&b==0&&e==0&&g==0&&h==0)
outtextxy(80,305,"ac+AbC");
else if(a==1&&d==1&&g==1&&c==0&&e==0&&b==0&&f==0&&h==0)
outtextxy(80,305,"ac+ABC");
else if(a==1&&d==1&&h==1&&c==0&&e==0&&f==0&&b==0&&g==0)
outtextxy(80,305,"ac+Bc");

//3 base 0 && 4
else if(a==1&&e==1&&f==1&&c==0&&b==0&&d==0&&g==0&&h==0)
outtextxy(80,305,"bc+Ab");
else if(a==1&&e==1&&g==1&&c==0&&d==0&&b==0&&f==0&&h==0)
outtextxy(80,305,"bc+ABC");
else if(a==1&&e==1&&h==1&&c==0&&d==0&&f==0&&b==0&&g==0)
outtextxy(80,305,"bc+Ac");

//3 base 0 && 5
else if(a==1&&f==1&&g==1&&c==0&&d==0&&b==0&&e==0&&h==0)
outtextxy(80,305,"abc+AC");
else if(a==1&&f==1&&h==1&&c==0&&d==0&&e==0&&b==0&&g==0)
outtextxy(80,305,"abc+AbC+ABc");

//3 base 0 && 6
else if(a==1&&g==1&&h==1&&c==0&&d==0&&e==0&&b==0&&f==0)
outtextxy(80,305,"abc+AB");

//3 base 1 && 2
else if(b==1&&c==1&&d==1&&a==0&&e==0&&f==0&&g==0&&h==0)
outtextxy(80,305,"aC+aB");
else if(b==1&&c==1&&e==1&&a==0&&d==0&&f==0&&g==0&&h==0)
outtextxy(80,305,"aC+Abc");
else if(b==1&&c==1&&f==1&&d==0&&a==0&&e==0&&g==0&&h==0)
outtextxy(80,305,"bC+aC");
else if(b==1&&c==1&&g==1&&d==0&&e==0&&a==0&&f==0&&h==0)
outtextxy(80,305,"BC+aC");
if(b==1&&c==1&&h==1&&d==0&&e==0&&f==0&&a==0&&g==0)
outtextxy(80,305,"AC+ABc");

//3 base 1 && 3
if(b==1&&d==1&&e==1&&a==0&&c==0&&f==0&&g==0&&h==0)
outtextxy(80,305,"abC+aBc+Abc");
else if(b==1&&d==1&&f==1&&c==0&&a==0&&e==0&&g==0&&h==0)
outtextxy(80,305,"bC+aBc");
else if(b==1&&d==1&&g==1&&c==0&&e==0&&a==0&&f==0&&h==0)
outtextxy(80,305,"abC+ABC+aBc");
else if(b==1&&d==1&&h==1&&c==0&&e==0&&f==0&&a==0&&g==0)
outtextxy(80,305,"abC+Bc");

//3 base 1 && 4
else if(b==1&&e==1&&f==1&&c==0&&a==0&&d==0&&g==0&&h==0)
outtextxy(80,305,"bC+Ab");
else if(b==1&&e==1&&g==1&&c==0&&d==0&&a==0&&f==0&&h==0)
outtextxy(80,305,"abC+ABC+Abc");
else if(b==1&&e==1&&h==1&&c==0&&d==0&&f==0&&a==0&&g==0)
outtextxy(80,305,"abC+Ac");

//3 base 1 && 5
else if(b==1&&f==1&&g==1&&c==0&&d==0&&a==0&&e==0&&h==0)
outtextxy(80,305,"bC+AC");
else if(b==1&&f==1&&h==1&&c==0&&d==0&&e==0&&a==0&&g==0)
outtextxy(80,305,"bC+ABc");

//3 base 1 && 6
else if(b==1&&g==1&&h==1&&c==0&&d==0&&e==0&&a==0&&f==0)
outtextxy(80,305,"bC+AB");

//3 base 2 && 3
if(c==1&&d==1&&e==1&&a==0&&b==0&&f==0&&g==0&&h==0)
outtextxy(80,305,"aB+Abc");
else if(c==1&&d==1&&f==1&&b==0&&a==0&&e==0&&g==0&&h==0)
outtextxy(80,305,"aB+AbC");
else if(c==1&&d==1&&g==1&&b==0&&e==0&&a==0&&f==0&&h==0)
outtextxy(80,305,"aB+BC");
else if(c==1&&d==1&&h==1&&b==0&&e==0&&f==0&&a==0&&g==0)
outtextxy(80,305,"aB+Bc");

//3 base 2 && 4
else if(c==1&&e==1&&f==1&&b==0&&a==0&&d==0&&g==0&&h==0)
outtextxy(80,305,"aBC+Ab");
else if(c==1&&e==1&&g==1&&b==0&&d==0&&a==0&&f==0&&h==0)
outtextxy(80,305,"BC+Abc");
else if(c==1&&e==1&&h==1&&b==0&&d==0&&f==0&&a==0&&g==0)
outtextxy(80,305,"aBC+Ac");

//3 base 2 && 5
else if(c==1&&f==1&&g==1&&b==0&&d==0&&a==0&&e==0&&h==0)
outtextxy(80,305,"BC+AC");
else if(c==1&&f==1&&h==1&&b==0&&d==0&&e==0&&a==0&&g==0)
outtextxy(80,305,"aBC+Abc+ABc");

//3 base 2 && 6
else if(c==1&&g==1&&h==1&&b==0&&d==0&&e==0&&a==0&&f==0)
outtextxy(80,305,"BC+AB");

//3 base 3 && 4
else if(d==1&&e==1&&f==1&&b==0&&a==0&&c==0&&g==0&&h==0)
outtextxy(80,305,"aBc+Ab");
else if(d==1&&e==1&&g==1&&b==0&&c==0&&a==0&&f==0&&h==0)
outtextxy(80,305,"aBc+Abc+ABC");
else if(d==1&&e==1&&h==1&&b==0&&c==0&&f==0&&a==0&&g==0)
outtextxy(80,305,"Bc+Ac");

//3 base 3 && 5
else if(d==1&&f==1&&g==1&&b==0&&c==0&&a==0&&e==0&&h==0)
outtextxy(80,305,"aBc+AC");
else if(d==1&&f==1&&h==1&&b==0&&c==0&&e==0&&a==0&&g==0)
outtextxy(80,305,"AbC+Bc");

//3 base 3 && 6
else if(d==1&&g==1&&h==1&&b==0&&c==0&&e==0&&a==0&&f==0)
outtextxy(80,305,"Bc+AB");

//3 base 4 && 5
else if(e==1&&f==1&&g==1&&b==0&&d==0&&a==0&&c==0&&h==0)
outtextxy(80,305,"Ab+AC");
else if(e==1&&f==1&&h==1&&b==0&&d==0&&c==0&&a==0&&g==0)
outtextxy(80,305,"Ab+Ac");

//3 base 4 && 6
else if(e==1&&g==1&&h==1&&b==0&&d==0&&c==0&&a==0&&f==0)
outtextxy(80,305,"Ac+AB");

//3 base 5 && 6
if(f==1&&g==1&&h==1&&b==0&&d==0&&c==0&&a==0&&e==0)
outtextxy(80,305,"AC+AB");


/*4  BASE BIG 0  */

else if(a==1&&b==1&&c==1&&d==1&&e==0&&f==0&&g==0&&h==0)
outtextxy(80,305,"a");
else if(a==1&&b==1&&d==0&&c==1&&e==1&&f==0&&g==0&&h==0)
outtextxy(80,305,"bc+aC");
else if(a==1&&b==1&&e==0&&d==0&&c==1&&f==1&&g==0&&h==0)
outtextxy(80,305,"ab+bC+bC");
else if(a==1&&b==1&&f==0&&d==0&&e==0&&c==1&&g==1&&h==0)
outtextxy(80,305,"ab+BC+aC");
else if(a==1&&b==1&&g==0&&d==0&&e==0&&f==0&&c==1&&h==1)
outtextxy(80,305,"ab+aC+ABc");

else if(a==1&&c==0&&d==1&&b==1&&e==1&&f==0&&g==0&&h==0)
outtextxy(80,305,"ab+bc+ac");
else if(a==1&&c==0&&e==0&&b==1&&d==1&&f==1&&g==0&&h==0)
outtextxy(80,305,"ab+bC+ac");
else if(a==1&&c==0&&f==0&&d==1&&b==1&&e==0&&g==1&&h==0)
outtextxy(80,305,"ab+ac+ABC");
else if(a==1&&c==0&&g==0&&d==1&&e==0&&b==1&&f==0&&h==1)
outtextxy(80,305,"ab+Bc");
else if(a==1&&c==0&&h==0&&d==0&&e==1&&f==1&&b==1&&g==0)
outtextxy(80,305,"b");



 else if(a==1&&d==0&&e==1&&b==1&&c==0&&f==0&&g==1&&h==0)
outtextxy(80,305,"ab+bc+ABC");
else if(a==1&&d==0&&f==0&&c==0&&b==1&&e==1&&g==0&&h==1)
outtextxy(80,305,"ab+Ac");
else if(a==1&&d==0&&g==1&&c==0&&e==0&&b==1&&f==1&&h==0)
outtextxy(80,305,"ab+AC");
else if(a==1&&d==0&&h==1&&c==0&&e==0&&f==1&&b==0&&g==0)
outtextxy(80,305,"ab+bC+ABc");


else if(a==1&&e==0&&f==0&&c==0&&b==1&&d==0&&g==1&&h==1)
outtextxy(80,305,"ab+AB");
else if(a==1&&e==1&&g==0&&c==1&&d==1&&b==0&&f==0&&h==0)
outtextxy(80,305,"bc+aB");
else if(a==1&&e==0&&h==0&&c==1&&d==1&&f==1&&b==0&&g==0)
outtextxy(80,305,"ab+ac+AbC");


else if(a==1&&f==0&&g==1&&c==1&&d==1&&b==0&&e==0&&h==0)
outtextxy(80,305,"BC+ac");
else if(a==1&&f==0&&h==1&&c==1&&d==1&&e==0&&b==0&&g==0)
outtextxy(80,305,"ac+aB+Bc");

else if(a==1&&g==0&&h==0&&c==1&&d==0&&e==1&&b==0&&f==1)
outtextxy(80,305,"bc+Ab+aBC");


else if(b==0&&c==1&&d==0&&a==1&&e==1&&f==0&&g==1&&h==0)
outtextxy(80,305,"bc+BC");
else if(b==0&&c==1&&e==1&&a==1&&d==0&&f==0&&g==0&&h==1)
outtextxy(80,305,"bc+Ac+aBC");
else if(b==0&&c==1&&f==1&&d==0&&a==1&&e==0&&g==1&&h==0)
outtextxy(80,305,"abc+AC+BC");
else if(b==0&&c==1&&g==0&&d==0&&e==0&&a==1&&f==1&&h==1)
outtextxy(80,305,"abc+AbC+ABC+ABc");
else if(b==0&&c==1&&h==1&&d==0&&e==0&&f==0&&a==1&&g==1)
outtextxy(80,305,"abc+BC+AB");

//3
if(b==0&&d==1&&e==1&&a==1&&c==0&&f==1&&g==0&&h==0)
outtextxy(80,305,"bc+ac+Ab");
else if(b==0&&d==1&&f==0&&c==0&&a==1&&e==1&&g==1&&h==0)
outtextxy(80,305,"ac+bc+ABC");
else if(b==0&&d==1&&g==0&&c==0&&e==1&&a==1&&f==0&&h==1)
outtextxy(80,305,"c");
else if(b==0&&d==1&&h==0&&c==0&&e==0&&f==1&&a==1&&g==1)
outtextxy(80,305,"ac+AC");

//3 base 1 && 4
else if(b==0&&e==0&&f==1&&c==0&&a==1&&d==1&&g==0&&h==1)
outtextxy(80,305,"ac+Bc+AbC");
else if(b==0&&e==0&&g==1&&c==0&&d==1&&a==1&&f==0&&h==1)
outtextxy(80,305,"ac+AB");
else if(b==0&&e==1&&h==0&&c==0&&d==0&&f==1&&a==1&&g==1)
outtextxy(80,305,"bc+AC");

//3 base 1 && 5
else if(b==0&&f==1&&g==0&&c==0&&d==0&&a==1&&e==1&&h==1)
outtextxy(80,305,"bc+Ab+Ac");
else if(b==0&&f==0&&h==1&&c==0&&d==0&&e==1&&a==1&&g==1)
outtextxy(80,305,"bc+AB");

//3 base 1 && 6
else if(b==0&&g==1&&h==1&&c==0&&d==0&&e==0&&a==1&&f==1)
outtextxy(80,305,"abc+AC+AB");

//3 base 2 && 3
if(b==1&&d==1&&f==1&&c==1&&b==0&&a==0&&g==0&&h==0)
outtextxy(80,305,"aC+aB+Abc");
else if(b==1&&d==1&&f==0&&c==1&&a==0&&e==0&&g==1&&h==0)
outtextxy(80,305,"bC+aB");
else if(b==1&&d==1&&g==1&&c==0&&e==0&&a==0&&f==0&&h==0)
outtextxy(80,305,"aC+aB+BC");
else if(b==1&&d==1&&h==1&&c==0&&e==0&&f==0&&a==0&&g==0)
outtextxy(80,305,"aC+Bc");

//3 base 2 && 4
else if(b==1&&e==1&&f==1&&c==1&&a==0&&d==0&&g==0&&h==0)
outtextxy(80,305,"aC+Ab");
else if(b==1&&e==1&&g==1&&c==1&&d==0&&a==0&&f==0&&h==0)
outtextxy(80,305,"aC+Bc+Abc");
else if(b==1&&e==1&&h==1&&c==1&&d==0&&f==0&&a==0&&g==0)
outtextxy(80,305,"aC+Ac");

//3 base 2 && 5
else if(b==1&&f==1&&g==1&&c==1&&d==0&&a==0&&e==0&&h==0)
outtextxy(80,305,"C");
else if(b==1&&f==1&&h==1&&c==1&&d==0&&e==0&&a==0&&g==0)
outtextxy(80,305,"aC+bC+ABc");

//3 base 2 && 6
else if(b==1&&g==1&&h==1&&c==1&&d==0&&e==0&&a==0&&f==0)
outtextxy(80,305,"aC+AB");

//3 base 3 && 4
else if(d==1&&e==1&&f==1&&b==1&&a==0&&c==0&&g==0&&h==0)
outtextxy(80,305,"Ab+bC+aBc");
else if(d==1&&e==1&&g==1&&b==1&&c==0&&a==0&&f==0&&h==0)
outtextxy(80,305,"Abc+abC+ABC+aBc");
else if(d==1&&e==1&&h==1&&b==1&&c==0&&f==0&&a==0&&g==0)
outtextxy(80,305,"Bc+Ac+abC");

//3 base 3 && 5
else if(d==1&&f==1&&g==1&&b==1&&c==0&&a==0&&e==0&&h==0)
outtextxy(80,305,"bC+aBc+AC");
else if(d==1&&f==1&&h==1&&b==1&&c==0&&e==0&&a==0&&g==0)
outtextxy(80,305,"bC+Bc");

//3 base 3 && 6
else if(d==1&&g==1&&h==1&&b==1&&c==0&&e==0&&a==0&&f==0)
outtextxy(80,305,"abC+Bc+AB");

//3 base 4 && 5
else if(e==1&&f==1&&g==1&&b==1&&d==0&&a==0&&c==0&&h==0)
outtextxy(80,305,"Ab+AC+bC");
else if(e==1&&f==1&&h==1&&b==1&&d==0&&c==0&&a==0&&g==0)
outtextxy(80,305,"Ab+Ac+bC");

//3 base 4 && 6
else if(e==1&&g==1&&h==1&&b==1&&d==0&&c==0&&a==0&&f==0)
outtextxy(80,305,"Ac+AB+abC");

//3 base 5 && 6
if(f==1&&g==1&&h==1&&b==1&&d==0&&c==0&&a==0&&e==0)
outtextxy(80,305,"bC+AB");

/*4 big 2*/
if(c==1&&d==1&&e==1&&f==1&&a==0&&b==0&&g==0&&h==0)
outtextxy(80,305,"aB+Ab");
if(c==1&&d==1&&e==1&&g==1&&a==0&&b==0&&f==0&&h==0)
outtextxy(80,305,"aB+BC+Abc");
if(c==1&&d==1&&e==1&&h==1&&a==0&&b==0&&g==0&&f==0)
outtextxy(80,305,"aB+Ac");
if(c==1&&d==1&&f==1&&g==1&&a==0&&b==0&&e==0&&h==0)
outtextxy(80,305,"aB+AC");
if(c==1&&d==1&&f==1&&h==1&&a==0&&b==0&&e==0&&g==0)
outtextxy(80,305,"bC+AB");
if(c==1&&d==1&&g==1&&h==1&&a==0&&b==0&&e==0&&f==0)
outtextxy(80,305,"B");

if(c==1&&e==1&&f==1&&g==1&&a==0&&b==0&&d==0&&h==0)
outtextxy(80,305,"Ab+BC");
if(c==1&&e==1&&f==1&&h==1&&a==0&&b==0&&d==0&&g==0)
outtextxy(80,305,"Ab+Ac+aBC");
if(c==1&&e==1&&g==1&&h==1&&a==0&&b==0&&d==0&&f==0)
outtextxy(80,305,"Ac+BC");
if(c==1&&f==1&&g==1&&h==1&&a==0&&b==0&&d==0&&e==0)
outtextxy(80,305,"AC+BC+AB");


if(d==1&&e==1&&f==1&&g==1&&a==0&&b==0&&c==0&&h==0)
outtextxy(80,305,"Ab+AC+abc");
if(d==1&&e==1&&f==1&&h==1&&a==0&&b==0&&c==0&&g==0)
outtextxy(80,305,"Ab+Bc");
if(d==1&&e==1&&f==1&&g==1&&a==0&&b==0&&c==0&&h==0)
outtextxy(80,305,"Ab+AC+abc");
if(d==1&&e==1&&g==1&&h==1&&a==0&&b==0&&c==0&&f==0)
outtextxy(80,305,"Ac+AB+Bc");
if(d==1&&e==1&&g==1&&c==1&&a==0&&b==0&&f==0&&h==0)
outtextxy(80,305,"AC+Bc");

if(e==1&&f==1&&g==1&&h==1&&a==0&&b==0&&c==0&&d==0)
outtextxy(80,305,"A");




//5 BASE TOO BIg


if(a==1&&b==1&&c==1&&d==1&&e==1&&f==0&&g==0&&h==0)
outtextxy(80,305,"a+bc");
else if(a==1&&b==1&&c==1&&d==1&&f==1&&e==0&&g==0&&h==0)
outtextxy(80,305,"a+bC");
else if(a==1&&b==1&&c==1&&d==1&&g==1&&e==0&&f==0&&h==0)
outtextxy(80,305,"a+BC");
else if(a==1&&b==1&&c==1&&d==1&&h==1&&e==0&&g==0&&f==0)
outtextxy(80,305,"a+Bc");

else if(a==1&&b==1&&c==1&&e==1&&f==1&&d==0&&g==0&&h==0)
outtextxy(80,305,"b+aC");
else if(a==1&&b==1&&c==1&&e==1&&g==1&&d==0&&f==0&&h==0)
outtextxy(80,305,"bc+ab+BC");
else if(a==1&&b==1&&c==1&&e==1&&h==1&&d==0&&f==0&&g==0)
outtextxy(80,305,"bc+aC+Ac");


if(a==1&&b==1&&c==1&&f==1&&g==1&&d==0&&e==0&&h==0)
outtextxy(80,305,"C+ab");
if(a==1&&b==1&&c==1&&f==1&&h==1&&d==0&&e==0&&g==0)
outtextxy(80,305,"ab+aC+bC+ABc");

if(a==1&&b==1&&c==1&&g==1&&h==1&&d==0&&e==0&&f==0)
outtextxy(80,305,"ab+BC+AB");


if(a==1&&b==1&&d==1&&e==1&&f==1&&c==0&&g==0&&h==0)
outtextxy(80,305,"b+aC");
if(a==1&&b==1&&d==1&&e==1&&g==1&&c==0&&f==0&&h==0)
outtextxy(80,305,"ac+ab+bc+aBC");
if(a==1&&b==1&&d==1&&e==1&&h==1&&c==0&&f==0&&g==0)
outtextxy(80,305,"c+ab");

if(a==1&&b==1&&d==1&&f==1&&g==1&&c==0&&e==0&&h==0)
outtextxy(80,305,"ac+ab+AC");
if(a==1&&b==1&&d==1&&f==1&&h==1&&c==0&&e==0&&g==0)
outtextxy(80,305,"bC+ab+Bc");


if(a==1&&b==1&&d==1&&g==1&&h==1&&c==0&&e==0&&f==0)
outtextxy(80,305,"ab+AB+BC");


if(a==1&&b==1&&e==1&&f==1&&g==1&&c==0&&d==0&&h==0)
outtextxy(80,305,"b+AC");
if(a==1&&b==1&&e==1&&f==1&&h==1&&c==0&&d==0&&g==0)
outtextxy(80,305,"b+Ac");

if(a==1&&b==1&&e==1&&g==1&&h==1&&c==0&&d==0&&f==0)
outtextxy(80,305,"ab+bc+AB");

else if(a==1&&b==1&&f==1&&g==1&&h==1&&c==0&&d==0&&e==0)
outtextxy(80,305,"ab+bC+AB");

// 5 case 2

if(a==1&&c==1&&d==1&&e==1&&f==1&&b==0&&g==0&&h==0)
outtextxy(80,305,"aB+bc+Ab");
else if(a==1&&c==1&&d==1&&e==1&&g==1&&b==0&&f==0&&h==0)
outtextxy(80,305,"bc+BC+Ab");
else if(a==1&&c==1&&d==1&&e==1&&h==1&&b==0&&f==0&&g==0)
outtextxy(80,305,"c+aB");

if(a==1&&c==1&&d==1&&f==1&&g==1&&b==0&&e==0&&h==0)
outtextxy(80,305,"aB+ac+AC");
else if(a==1&&c==1&&d==1&&f==1&&h==1&&b==0&&e==0&&g==0)
outtextxy(80,305,"aB+ac+Bc+AbC");

else if(a==1&&c==1&&d==1&&g==1&&h==1&&b==0&&e==0&&f==0)
outtextxy(80,305,"B+ac");

if(a==1&&c==1&&e==1&&f==1&&g==1&&b==0&&d==0&&h==0)
outtextxy(80,305,"bc+BC+Ab");
else if(a==1&&c==1&&e==1&&f==1&&h==1&&b==0&&d==0&&g==0)
outtextxy(80,305,"bc+Ac+Ab+aBC");

else if(a==1&&c==1&&e==1&&g==1&&h==1&&b==0&&d==0&&f==0)
outtextxy(80,305,"bc+Ac+BC");

else if(a==1&&c==1&&f==1&&g==1&&h==1&&b==0&&d==0&&e==0)
outtextxy(80,305,"abc+AC+BC+AB");

else if(a==1&&d==1&&e==1&&f==1&&g==1&&b==0&&c==0&&h==0)
outtextxy(80,305,"bc+Ab+ac");
else if(a==1&&d==1&&e==1&&f==1&&h==1&&b==0&&c==0&&g==0)
outtextxy(80,305,"c+Ab");

else if(a==1&&d==1&&e==1&&g==1&&h==1&&b==0&&c==0&&f==0)
outtextxy(80,305,"c+AB");
else if(a==1&&d==1&&f==1&&g==1&&h==1&&b==0&&c==0&&e==0)
outtextxy(80,305,"AC+Bc+ac");
else if(a==1&&e==1&&f==1&&g==1&&h==1&&b==0&&c==0&&d==0)
outtextxy(80,305,"A+bc");

// again 5 big 1

else if(b==1&&c==1&&d==1&&e==1&&f==1&&a==0&&g==0&&h==0)
outtextxy(80,305,"Ab+bC+aB");
else if(b==1&&c==1&&d==1&&e==1&&g==1&&a==0&&f==0&&h==0)
outtextxy(80,305,"Abc+aC+aB+BC");
else if(b==1&&c==1&&d==1&&e==1&&h==1&&a==0&&f==0&&g==0)
outtextxy(80,305,"aC+aB+AC");

else if(b==1&&c==1&&d==1&&f==1&&g==1&&a==0&&e==0&&h==0)
outtextxy(80,305,"C+aB");
else if(b==1&&c==1&&d==1&&f==1&&h==1&&a==0&&e==0&&g==0)
outtextxy(80,305,"bC+aC+Bc");

else if(b==1&&c==1&&d==1&&g==1&&h==1&&a==0&&e==0&&f==0)
outtextxy(80,305,"B+aC");

else if(b==1&&c==1&&e==1&&f==1&&g==1&&a==0&&d==0&&h==0)
outtextxy(80,305,"C+Ab");
else if(b==1&&c==1&&e==1&&f==1&&h==1&&a==0&&d==0&&g==0)
outtextxy(80,305,"Ac+bC+aC");

else if(b==1&&c==1&&e==1&&g==1&&h==1&&a==0&&d==0&&f==0)
outtextxy(80,305,"Ac+BC+aC");

else if(b==1&&c==1&&f==1&&g==1&&h==1&&a==0&&d==0&&e==0)
outtextxy(80,305,"C+AB");

if(b==1&&d==1&&e==1&&f==1&&g==1&&a==0&&c==0&&h==0)
outtextxy(80,305,"bC+Ab+AC+abC");
else if(b==1&&d==1&&e==1&&f==1&&h==1&&a==0&&c==0&&g==0)
outtextxy(80,305,"bC+Bc+ab");

else if(b==1&&d==1&&e==1&&g==1&&h==1&&a==0&&c==0&&f==0)
outtextxy(80,305,"AC+AB+Bc+abC");
else if(b==1&&d==1&&f==1&&g==1&&h==1&&a==0&&c==0&&e==0)
outtextxy(80,305,"bC+AC+Bc");
else if(b==1&&e==1&&f==1&&g==1&&h==1&&a==0&&c==0&&d==0)
outtextxy(80,305,"A+bC");

else if(c==1&&d==1&&e==1&&f==1&&g==1&&a==0&&b==0&&h==0)
outtextxy(80,305,"AC+BC+aB");
else if(c==1&&d==1&&e==1&&f==1&&h==1&&a==0&&b==0&&g==0)
outtextxy(80,305,"Ab+AB+Bc");
else if(c==1&&d==1&&e==1&&g==1&&h==1&&a==0&&b==0&&f==0)
outtextxy(80,305,"B+Ac");
else if(c==1&&d==1&&f==1&&g==1&&h==1&&a==0&&b==0&&e==0)
outtextxy(80,305,"B+AC");
else if(c==1&&e==1&&f==1&&g==1&&h==1&&a==0&&b==0&&d==0)
outtextxy(80,305,"A+BC");

else if(d==1&&e==1&&f==1&&g==1&&h==1&&a==0&&b==0&&c==0)
outtextxy(80,305,"A+Bc");


//6 base
if(a==1&&b==1&&c==1&&d==1&&e==1&&f==1&&g==0&&h==0)
outtextxy(80,305,"a+b");
else if(a==1&&b==1&&c==1&&d==1&&e==1&&g==1&&f==0&&h==0)
outtextxy(80,305,"a+bc+BC");
else if(a==1&&b==1&&c==1&&d==1&&e==1&&h==1&&f==0&&g==0)
outtextxy(80,305,"a+c");

else if(a==1&&b==1&&c==1&&d==1&&f==1&&g==1&&e==0&&h==0)
outtextxy(80,305,"a+C");
else if(a==1&&b==1&&c==1&&d==1&&f==1&&h==1&&e==0&&g==0)
outtextxy(80,305,"a+bC+Bc");
else if(a==1&&b==1&&c==1&&d==1&&g==1&&h==1&&e==0&&f==0)
outtextxy(80,305,"a+B");

else if(a==1&&b==1&&c==1&&e==1&&f==1&&g==1&&d==0&&h==0)
outtextxy(80,305,"b+C");
else if(a==1&&b==1&&c==1&&e==1&&f==1&&h==1&&d==0&&g==0)
outtextxy(80,305,"b+aC+Ac");

else if(a==1&&b==1&&c==1&&e==1&&g==1&&h==1&&d==0&&f==0)
outtextxy(80,305,"b+AB");

else if(a==1&&b==1&&c==1&&f==1&&g==1&&h==1&&d==0&&e==0)
outtextxy(80,305,"ab+C+AB");

else if(a==1&&b==1&&d==1&&e==1&&f==1&&g==1&&c==0&&h==0)
outtextxy(80,305,"b+ac+AC");
else if(a==1&&b==1&&d==1&&e==1&&f==1&&h==1&&c==0&&g==0)
outtextxy(80,305,"b+c");
else if(a==1&&b==1&&d==1&&e==1&&g==1&&h==1&&c==0&&f==0)
outtextxy(80,305,"c+ab+AB");

else if(a==1&&b==1&&d==1&&f==1&&g==1&&h==1&&c==0&&e==0)
outtextxy(80,305,"ab+AC+Bc");

else if(a==1&&b==1&&e==1&&f==1&&g==1&&h==1&&c==0&&d==0)
outtextxy(80,305,"A+b");

else if(a==1&&c==1&&d==1&&e==1&&f==1&&g==1&&b==0&&h==0)
outtextxy(80,305,"bc+AC+aB");
else if(a==1&&c==1&&d==1&&e==1&&f==1&&h==1&&b==0&&g==0)
outtextxy(80,305,"c+Ab+aB");

else if(a==1&&c==1&&d==1&&e==1&&g==1&&h==1&&b==0&&f==0)
outtextxy(80,305,"c+B");

else if(a==1&&c==1&&d==1&&f==1&&g==1&&h==1&&b==0&&e==0)
outtextxy(80,305,"B+AC+ac");

else if(a==1&&c==1&&e==1&&f==1&&g==1&&h==1&&b==0&&d==0)
outtextxy(80,305,"A+bc+BC");

else if(a==1&&d==1&&e==1&&f==1&&g==1&&h==1&&b==0&&c==0)
outtextxy(80,305,"A+c");

else if(b==1&&c==1&&d==1&&e==1&&f==1&&g==1&&a==0&&h==0)
outtextxy(80,305,"C+aB+Ab");
else if(b==1&&c==1&&d==1&&e==1&&f==1&&h==1&&a==0&&g==0)
outtextxy(80,305,"Ac+bC+aB");

else if(b==1&&c==1&&d==1&&e==1&&g==1&&h==1&&a==0&&f==0)
outtextxy(80,305,"B+Ac+aC");

else if(b==1&&c==1&&d==1&&f==1&&g==1&&h==1&&a==0&&e==0)
outtextxy(80,305,"C+B");

else if(b==1&&c==1&&e==1&&f==1&&g==1&&h==1&&a==0&&d==0)
outtextxy(80,305,"A+C");

else if(b==1&&d==1&&e==1&&f==1&&g==1&&h==1&&a==0&&c==0)
outtextxy(80,305,"A+bC+Bc");

else if(c==1&&d==1&&e==1&&f==1&&g==1&&h==1&&a==0&&b==0)
outtextxy(80,305,"A+B");


//7 Base
else if(b==1&&c==1&&d==1&&e==1&&f==1&&g==1&&h==1&&a==0)
outtextxy(80,305,"A+C+B");
else if(a==1&&c==1&&d==1&&e==1&&f==1&&g==1&&h==1&&b==0)
outtextxy(80,305,"A+B+c");
else if(a==1&&b==1&&d==1&&e==1&&f==1&&g==1&&h==1&&c==0)
outtextxy(80,305,"A+b+c");
else if(a==1&&b==1&&c==1&&e==1&&f==1&&g==1&&h==1&&d==0)
outtextxy(80,305,"A+b+C");
else if(a==1&&b==1&&c==1&&d==1&&f==1&&g==1&&h==1&&e==0)
outtextxy(80,305,"a+C+B");
else if(a==1&&b==1&&c==1&&d==1&&e==1&&g==1&&h==1&&f==0)
outtextxy(80,305,"a+c+B");
else if(a==1&&b==1&&c==1&&d==1&&e==1&&f==1&&h==1&&g==0)
outtextxy(80,305,"a+c+B");
else if(a==1&&b==1&&c==1&&d==1&&e==1&&f==1&&g==1&&h==0)
outtextxy(80,305,"a+b+C");

//8 Base
if(a==1&&b==1&&c==1&&d==1&&e==1&&f==1&&g==1&&h==1)
outtextxy(80,305,"1");
else if(a==0&&b==0&&c==0&&d==0&&e==0&&f==0&&g==0&&h==0)
outtextxy(80,305,"0");
}
else
{
outtextxy(80,305,"\n invalid....");
getch();
exit(0);
}


return ;
}
