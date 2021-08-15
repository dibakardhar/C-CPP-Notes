//**************************************
// Name: Simple Snake Game
// Description:Simple snake game written in C/SDL under linux, with Code::Blocks.
The code can be compiled under windows without any problem.
click "U" to speed up
click "L" to speed down
// By : fuzzyprograms
//
//This code is copyrighted and has// limited warranties.Please see http://www.Planet-Source-Code.com/vb/scripts/ShowCode.asp?txtCodeId=10561&lngWId=3//for details.//**************************************

#include <stdlib.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <time.h>
#define N 500 /*snake max length*/
#define NODESIZE 10 /*node height & width*/
#define WINSIZE 400 /*window height & width*/
/********************************* types **************************************/
typedef enum {Up, Down, Right, Left}TDirection; /*possible direction type*/
/******************************************************************************/
/********************************* ecran **************************************/
SDL_Surface* screen = NULL; /*main screen*/
SDL_Surface* Table[N] = {NULL}; /*snake node table*/
SDL_Surface* blank; /*background (will be totaly wait)*/
SDL_Surface* puce; /*snake puce*/
/******************************************************************************/
/********************************* positions **********************************/
SDL_RectTabpos[N], /*snake node positions*/
ppuce; /*puce positions*/
/******************************************************************************/
/*********************************** other ***********************************/
int NodeCounter; /*snake node counter*/
TDirection direction; /*current direction*/
SDL_TimerID timer; /*timer descriptor*/
/******************************************************************************/
/************************* functions Prototypes ***************************/
Uint32 Anime_it (Uint32, void *);
int snakeColl(void);
void Quitter(void); // will be executed when exiting the game
void SetPos(void);
void MoveSnake (void);
void Show (void);
void PurgeScreen (void);
void SetPuce(void);
void Lose (void);
void freeNodes (void);
void AddNode(void);
/******************************************************************************/
int main ( int argc, char** argv )
{
 Uint32 speed; /*game speed*/
 SDL_Event event;
 int done; 
 int i; 
srand (time(NULL)); /*initialisation*/
 /*SDL lib initialisation*/
i = SDL_Init (SDL_INIT_VIDEO|SDL_DOUBLEBUF| SDL_INIT_TIMER);
if (i < 0){
fprintf (stderr, "Error loading: %s", SDL_GetError());
 exit(EXIT_FAILURE);
 }
atexit (Quitter);
screen = SDL_SetVideoMode (WINSIZE, WINSIZE, 32, SDL_HWSURFACE);
if (screen == NULL){
 fprintf (stderr, "mode 640x480 can't be applied: %s", SDL_GetError ());
 exit (EXIT_FAILURE);
 }
SDL_WM_SetCaption ("Simple Snake Game by Goundy", NULL);
/*Initialisations*/
 speed = 30;
 done = 1;
 NodeCounter = 10;
 direction = Right;
Table[0] = SDL_CreateRGBSurface(SDL_HWSURFACE, NODESIZE, NODESIZE, 32, 0, 0, 0, 0);
SDL_FillRect (Table[0], NULL, SDL_MapRGB (Table[0]->format, 0, 255, 0));
Tabpos[0].x = screen->w/2;
Tabpos[0].y = screen->h/2;
 for (i=1; i<NodeCounter; i++){
 Table[i] = SDL_CreateRGBSurface(SDL_HWSURFACE, NODESIZE, NODESIZE, 32, 0, 0, 0, 0);
 SDL_FillRect (Table[i], NULL, SDL_MapRGB (Table[i]->format, 0, 255, 0));
 Tabpos[i].x = Tabpos[i-1].x - NODESIZE;
 Tabpos[i].y = screen->h/2;
}
Show ();
SDL_Flip (screen);
timer = SDL_AddTimer(1, Anime_it, &speed);
SetPuce ();
while (done){
SDL_WaitEvent (&event);
 switch (event.type){
case SDL_QUIT:
 done = 0;
 break;
case SDL_KEYDOWN:
switch (event.key.keysym.sym){
case SDLK_UP:
 if (direction != Down)
 direction = Up;
 break;
case SDLK_DOWN:
 if (direction != Up)
 direction = Down;
 break;
case SDLK_RIGHT:
 if (direction != Left)
 direction = Right;
 break;
case SDLK_LEFT:
 if (direction != Right)
 direction = Left;
 break;
case SDLK_u: /*increment speed*/
 if ((speed-5)>0)
 speed-=5;
 break;
case SDLK_l:/*decrement speed*/
 if ((speed+5)<100)
 speed+=5;
 break;
case SDLK_ESCAPE:
 done = 0;
 break;
 }
break;
 }/*SWITCH*/
 }/*WHILE*/
 return 0;
}
void MoveSnake (){
/*s'occupe de faire bouger le snake*/
switch (direction){
case Up:
 if ((Tabpos[0].y - NODESIZE)>=0)
 Tabpos[0].y -= NODESIZE;
 else
 Lose ();
 break;
case Down:
 if ((Tabpos[0].y + NODESIZE)< screen->h)
 Tabpos[0].y += NODESIZE;
 else
 Lose ();
 break;
case Right:
 if ((Tabpos[0].x + NODESIZE)< screen->w)
 Tabpos[0].x += NODESIZE;
 else
 Lose ();
 break;
case Left:
 if ((Tabpos[0].x - NODESIZE)>= 0)
 Tabpos[0].x -= NODESIZE;
 else
 Lose ();
 break;
 }
 /*on v�rifi si on a bouff� quelque chose, et si oui on ajoute un node*/
 if ((Tabpos[0].x == ppuce.x)&&(Tabpos[0].y == ppuce.y))
AddNode ();
 /*s'il le snake heurte sa queu, paffff lose :)*/
 if (snakeColl()) Lose();
 }
void SetPos (void){
/*application des modifications sur les positions des nodes de la queu du snake*/
 int i;
 for (i=(NodeCounter-1); i>0; i--){
Tabpos[i].x = Tabpos[i-1].x;
Tabpos[i].y = Tabpos[i-1].y;
}
 }
void Show (void){
/*blit toutes les surfaces sur l'ecran principales avant rafraichissement*/
 int i;
 for (i=0; i<NodeCounter; i++)
SDL_BlitSurface (Table[i], NULL, screen, &Tabpos[i]);
SDL_BlitSurface (puce, NULL, screen, &ppuce);
 }
void Quitter (void){
 freeNodes ();
 SDL_FreeSurface (puce);
 SDL_Quit();
 }
void PurgeScreen (void){
/*Destruction de l'interface en ins�rant une surface toute blanche*/
 SDL_Rect p;
p.x = 0;
p.y = 0;
blank = SDL_CreateRGBSurface(SDL_HWSURFACE, screen->h, screen->w, 32, 0, 0, 0, 0);
SDL_FillRect (blank, NULL, SDL_MapRGB (blank->format, 255, 255, 255));
SDL_BlitSurface (blank, NULL, screen, &p);
SDL_FreeSurface (blank);
 }
void SetPuce (){
/*ins�rtion d'une puce dans le jeu*/
 int genx, geny,
flag = 1,
cpt;
 while (flag){
flag = 0;
genx = (rand() % (WINSIZE/10))*NODESIZE;
for (cpt=0; cpt<NodeCounter; cpt++)
 if (genx == Tabpos[cpt].x){
 flag = 1;
 break;
 }
}
 flag = 1;
 while (flag){
flag = 0;
geny = (rand() % (WINSIZE/10))*NODESIZE;
for (cpt=0; cpt<NodeCounter; cpt++)
 if (geny == Tabpos[cpt].y){
 flag = 1;
 break;
 }
}
puce = SDL_CreateRGBSurface(SDL_HWSURFACE, NODESIZE, NODESIZE, 32, 0, 0, 0, 0);
SDL_FillRect (puce, NULL, SDL_MapRGB (puce->format, 255, 0, 0));
ppuce.x = genx;
ppuce.y = geny;
SDL_BlitSurface (puce, NULL, screen, &ppuce);
 }
Uint32 Anime_it (Uint32 interval, void *param){
/*fonction callback du timer, elle fait boug� le snakouille :p*/
 Uint32 *t = (Uint32*)param;
SDL_Delay (*t);
MoveSnake ();
SetPos ();
PurgeScreen ();
Show ();
SDL_Flip (screen);
 return interval;
 }
void Lose (void){
/*bah si on a perdu on fais quelque chose ch� po moi!*/
 SDL_RemoveTimer(timer);
}
void freeNodes (void){
/*lib�ration de la m�moire allou�e pour les nodes*/
 int i;
 for (i=0; i<NodeCounter; i++)
SDL_FreeSurface (Table[i]);
 }
void AddNode (void){
/*ajout d'un node au snake*/
 NodeCounter++;
 Table[NodeCounter-1] = SDL_CreateRGBSurface(SDL_HWSURFACE, NODESIZE, NODESIZE, 32, 0, 0, 0, 0);
 SDL_FillRect (Table[NodeCounter-1], NULL, SDL_MapRGB (Table[NodeCounter-1]->format, 0, 255, 0));
 SetPuce ();
}
int snakeColl (void){
/*retourne 1 i le snake heurte sa queu :p*/
 int i,
cl = 0;
 for (i=3; i<NodeCounter; i++)
if ((Tabpos[0].x == Tabpos[i].x)&&(Tabpos[0].y == Tabpos[i].y)){
cl = 1;
break;
}
return cl;
 }