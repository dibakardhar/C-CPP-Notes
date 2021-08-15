#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>
#include"mouse.h"
int z=DETECT,w,button,x,y;
graph()
{
initgraph(&z,&w," ");
changecursor(vs[1]);
setbkcolor(0);
restrictmouse(0,0,340,480);
setcolor(BLUE);
setfillstyle(SOLID_FILL,BLUE);
bar3d(0,0,380,480,0,0);
setcolor(RED);
setfillstyle(SOLID_FILL,LIGHTGRAY);
bar3d(100,100,160,120,0,0);
bar3d(160,100,220,120,0,0);
bar3d(220,100,280,120,0,0);
bar3d(280,100,340,120,0,0);
bar3d(100,120,160,140,0,0);
bar3d(160,120,220,140,0,0);
bar3d(220,120,280,140,0,0);
bar3d(280,120,340,140,0,0);
line(80,80,100,100);
//setfillstyle(SOLID_FILL,WHITE);
bar3d(240,180,340,200,0,1);
setcolor(RED);
outtextxy(250,190,"CONTINUE");
settextstyle(1,0,1);
outtextxy(75,80,"A");
outtextxy(100,70,"BC");
settextstyle(1,0,2);
outtextxy(380,30,"KANAUGH MAP EVOLUTION");
outtextxy(380,100,"3 VARIABLES ONLY");
outtextxy(380,200,"V.SENTHIL KUMAR");
settextstyle(0,0,1);
while(!kbhit())
{
showmouse();
mousepos(&button,&x,&y);
if(button==1){
if(x>100 && x<160 && y>100 && y<120){
hidemouse();
outtextxy(140,110,"1");
a=1;                     }
if(x>161 && x<220 && y>100 && y<120){
hidemouse();
outtextxy(200,110,"1");
b=1;                	    }
if(x>221 && x<280 && y>100 && y<120){
hidemouse();
outtextxy(260,110,"1");
c=1;			    }
if(x>281 && x<340 && y>100 && y<120){
hidemouse();
outtextxy(320,110,"1");
d=1;			    }
if(x>100 && x<160 && y>121 && y<140){
hidemouse();
outtextxy(140,130,"1");
e=1;			    }
if(x>161 && x<220 && y>121 && y<140){
hidemouse();
outtextxy(200,130,"1");
f=1;			    }
if(x>221 && x<280 && y>121 && y<140){
hidemouse();
outtextxy(260,130,"1");
g=1;			    }
if(x>281 && x<340 && y>121 && y<140){
hidemouse();
outtextxy(320,130,"1");
h=1;			    }
if(x>240 && x<340 && y>181 && y<200)
{
resultpage();}
}
else if(button==0){
if(x>100 && x<160 && y>100 && y<120){
changecursor(vs[0]);
delay(50);changecursor(vs[1]);	     }
if(x>161 && x<220 && y>100 && y<120){
changecursor(vs[0]);
delay(50);changecursor(vs[1]);	     }
if(x>221 && x<280 && y>100 && y<120){
changecursor(vs[0]);
delay(50);changecursor(vs[1]);	     }
if(x>281 && x<340 && y>100 && y<120){
changecursor(vs[0]);
delay(50);changecursor(vs[1]);	     }
if(x>100 && x<160 && y>121 && y<140){
changecursor(vs[0]);
delay(50);changecursor(vs[1]);	     }
if(x>161 && x<220 && y>121 && y<140){
changecursor(vs[0]);
delay(50);changecursor(vs[1]);	     }
if(x>221 && x<280 && y>121 && y<140){
changecursor(vs[0]);
delay(50);changecursor(vs[1]);	     }
if(x>281 && x<340 && y>121 && y<140){
changecursor(vs[0]);
delay(50);changecursor(vs[1]);
}
if(x>240 && x<340 && y>181 && y<200){
changecursor(vs[0]);
delay(50);changecursor(vs[1]);	     }
}
}
return;
}
resultpage()
{
cleardevice();
restrictmouse(360,0,640,480);
setcolor(BLUE);
setfillstyle(SOLID_FILL,BLUE);
bar3d(0,0,360,480,0,0);
setcolor(LIGHTGRAY);
setfillstyle(SOLID_FILL,LIGHTGRAY);
bar3d(361,0,640,480,0,0);
setcolor(RED);
bar3d(100,100,160,120,0,0);
bar3d(160,100,220,120,0,0);
bar3d(220,100,280,120,0,0);
bar3d(280,100,340,120,0,0);
bar3d(100,120,160,140,0,0);
bar3d(160,120,220,140,0,0);
bar3d(220,120,280,140,0,0);
bar3d(280,120,340,140,0,0);
bar3d(0,0,360,480,0,0);
setfillstyle(SOLID_FILL,BLUE);
bar3d(380,160,480,180,0,0);
bar3d(380,200,480,220,0,0);
bar3d(380,240,480,260,0,0);
outtextxy(400,170,"RE-START");
outtextxy(420,210,"QUIT");
outtextxy(420,250,"MAIN");
settextstyle(1,0,1);
line(80,80,100,100);
outtextxy(75,80,"A");
outtextxy(100,70,"BC");
settextstyle(0,0,1);
if(a==1)
{
setfillstyle(SOLID_FILL,YELLOW);
bar3d(100,100,160,120,0,0);
outtextxy(140,110,"1");
}
else if(a==0)
{
setfillstyle(SOLID_FILL,BLACK);
bar3d(100,100,160,120,0,0);
outtextxy(140,110,"0");
}
if(b==1)
{
setfillstyle(SOLID_FILL,YELLOW);
bar3d(160,100,220,120,0,0);
outtextxy(200,110,"1");
}
else if(b==0)
{
setfillstyle(SOLID_FILL,BLACK);
bar3d(160,100,220,120,0,0);
outtextxy(200,110,"0");
}
if(c==1)
{
setfillstyle(SOLID_FILL,YELLOW);
bar3d(220,100,280,120,0,0);
outtextxy(260,110,"1");
}
else if(c==0)
{
setfillstyle(SOLID_FILL,BLACK);
bar3d(220,100,280,120,0,0);
outtextxy(260,110,"0");
}
if(d==1)
{
setfillstyle(SOLID_FILL,YELLOW);
bar3d(280,100,340,120,0,0);
outtextxy(320,110,"1");
}
else if(d==0)
{
setfillstyle(SOLID_FILL,BLACK);
bar3d(280,100,340,120,0,0);
outtextxy(320,110,"0");
}
if(e==1)
{
setfillstyle(SOLID_FILL,YELLOW);
bar3d(100,120,160,140,0,0);
outtextxy(140,130,"1");
}
else if(e==0)
{
setfillstyle(SOLID_FILL,BLACK);
bar3d(100,120,160,140,0,0);
outtextxy(140,130,"0");
}
if(f==1)
{
setfillstyle(SOLID_FILL,YELLOW);
bar3d(160,120,220,140,0,0);
outtextxy(200,130,"1");
}
else if(f==0)
{
setfillstyle(SOLID_FILL,BLACK);
bar3d(160,120,220,140,0,0);
outtextxy(200,130,"0");
}
if(g==1)
{
setfillstyle(SOLID_FILL,YELLOW);
bar3d(220,120,280,140,0,0);
outtextxy(260,130,"1");
}
else if(g==0)
{
setfillstyle(SOLID_FILL,BLACK);
bar3d(220,120,280,140,0,0);
outtextxy(260,130,"0");
}
if(h==1)
{
setfillstyle(SOLID_FILL,YELLOW);
bar3d(280,120,340,140,0,0);
outtextxy(320,130,"1");
}
else if(h==0)
{
setfillstyle(SOLID_FILL,BLACK);
bar3d(280,120,340,140,0,0);
outtextxy(320,130,"0");
}
settextstyle(1,0,2);
outtextxy(50,250,"THE RESULT IS :.......");
setcolor(LIGHTBLUE);
setfillstyle(SOLID_FILL,LIGHTBLUE);
bar3d(50,305,360,330,0,0);
setcolor(GREEN);
setcolor(128);
action();
changecursor(vs[2]);
delay(500);
changecursor(vs[1]);
settextstyle(0,0,1);
while(!kbhit())
{
 showmouse();
 mousepos(&button,&x,&y);
 if(button==1)
  {
 if(x>380 && x<480 && y>160 && y<180){
 gui();}
 if(x>380 && x<480 && y>200 && y<220){
 exit(0);}
 if(x>380 && x<480 && y>240 && y<260){
 exit(0);}
  }
  if(button==0)
  {
  if(x>380 && x<480 && y>160 && y<180){
  changecursor(vs[0]);
  delay(50); changecursor(vs[1]);	     }
  if(x>380 && x<480 && y>200 && y<220){
   changecursor(vs[0]);
  delay(50);    changecursor(vs[1]);	     }
  if(x>380 && x<480 && y>240 && y<260){
   changecursor(vs[0]);
   delay(50);changecursor(vs[1]);	     }
  }
}
return;
}