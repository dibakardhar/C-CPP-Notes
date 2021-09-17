#include<graphics.h>
#include<iostream.h>
#include<Math.h>
#include<conio.h>
#define MAXSIZE 3

class D_2
{
	private:
	double Points[MAXSIZE][MAXSIZE];
	void Mult(double [MAXSIZE][MAXSIZE]);
	void MultTwoMat(double [MAXSIZE][MAXSIZE],double [MAXSIZE][MAXSIZE]);
	void Print();
	int x,y;
	public:
	D_2();
	void initialize();
	void GetPoints();
	void Draw(int);
	void DrawCord();
	void Translate();
	void Rotate();
	void Reflect();
	void Display(double[MAXSIZE][MAXSIZE]);
	void Shear();
	void Scale_Fixed();
	void Scale_Dir();
};


D_2::D_2()
{
	for(int i=0;i<MAXSIZE;i++)
	{
		for(int j=0;j<MAXSIZE;j++)
		{
			if(i == (MAXSIZE-1))
			Points[i][j] = 1;
			else
			Points[i][j] = 0;
		}
	  }
	initialize();
	x = getmaxx();
	y = getmaxy();
}
void D_2::initialize()
	{
	int gdrive = DETECT,gmode;
	initgraph(&gdrive,&gmode,"c:\\tc\\bgi");
	}

void D_2::GetPoints()
{
	closegraph();
	cout<<"Enter The Points Of The Triangle.";
	for(int j=0;j<MAXSIZE;j++)
	{
	cout<<"Enter Point "<<j+1<<":-";
		for(int i=0;i<MAXSIZE-1;i++)
		{
			cout<<"Enter "<<char(i+'X')<<": ";
			cin>>Points[i][j];
		}
	 }
	 initialize();
}

void D_2::Mult(double temp[MAXSIZE][MAXSIZE])
{
	int i,j,k;
	double z[MAXSIZE][MAXSIZE];
	for(i=0;i<MAXSIZE;i++)
	 {
		 for(j=0;j<MAXSIZE;j++)
			 z[i][j]=0;
	 }

	 for(i=0;i<MAXSIZE;i++)
	  {
		for(j=0;j<MAXSIZE;j++)
		{

		for(k=0;k<MAXSIZE;k++)
			 z[i][j]=z[i][j]+(temp[i][k] * Points[k][j]);
		}
	  }

	  for(i=0;i<MAXSIZE;i++)
	  {
		for(j=0;j<MAXSIZE;j++)
		{
			Points[i][j] = z[i][j];
	  }
	}
}



void D_2::Draw(int color)
{
	int Poly[2*MAXSIZE+2];
	int k = 0;
	if(color == GREEN)
		DrawCord();
	for(int j=0;j<MAXSIZE;j++)
	{
		for(int i=0;i<MAXSIZE-1;i++)
		{
		if(i==0)
			Poly[k++] = x/2+Points[i][j];
		else
			Poly[k++] = y/2-Points[i][j];
		}
	}
		Poly[k++] = Poly[0];
		Poly[k]   = Poly[1];
	setcolor(color);
	drawpoly(4,Poly);
}

void D_2::Display(double Mat[MAXSIZE][MAXSIZE])
{
 for(int i=0;i<MAXSIZE;i++)
	{
	 for(int j=0;j<MAXSIZE;j++)
	 {
		cout<<Mat[i][j]<<"	";
	 }
	 cout<<" ";
	}
}

void D_2::Print()
{
	setcolor(GREEN);
	setfillstyle(SOLID_FILL,GREEN);
	fillellipse(19,36,2,2);
	outtextxy(23,34," Original Triangle");
	setcolor(MAGENTA);
	setfillstyle(SOLID_FILL,MAGENTA);
	fillellipse(x-178,y-32,2,2);
	outtextxy(x-175,y-34," Tranformed Triangle");
}

void D_2::DrawCord()
{
	setcolor(12);
	line(x/2,0,x/2,y);
	line(0,y/2,x,y/2);
	setcolor(10);
	setfillstyle(SOLID_FILL,10);
	fillellipse(x/2,y/2,2,2);
	for(int i=(x/2+50),j=(x/2-50);i<=x,j>=0;i=i+50,j=j-50)
	{
		fillellipse(i,y/2,2,2);
		fillellipse(j,y/2,2,2);
	}
	for(i=(y/2+50),j=(y/2-50);i<=x,j>=0;i=i+50,j=j-50)
	{
		fillellipse(x/2,i,2,2);
		fillellipse(x/2,j,2,2);
	}

		outtextxy(x/2+3,y/2+4,"0");

		outtextxy(x/2+45,y/2+5,"50");
		outtextxy(x/2+95,y/2+5,"100");
		outtextxy(x/2+145,y/2+5,"150");
		outtextxy(x/2+195,y/2+5,"200");
		outtextxy(x/2+245,y/2+5,"250");
		outtextxy(x/2+295,y/2+5,"300");

		outtextxy(x/2-65,y/2+5,"-50");
		outtextxy(x/2-115,y/2+5,"-100");
		outtextxy(x/2-165,y/2+5,"-150");
		outtextxy(x/2-215,y/2+5,"-200");
		outtextxy(x/2-265,y/2+5,"-250");
		outtextxy(x/2-315,y/2+5,"-300");

		outtextxy(x/2+5,y/2+45,"-50");
		outtextxy(x/2+5,y/2+95,"-100");
		outtextxy(x/2+5,y/2+145,"-150");
		outtextxy(x/2+5,y/2+195,"-200");

		outtextxy(x/2+5,y/2-50,"50");
		outtextxy(x/2+5,y/2-100,"100");
		outtextxy(x/2+5,y/2-150,"150");
		outtextxy(x/2+5,y/2-200,"200");

}

void D_2::MultTwoMat(double temp[MAXSIZE][MAXSIZE],double
temp1[MAXSIZE][MAXSIZE])
{
	int i,j,k;
	double z[MAXSIZE][MAXSIZE];
	for(i=0;i<MAXSIZE;i++)
	 {
		 for(j=0;j<MAXSIZE;j++)
			 z[i][j]=0;
	 }

	 for(i=0;i<MAXSIZE;i++)
	  {
		for(j=0;j<MAXSIZE;j++)
		{

		for(k=0;k<MAXSIZE;k++)
			 z[i][j]=z[i][j]+(temp[i][k] * temp1[k][j]);
		}
	  }

	  for(i=0;i<MAXSIZE;i++)
	  {
		for(j=0;j<MAXSIZE;j++)
		{
			temp1[i][j] = z[i][j];
	  }
	}
}


void D_2::Translate()
{
	int Tx,Ty;
	double Trans[MAXSIZE][MAXSIZE];
	closegraph();
	cout<<"Enter Translation Factor Along X-Axis: ";
	cin>>Tx;
	cout<<"Enter Translation Factor Along Y-Axis: ";
	cin>>Ty;
	initialize();
	for(int j=0;j<MAXSIZE;j++)
	{
		for(int i=0;i<MAXSIZE;i++)
		{
			if(i==j)
				Trans[i][j] = 1;
		  else
				Trans[i][j] = 0;
		}
	}

	Trans[0][MAXSIZE-1]  =  Tx;
	Trans[1][MAXSIZE-1]  =  Ty;
	Draw(GREEN);
	Mult(Trans);
	Draw(MAGENTA);
	Print();
}

void D_2::Rotate()
{
	double ang;
	const double PI = 22.0/7;
	double xr,yr;
	double TransMat[MAXSIZE][MAXSIZE];
	double RotMat[MAXSIZE][MAXSIZE];
	double InvTransMat[MAXSIZE][MAXSIZE];

	closegraph();
	cout<<"Enter Angle Of Rotation: ";
	cin>>ang;
	cout<<"Enter Point Of Rotation:X: ";
	cin>>xr;
	cout<<"Y: ";
	cin>>yr;
	initialize();
	ang = (PI * ang)/180.0;
	setcolor(YELLOW);
	setfillstyle(SOLID_FILL,YELLOW);
	fillellipse(x/2+xr,y/2-yr,2,2);
	outtextxy(x/2+xr,y/2-yr-2,"  Point Of Rotation");

	//Transformation Matrix
	//Translate arbitrary point to origin then rotate then translate back.
	for(int i=0;i<MAXSIZE;i++)
	{
		for(int j=0;j<MAXSIZE;j++)
		{
			if(i == j)
			{
					TransMat[i][j] = 1;
					InvTransMat[i][j] = 1;
					RotMat[i][j] = 1;
			}
			else
			{
					TransMat[i][j] = 0;
					InvTransMat[i][j] = 0;
					RotMat[i][j] = 0;
			}
		}
	 }

			TransMat[0][2] = -xr;
			TransMat[1][2] = -yr;

			InvTransMat[0][2] = xr;
			InvTransMat[1][2] = yr;

			RotMat[0][0] = cos(ang);
			RotMat[0][1] = -sin(ang);
			RotMat[1][0] = sin(ang);
			RotMat[1][1] = cos(ang);

	 Draw(GREEN);
	 Print();
	 MultTwoMat(InvTransMat,RotMat);
	 MultTwoMat(RotMat,TransMat);
	 Mult(TransMat);
	 Draw(MAGENTA);
}

void D_2::Reflect()
{
	double ang;
	double a,b,c;
	double xr,yr;
	double TransMat[MAXSIZE][MAXSIZE];
	double RotMat[MAXSIZE][MAXSIZE];
	double InvTransMat[MAXSIZE][MAXSIZE];
	double InvRotMat[MAXSIZE][MAXSIZE];
	double RefMat[MAXSIZE][MAXSIZE];

	closegraph();
	cout<<"Enter The Line (ax+by+c=0): ";
	cout<<"a: ";
	cin>>a;
	cout<<"b: ";
	cin>>b;
	cout<<"c: ";
	cin>>c;
	if(b!=0)
	{
		yr = (-c/b);
		xr = 0;
		double m = -a/b;
		ang = atan(m);

	}
	else
	{
		yr = 0;
		xr = (-c/a);
		ang = 22.0/14.0;   // Angle = PI/2
	}


	initialize();
	//Transformation Matrix
	//Translate arbitrary point to origin then rotate then translate back.
	for(int i=0;i<MAXSIZE;i++)
	{
		for(int j=0;j<MAXSIZE;j++)
		{
			if(i == j)
			{
					TransMat[i][j] = 1;
					InvTransMat[i][j] = 1;
					RotMat[i][j] = 1;
					InvRotMat[i][j] = 1;
					RefMat[i][j] = 1;

			}
			else
			{
					TransMat[i][j] = 0;
					InvTransMat[i][j] = 0;
					RotMat[i][j] = 0;
					InvRotMat[i][j] = 0;
					RefMat[i][j] = 0;
			}
		}
	 }

			TransMat[0][2] = -xr;
			TransMat[1][2] = -yr;

			InvTransMat[0][2] = xr;
			InvTransMat[1][2] = yr;

			RotMat[0][0] = cos(ang);
			RotMat[0][1] = sin(ang);
			RotMat[1][0] = -sin(ang);
			RotMat[1][1] = cos(ang);

			InvRotMat[0][0] = cos(ang);
			InvRotMat[0][1] = -sin(ang);
			InvRotMat[1][0] = sin(ang);
			InvRotMat[1][1] = cos(ang);

		for(i=0;i<MAXSIZE;i++)
		{
			for(int j=0;j<MAXSIZE;j++)
			{
				if(i==j)
					RefMat[i][j] = pow(-1,i)*1;
				else
					RefMat[i][j] = 0;
		}
}

	 Print();
	 Draw(GREEN);
	 MultTwoMat(InvTransMat,InvRotMat);
	 MultTwoMat(InvRotMat,RefMat);
	 MultTwoMat(RefMat,RotMat);
	 MultTwoMat(RotMat,TransMat);
	 Mult(TransMat);
	 Draw(MAGENTA);
}

void D_2::Shear()
{
	double ang;
	double a,b,c;
	double xr,yr,shx;
	double TransMat[MAXSIZE][MAXSIZE];
	double RotMat[MAXSIZE][MAXSIZE];
	double InvTransMat[MAXSIZE][MAXSIZE];
	double InvRotMat[MAXSIZE][MAXSIZE];
	double ShearMat[MAXSIZE][MAXSIZE];

	closegraph();
	cout<<"Enter The Line (ax+by+c=0): ";
	cout<<"a: ";
	cin>>a;
	cout<<"b: ";
	cin>>b;
	cout<<"c: ";
	cin>>c;
	cout<<"Enter Shearing Factor Along X-Axis: ";
	cin>>shx;
	if(b!=0)
	{
		yr = (-c/b);
		xr = 0;
		double m = -a/b;
		ang = atan(m);

	}
	else
	{
		yr = 0;
		xr = (-c/a);
		ang = 22.0/14.0;   // Angle = PI/2
	}


	initialize();

	//Transformation Matrix
	for(int i=0;i<MAXSIZE;i++)
	{
		for(int j=0;j<MAXSIZE;j++)
		{
			if(i == j)
			{
					TransMat[i][j] = 1;
					InvTransMat[i][j] = 1;
					RotMat[i][j] = 1;
					InvRotMat[i][j] = 1;
					ShearMat[i][j] = 1;

			}
			else
			{
					TransMat[i][j] = 0;
					InvTransMat[i][j] = 0;
					RotMat[i][j] = 0;
					InvRotMat[i][j] = 0;
					ShearMat[i][j] = 0;
			}
		}
	 }

			TransMat[0][2] = -xr;
			TransMat[1][2] = -yr;

			InvTransMat[0][2] = xr;
			InvTransMat[1][2] = yr;

			RotMat[0][0] = cos(ang);
			RotMat[0][1] = sin(ang);
			RotMat[1][0] = -sin(ang);
			RotMat[1][1] = cos(ang);

			InvRotMat[0][0] = cos(ang);
			InvRotMat[0][1] = -sin(ang);
			InvRotMat[1][0] = sin(ang);
			InvRotMat[1][1] = cos(ang);

			ShearMat[0][1] = shx;

	 Print();
	 Draw(GREEN);
	 MultTwoMat(InvTransMat,InvRotMat);
	 MultTwoMat(InvRotMat,ShearMat);
	 MultTwoMat(ShearMat,RotMat);
	 MultTwoMat(RotMat,TransMat);
	 Mult(TransMat);
	 Draw(MAGENTA);
}

void D_2::Scale_Fixed()
{
	double sx,sy;
	double xr,yr;
	double TransMat[MAXSIZE][MAXSIZE];
	double ScaleMat[MAXSIZE][MAXSIZE];
	double InvTransMat[MAXSIZE][MAXSIZE];

	closegraph();
	cout<<"Enter The Scaling Factor Along X-Axis: ";
	cin>>sx;
	cout<<"Enter The Scaling Factor Along Y-Axis: ";
	cin>>sy;
	cout<<"Enter Point Of Scaling:X: ";
	cin>>xr;
	cout<<"Y: ";
	cin>>yr;
	initialize();

	//Transformation Matrix
	for(int i=0;i<MAXSIZE;i++)
	{
		for(int j=0;j<MAXSIZE;j++)
		{
			if(i == j)
			{
					TransMat[i][j] = 1;
					InvTransMat[i][j] = 1;
					ScaleMat[i][j] = 1;
			}
			else
			{
					TransMat[i][j] = 0;
					InvTransMat[i][j] = 0;
					ScaleMat[i][j] = 0;
			}
		}
	 }

			TransMat[0][2] = -xr;
			TransMat[1][2] = -yr;

			InvTransMat[0][2] = xr;
			InvTransMat[1][2] = yr;

			ScaleMat[0][0] = sx;
			ScaleMat[1][1] = sy;

	 Draw(GREEN);
	 Print();
	 MultTwoMat(InvTransMat,ScaleMat);
	 MultTwoMat(ScaleMat,TransMat);
	 Mult(TransMat);
	 Draw(MAGENTA);
}
void D_2::Scale_Dir()
{
	double sx,sy;
	double ang;
	const double PI = 22.0/7;
	double RotMat[MAXSIZE][MAXSIZE];
	double ScaleMat[MAXSIZE][MAXSIZE];
	double InvRotMat[MAXSIZE][MAXSIZE];

	closegraph();
	cout<<"\n Enter The Scaling Factor Along X-Axis: ";
	cin>>sx;
	cout<<"\n Enter The Scaling Factor Along Y-Axis: ";
	cin>>sy;
	cout<<"\n Enter The Direction Of Scaling: ";
	cin>>ang;
	ang = (PI * ang)/180.0;
	initialize();


	//Transformation Matrix
	for(int i=0;i<MAXSIZE;i++)
	{
		for(int j=0;j<MAXSIZE;j++)
		{
			if(i == j)
			{
					RotMat[i][j] = 1;
					InvRotMat[i][j] = 1;
					ScaleMat[i][j] = 1;
			}
			else
			{
					RotMat[i][j] = 0;
					InvRotMat[i][j] = 0;
					ScaleMat[i][j] = 0;
			}
		}
	 }

			RotMat[0][0] = cos(ang);
			RotMat[0][1] = sin(ang);
			RotMat[1][0] = -sin(ang);
			RotMat[1][1] = cos(ang);

			InvRotMat[0][0] = cos(ang);
			InvRotMat[0][1] = -sin(ang);
			InvRotMat[1][0] = sin(ang);
			InvRotMat[1][1] = cos(ang);

			ScaleMat[0][0] = sx;
			ScaleMat[1][1] = sy;

	 Draw(GREEN);
	 Print();
	 MultTwoMat(RotMat,ScaleMat);
	 MultTwoMat(ScaleMat,InvRotMat);
	 Mult(InvRotMat);
	 Draw(MAGENTA);
}

void main()
{
	D_2 D1;
	D1.DrawCord();
	getch();
	int ch;

	D1.GetPoints();
	D1.Draw(GREEN);
	getch();

	do
	{
		closegraph();
		clrscr();
		cout<<"\n 1.To ReDraw The Triangle.";
		cout<<"\n 2.Translate The Triangle.";
		cout<<"\n 3.Scaling The Triangle About Fixed Point.";
		cout<<"\n 4.Scaling The Triangle In A Direction.";
		cout<<"\n 5.Rotating The Triangle About Arbitrary Point.";
		cout<<"\n 6.Reflecting The Triangle About Arbitrary Line.";
		cout<<"\n 7.Shearing Of The Triangle.";
		cout<<"\n 8.Exit.";
		cout<<"\n Enter The Choice: ";
		cin>>ch;
		D1.initialize();
	switch(ch)
	{
	 case 1:
			D1.GetPoints();
			D1.Draw(GREEN);
			getch();
			break;

	case 2:
			cleardevice();
			D1.Translate();
			getch();
			closegraph();
			break;
	case 3:
			cleardevice();
			D1.Scale_Fixed();
			getch();
			closegraph();
			break;
	case 4:
		   cleardevice();
		   D1.Scale_Dir();
		   getch();
		   closegraph();
		   break;
	case 5:
			cleardevice();
			D1.Rotate();
			getch();
			closegraph();
			break;
	case 6:
			cleardevice();
			D1.Reflect();
			getch();
			closegraph();
			break;

	 case 7:
			cleardevice();
			D1.Shear();
			getch();
			closegraph();
			break;
	 case 8:
			return;
	 default:
			cout<<"WRONG CHOICE.";
			getch();
			break;
	}
 }while(1);
}
