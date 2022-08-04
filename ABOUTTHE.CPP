#include<graphics.h>
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<process.h>
void intro(int &a)
{
 cleardevice();
 char ch;
 a=1;
 setbkcolor(13);
 setcolor(8);
 settextstyle(7,0,5);
 outtextxy(10,5,"ABOUT THE GAME");
 rectangle(10,50,620,470);
 setfillstyle(10,8);
 floodfill(200,200,8);
 settextstyle(7,0,2);
 setcolor(15);
 outtextxy(20,60,"1. THIS GAME IS ALL ABOUT SOLVING CROSSWORDS.");
 outtextxy(20,100,"2. THERE ARE FOUR TOPICS IN THIS GAME AND");
 outtextxy(20,120,"  THE PLAYER CAN CHOOSE ANY ONE AT A TIME,");
 outtextxy(20,140,"  AND PLAY IT.");
 outtextxy(20,180,"3. TO ENTER AN ANSWER FIRST ENTER THE ");
 outtextxy(20,200," CHOICE OF DIRECTION GIVEN PRESS ENTER &" );
 outtextxy(20,220," ENTER THE QUEST. NO.& PRESS ENTER.");
 outtextxy(20,240," TYPE YOUR ANSWER THERE,IF CORRECT IT");
 outtextxy(20,260," WILL BE PRINTED IN THE BOXES.");
 settextstyle(7,0,2);
 setcolor(BLUE);
 outtextxy(100,300," PRESS E TO EXIT ELSE ENTER Y");
 settextstyle(7,0,5);
 setcolor(YELLOW);
 outtextxy(80,400,"KEEP CROSSWORDING!!");
 gotoxy(25,22);
 cin>>ch;
 if(ch=='e'||ch=='E')
  a=-1;
 getch();
}