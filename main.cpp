#include <graphics.h>

#include <stdio.h>

#include <ctime>

#include <stdlib.h>

#include <mmsystem.h>

#include <windows.h>

void start();

void start1 (int *,int,int,int,int,int *);

 int k=0,l=1,m=2,n=3,c=0,d=0,i=0,f;

 int static j=0;

 static int ca=0;

 static int yz=0;

 bool gameover ;

 char a[80];

 static int de=13;

 static int score=0;

 bool shoot=true;

 bool speed=false;

int b=280;

void ak(int *);

void ak(int *j)
 {

 // ro=yz+1;

 line(5,0+(*j),5,70+(*j));

 line (5,0+(*j),15,0+(*j));

 line (5,70+(*j),15,70+(*j));

 line (15,0+*j,15,70+*j);

 floodfill(11,1+(*j),k);

setcolor(l);

setfillstyle(SOLID_FILL,l);

line (15,10+(*j),15,60+(*j));

 line(25,10+(*j),25,60+(*j));

 line (15,10+(*j),25,10+(*j));

 line (15,60+(*j),25,60+(*j));

floodfill(20,11+(*j),l);

setcolor(m);

setfillstyle(SOLID_FILL,m);

line (25,20+(*j),25,50+(*j));

 line(35,20+(*j),35,50+(*j));

 line (25,20+(*j),35,20+(*j));

 line (25,50+(*j),35,50+(*j));

floodfill(28,21+(*j),m);

setcolor (n);

setfillstyle(SOLID_FILL,n);

line(35,30+(*j) ,35,40+(*j));

 line(45,30+(*j),45,40+(*j));

 line (35,30+(*j),45,30+(*j));

 line (35,40+(*j),45,40+(*j));

floodfill(36,31+(*j),n);

//getch()
//man();

if ((*j)<getmaxy()){

(*j)++;

 (*j)=(*j)+(yz);
}

 //delay (30);

}

//outtextxy(200,200,"welcome to shotting games");
void man ();

void setup ();

void result ();

void quiet();

 void welcome ();

 void load ();

 void board ();

 void abc();

 void abc(){

 result ();

 }

 void board()
 {

int ro;

 for (j=0;
j<=getmaxy();
j++)
 {

 sprintf (a," total score:%d",score);

 outtextxy(200,2,a);

 man ();

 setcolor(k);

 setfillstyle(SOLID_FILL,k);

 line(5,0+j,5,70+j);

 line (5,0+j,15,0+j);

 line (5,70+j,15,70+j);

 line (15,0+j,15,70+j);

 floodfill(11,2+j,k);

setcolor(l);

setfillstyle(SOLID_FILL,l);

line (15,10+j,15,60+j);

 line(25,10+j,25,60+j);

 line (15,10+j,25,10+j);

 line (15,60+j,25,60+j);

floodfill(20,11+j,l);

setcolor(m);

setfillstyle(SOLID_FILL,m);

line (25,20+j,25,50+j);

 line(35,20+j,35,50+j);

 line (25,20+j,35,20+j);

 line (25,50+j,35,50+j);

floodfill(28,21+j,m);

setcolor (n);

setfillstyle(SOLID_FILL,n);

line(35,30+j,35,40+j);

 line(45,30+j,45,40+j);

 line (35,30+j,45,30+j);

 line (35,40+j,45,40+j);

floodfill(36,31+j,n);

ro=yz+1;

 j=j+(ro)-1;

 delay (50);

 cleardevice();

if (j%70==0){

 k++;

 l++;

 m++;

 n++;
}
 if (n>
=10)
 {

 k=0;

 l=1;

 m=2;

 n=3;

 }

 line (620,b,570,b);

start1 (&j ,k,l,m,n,&de);

/*if (speed)
{

 yz++;

}
*/
speed=false;

if (j>
=getmaxy())
 {

 j=0;

 shoot=true;

 }

 }

 }

char r[50];

//char a[20];

void load ()
{

 struct arccoordstype a;

 int z=0;

 cleardevice();

 while (z<=360)
 {

 setcolor(GREEN);

 arc(350,250,z,z,50);

 getarccoords(&a);

 circle(a.xend,a.yend,20);

 // floodfill(a.xend,a.yend,YELLOW);

 z+=3;

 outtextxy(80,350,"loading....");

 delay(30);

 }

outtextxy( 30,400,"press space to shoot arrow");

outtextxy (40,450,"press any key to start game");

PlaySound(TEXT("a.wav"),NULL,SND_SYNC);

getch();

cleardevice();

}

void welcome()
{

 settextstyle(DEFAULT_FONT, HORIZ_DIR, 2);

 // initwindow(getmaxx(),getmaxy(),"image");

 readimagefile("game.jpg",0,0,639,479);

 PlaySound(TEXT("tamba_112.wav"),NULL,SND_SYNC);

 delay(2000);

cleardevice();

 readimagefile("ronaldo.jpg",0,0,639,479);

 outtextxy(80,9,"welcome to game zone ");

delay(2200);
cleardevice();

 readimagefile("shoot2.jpg",0,0,639,479);

 outtextxy(100,20,"check your accuracy here");

delay(2500);

cleardevice();

int j=250;

int o=60;

outtextxy(5,2,"RULES FOR GAMES");

outtextxy(5,30,"1.click any button of mouse to shoot arrow");

outtextxy(5,60,"2.you have shoot four arrow in board");

outtextxy(5,90,"3.the speed of arrow will increase after ");

outtextxy(5,120," you shoot completed");

outtextxy(5,150,"4.you will get your result according");

outtextxy(5,180," to your score");

outtextxy(5,400,"press any key to continue");

 setcolor(2);

 setfillstyle(SOLID_FILL,2);

 line(5,0+j,5,70+j);

 line (5,0+j,15,0+j);

 line (5,70+j,15,70+j);

 line (15,0+j,15,70+j);

 floodfill(11,2+j,2);

setcolor(3);

setfillstyle(SOLID_FILL,3);

line (15,10+j,15,60+j);

 line(25,10+j,25,60+j);

 line (15,10+j,25,10+j);

 line (15,60+j,25,60+j);

floodfill(20,11+j,3);

setcolor(4);

setfillstyle(SOLID_FILL,4);

line (25,20+j,25,50+j);

 line(35,20+j,35,50+j);

 line (25,20+j,35,20+j);

 line (25,50+j,35,50+j);

floodfill(28,21+j,4);

setcolor (5);

setfillstyle(SOLID_FILL,n);

line(35,30+j,35,40+j);

 line(45,30+j,45,40+j);

 line (35,30+j,45,30+j);

 line (35,40+j,45,40+j);

floodfill(36,31+j,5);

 struct arccoordstype cat;

arc(575,220+o,130,220,140);

getarccoords(&cat);

setfillstyle(SOLID_FILL,BLUE);

line (545,220+o,400,220+o);

line (cat.xend ,cat.yend,544,220+o);

line (cat.xstart,cat.ystart,544,220+o);

man();

getch();
}

void jpt ();

void quiet ()
{

 gameover=true;

}

void result ()
{

 cleardevice();

 if (score>
=180){

 outtextxy(150,250,"you have high accuracy");

sprintf( a,"your final score is %d",score);

outtextxy(250,350,a);

 PlaySound(TEXT("applause2.wav"),NULL,SND_SYNC);
}

 if (score<=180&&score>
=50){

 outtextxy(150,250,"you have considerable accuracy");

sprintf( a,"your final score is %d",score);

outtextxy(250,350,a);

 PlaySound(TEXT("applause2.wav"),NULL,SND_SYNC);
}

 if (score<=50){

 outtextxy(150,250,"you have low accuracy ");

 outtextxy(150,300,"you need to practise");

sprintf( a,"your final score is %d",score);

outtextxy(250,350,a);

 PlaySound(TEXT("applause2.wav"),NULL,SND_SYNC);
}

delay(4500);

cleardevice();

outtextxy(2,250," press p to continue or any to quite game");

while (1){

 if(getch()==112){

 shoot=true;

 jpt();

 break;
 }

 else
 exit(0);

}

 delay (5000);

}

 void man ()
 {

 int o=60;

 setcolor(GREEN);

 circle(545,163+o,20);

 setfillstyle(SOLID_FILL,GREEN);

 floodfill(545,163+o,GREEN);

 line (520,190+o,570,190+o);
//neck
 arc (520,196+o,90,190,6);

 arc (570,196+o,0,90,6);
//left arc
setcolor(BLUE);

setfillstyle(SOLID_FILL,BLUE);

line (514,196+o,514,210+o);
//right arc
line (511,230+o,455,230+o);
//right lowe hand
line (590,230+o,540,230+o);
//left upper land line
line (590,210+o,540,210+o);
//left lower hand line
arc (540,220+o,90,270,10);
//fire
arc (590,220+o,270,90,10);
//left back arc
arc (540,220+o,270,90,10);
//right circ
arc (455,220+o,90,270,10);
//rightcirc
line (576,196+o,576,210+o);
//left connectionn to arc
setcolor(BROWN);

setfillstyle(SOLID_FILL,BROWN);

line (576,230+o,576,280+o);
// left after hand
line (576,280+o,576,390+o);
//left leg leftmost
line (545,320+o,556,390+o);
//left leg left
line (576,390+o,556,390+o);

line (558,390+o,558,398+o);

line (574,390+o,574,398+o);

//left shoe
setcolor(RED);

setfillstyle(SOLID_FILL,RED);

line (576,398+o,539,398+o);

line (576,412+o,539,412+o);

arc (539,405+o,90,270,7);

line (576,398+o,576,412+o);

//floodfill(575,397,YELLOW);

//left shoe end
 line (514,210+o,455,210+o);
//right hand upper part
 line (511,230+o,511,280+o);
// right after hand
 line (511,280+o,576,280+o);
//connection line stomach
 line (511,280+o,491,390+o);
//right rightmost part
 line (545, 320+o,518,390+o);
//right right
 line (491,390+o,518,390+o);

 setcolor(BLACK);

 setfillstyle(SOLID_FILL,BLACK);

line (493,390+o,490,398+o);

line (516,390+o,513,398+o);

line (518,398+o,475,398+o);

line (518,412+o,475,412+o);

line (518,398+o,518,412+o);

arc (475,405+o,90,270,7);

//bow
 struct arccoordstype cat;

arc(575,220+o,130,220,130);

getarccoords(&cat);

line (545,220+o,415,220+o);

line (cat.xend ,cat.yend,544,220+o);

line (cat.xstart,cat.ystart,544,220+o);

 }

void setup ()
{

 gameover=false ;

 outtextxy(300,330,"score:");

}

 void start1( int *j,int k,int l,int m,int n,int *de)
{
 int w=0;

 int p=0;

 sprintf (a," total score:%d",score);

 outtextxy(200,2,a);

 // int ro=*jo;

 // while (kbhit()){

 // if (getch()==32)
// {

if (GetAsyncKeyState(VK_LBUTTON)){

while (shoot&&yz<=4){

// PlaySound(TEXT("arrowsplash.wav"),NULL,SND_SYNC);

// delay(56);

speed=true;

for (i=0;
i<getmaxx();
i+=1)
 {

 {

sprintf (a," total score:%d",score);

 outtextxy(200,2,a);

 setcolor(k);

 setfillstyle(SOLID_FILL,k);

 ak(j);

man ();

 }

setcolor (BLUE);

if (yz<=4)
{

p+=10;

setfillstyle(SOLID_FILL,BLUE);

 line (getmaxx()-p-104,b,getmaxx()-p-174,b);

 man ();

for (int mn=w;
mn<10;
mn++)
 {
 //cleardevice();

 sprintf (a," total score:%d",score);

 outtextxy(200,2,a);

 ak(j);

cleardevice();

 man();

 struct arccoordstype cat;

arc(575,b,130,220,130);

getarccoords(&cat);

setcolor(15);

setfillstyle(SOLID_FILL,BLACK);

line (545-mn,b,415-mn,b);

//line ()
line (cat.xend ,cat.yend,544-mn,b);

line (cat.xstart,cat.ystart,544-mn,b);

//delay(0);

p+=10;

setcolor(15);

setfillstyle(SOLID_FILL,15);

 line (getmaxx()-p-104,b,getmaxx()-p-174,b);

}

w=88;

shoot=false;

}

//else {

 // abc();

//}

 if (*j<=b &&*j+10>
=b)
 {
if (getmaxx()-p-174==15){

 // sound (1500);

 score=score+10;

 outtextxy(100,250," your scored :10");

 sprintf (a,"total score:%d",score);

 outtextxy(200,2,a);

 yz++;

 PlaySound(TEXT("arrowhit.wav"),NULL,SND_SYNC);

 delay(1850);

 i=getmaxx();

 //abc();

 }
}

 else if (60+*j<=b &&*j+70>
=b)
 {
 if (getmaxx()-p-174==15){

 score=score+10;

 outtextxy(100,250,"your scored :10");

 sprintf (a,"total score:%d",score);

 outtextxy(200,2,a);

 yz++;

PlaySound(TEXT("arrowhit.wav"),NULL,SND_SYNC);

 delay(1850);

 i=getmaxx();

//abc();

 }
}

 else if (*j+10<=b &&*j+20>
=b)
 {
 if (getmaxx()-p-174==25){

 score+=20;

 outtextxy(100,250," you scored :20");

 sprintf (a,"total score:%d",score);

 outtextxy(200,2,a);

 yz++;

PlaySound(TEXT("arrowhit.wav"),NULL,SND_SYNC);

 delay(1850);

 i=getmaxx();

//abc();

 }
}

 else if (*j+20<=b &&*j+30>
=b)
 {
if (getmaxx()-p-174==35){

 score=score+30;

 outtextxy(100,250,"your scored :30");

 sprintf (a,"total score:%d",score);

 outtextxy(200,2,a);

 yz++;

PlaySound(TEXT("arrowhit.wav"),NULL,SND_SYNC);

 delay(1850);

 i=getmaxx();

//abc();

 }
}

 else if (*j+50<=b &&*j+60>
=b)
 {
 if (getmaxx()-p-174==25){

 score=score+20;

 i=getmaxx();
 outtextxy(100,250,"your scored :20");

 sprintf (a,"total score:%d",score);

 outtextxy(200,2,a);

 yz++;

PlaySound(TEXT("arrowhit.wav"),NULL,SND_SYNC);

 delay(1850);

 //abc();

 }
}

 else if (*j+40<=b &&*j+50>
=b)
 {
if (getmaxx()-p-174==35){

 score=score+30;

 i=getmaxx();

 outtextxy(100,250,"your scored :30");

 sprintf (a,"total score:%d",score);

 outtextxy(200,2,a);

 yz++;

 PlaySound(TEXT("arrowhit.wav"),NULL,SND_SYNC);

 delay(1850);

 // abc();

 }
}

 else if (*j+30<=b &&*j+40>
=b)
 {
if (getmaxx()-p-174==45){

 score=score+50;

outtextxy(100,250,"your scored :50");

 sprintf (a,"total score:%d",score);

 outtextxy(200,2,a);

 yz++;

 PlaySound(TEXT("arrowhit.wav"),NULL,SND_SYNC);

 delay(1850);

 i=getmaxx();

//abc();

 }
}

delay(50);

 cleardevice();

 if (p>
=getmaxx())
 {

 i=getmaxx();

 }

 }

 //yz++;

 }

 if (yz>
=4){

 abc();

 }

 }
}

 //}
}

 void start()
{

 // while (!kbhit()){

 board();

}

//}

 int main ()
{

//if (GetAsyncKeyState(VK_LBUTTON))
//down:
 int a=DETECT,b;

initgraph(&a,&b,"");

welcome();

load();

setbkcolor(WHITE);

jpt();

/// MOUSE
 getch ();

 closegraph();

 return 0;

 }

 void jpt()
 {
 ca=0;

 score=0;

 yz=0;

 de=13;

 j=0;

 while (!gameover){

 // sprintf (a,"total score:%d",score);

 //outtextxy(2,350,a);

struct arccoordstype cat;

arc(575,270,130,220,130);

getarccoords(&cat);

 start();

 }

 }
