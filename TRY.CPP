#include <iostream.h>
#include <conio.h>
#include <graphics.h>
#include <dos.h>
void title()
{
  cleardevice();
  int i;
  for(i=0;i<140;i+=10)
  {
    cleardevice();
    setbkcolor(0);
    setcolor(6);
    setfillstyle(1,6);
    bar3d(140-i,10,310-i,470,10,10);
    bar3d(320+i,10,500+i,470,10,10);
    delay(750);
  }
  line(300,200,315,220);
  line(340,220,355,200);
  line(315,220,327,280);
  line(340,220,327,280);
  line(300,200,355,200);
  setcolor(14);
  setfillstyle(1,14);
  pieslice(327,200,0,180,20);
  settextstyle(7,0,4);
  setcolor(15);
  outtextxy(250,310,"WELCOME!");
  outtextxy(100,100,"GAME OF CRUCIVERBALISTS");
  outtextxy(250,360,"DONE BY:");
  outtextxy(5,410,"S.SUBHIKSHA & NISHCHALA MUKKU");
  getch();
}


