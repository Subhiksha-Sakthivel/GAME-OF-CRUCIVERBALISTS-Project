#include<iostream.h>
#include<graphics.h>
#include<conio.h>
#include<dos.h>
#include<time.h>
void loading()
{
 cleardevice();
 setbkcolor(3);
 settextstyle(7,0,3);
 setcolor(15);
 outtextxy(250,130,"PLEASE WAIT...!");
 outtextxy(270,210,"LOADING...!");
 rectangle(99,179,550,201);
 for(int i=0;i<450;i++)
 {
  setcolor(14);
  rectangle(100,180,100+i,200);
  delay(14);
 }
 setcolor(8);
 outtextxy(260,270,"Press enter!");
 getch();
}