#include <iostream.h>
#include <stdio.h>
#include <ctype.h>
#include <dos.h>
#include <conio.h>
#include <string.h>
#include <graphics.h>
int movies(int &a)
{
  cleardevice();
  a=1;
  int i,j=1,qno,temq,count=0,c[10]={0};
  char ch[25],uc;
  do
  {
  settextstyle(2,0,4);
  setcolor(WHITE);
  rectangle(0,0,639,479);
  rectangle(0,0,10,10);
  rectangle(629,0,639,10);
  rectangle(0,469,10,479);
  rectangle(629,469,639,479);
  for(i=0;i<13*20;i+=20)
  {
     rectangle(20+i,300,40+i,320);//1
     rectangle(380,20+i,400,40+i);//4
  }
  for(i=0;i<8*20;i+=20)
  {
     rectangle(340+i,220,360+i,240);//3
     rectangle(600,20+i,620,40+i);//7
     rectangle(300,40+i,320,60+i);//6
  }
  for(i=0;i<9*20;i+=20)
  {
    rectangle(320+i,20,340+i,40);//2
    rectangle(540,20+i,560,40+i);//5
  }
  for(i=0;i<14*20;i+=20)
    rectangle(260,40+i,280,60+i);//8
  for(i=0;i<21*20;i+=20)
    rectangle(220+i,180,240,200);//9
  for(i=0;i<12*20;i+=20)
    rectangle(120+i,120,140+i,140);//10
  outtextxy(541,20,"5");
  outtextxy(21,300,"1");
  outtextxy(341,221,"3");
  outtextxy(321,20,"2");
  outtextxy(301,40,"6");
  outtextxy(381,20,"4");
  outtextxy(261,40,"8");
  outtextxy(601,20,"7");
  outtextxy(221,180,"9");
  outtextxy(121,120,"10");
    gotoxy(10,24);
    cout<<"ENTER Y TO ANSWER ACROSS OR N TO ANSWER DOWN OR ENTER E TO EXIT:";
    cin>>uc;
    if(toupper(uc)=='E')
     {
	a=-1;
	break;
     }
    gotoxy(10,25);
    if(toupper(uc)=='Y')
     cout<<"ENTER THE QUESTION NUMBER YOU WANT TO ANSWER?(1,2,3,9 OR 10)";
    else
      cout<<"ENTER THE QUESTION NUMBER YOU WANT TO ANSWER?(4,5,6,7 OR 8)";
    cin>>qno;
    if(c[qno-1]==1)
    {
      settextstyle(11,0,10);
      setcolor(WHITE);
      outtextxy(200,420,"YOU HAVE ALREADY ENTERED!!");
      delay(2000);
      goto start;
    };
    settextstyle(2,0,5);
    setcolor(WHITE);
    switch(qno)
    {                                                                                                      //limit
       case 1:
       outtextxy(5,400,"1.a vigilante defends a vile young criminal jokar who throws the town into chaos.");
       break;
       case 2:
       outtextxy(5,400,"2.cobb steals information from his targets by entering their dreams.");
       break;
       case 3:
       outtextxy(5,400,"3.Earth's Mightiest heroes.");
       break;
       case 4:
       outtextxy(5,400,"4.akhil,an underdog and a failure comes to know that his rich father has just");
       outtextxy(5,410,"passed away and a dog has inherited his wealth.");
       break;
       case 5:
       outtextxy(5,400,"5.an adventurous young man who helps his love to rescue the former queen of");
       outtextxy(5,410,"mahishmati.");
       break;
       case 6:
       outtextxy(5,400,"6.Dr.Vasi, a brilliant scientist, builds a unique robot chitti.");
       break;
       case 7:
       outtextxy(5,400,"7.an epic space opera film which focuses on the rebel alliance and its attempt");
       outtextxy(5,410,"to destroy the death star.");
       break;
       case 8:
       outtextxy(5,400,"8.a german industrialist and member of nazi party, tries to save his jewish");
       outtextxy(5,410,"employees.");
       break;
       case 9:
       outtextxy(5,400,"9.series of action films largely concerned with illegal street racing, heists and");
       outtextxy(5,410,"espionage.");
       break;
       case 10:
       outtextxy(5,400,"10.after his father's death,T'Challa returns home to wakanda to inherit his");
       outtextxy(5,410,"throne.");
       break;
       default:
       outtextxy(300,400,"WRONG CHOICE");
       delay(1000);
       goto start;
    }
    cout<<"\n\n\t\t\tENTER YOUR ANSWER:";
    gets(ch);
    setcolor(WHITE);
    if(strcmpi(ch,"THEDARKKNIGHT")==0 && qno==1)
    {
	 temq=1;
	 count++;
	 c[qno-1]++;
    }
    else
      if(strcmpi(ch,"INCEPTION")==0 && qno==2)
      {
	   temq=2;
	   count++;
	   c[qno-1]++;
      }
    else
      if(strcmpi(ch,"AVENGERS")==0 && qno==3)
      {
	   temq=3;
	   count++;
	   c[qno-1]++;
      }
    else
      if(strcmpi(ch,"ENTERTAINMENT")==0 && qno==4)
      {
	   temq=4;
	   count++;
	   c[qno-1]++;
      }
    else
      if(strcmpi(ch,"BAAHUBALI")==0 && qno==5)
      {
	   temq=5;
	   count++;
	   c[qno-1]++;
      }
    else
      if(strcmpi(ch,"ENTHIRAN")==0 && qno==6)
      {
	   temq=6;
	   count++;
	   c[qno-1]++;
      }
    else
      if(strcmpi(ch,"STARWARS")==0 && qno==7)
      {
	   temq=7;
	   count++;
	   c[qno-1]++;
      }
    else
      if(strcmpi(ch,"SCHINDLERSLIST")==0 && qno==8)
      {
	   temq=8;
	   count++;
	   c[qno-1]++;
      }
    else
      if(strcmpi(ch,"THEFASTANDTHEFURIOUS")==0 && qno==9)
      {
	   temq=9;
	   count++;
	   c[qno-1]++;
      }
    else
      if(strcmpi(ch,"BLACKPANTHER")==0 && qno==10)
      {
	   temq=10;
	   count++;
	   c[qno-1]++;
      }
    else
    {
      cout<<"\t\t\t\tYOU HAVE ENTERED WRONG!!";
      delay(2000);
      goto start;
    }
    cout<<temq;
    switch(temq)
    {
     case 1: outtextxy(26,301,"T");   //ACROSS
	     outtextxy(46,301,"H");
	     outtextxy(66,301,"E");
	     outtextxy(86,301,"D");
	     outtextxy(106,301,"A");
	     outtextxy(126,301,"R");
	     outtextxy(146,301,"K");
	     outtextxy(166,301,"K");
	     outtextxy(186,301,"N");
	     outtextxy(206,301,"I");
	     outtextxy(226,301,"G");
	     outtextxy(246,301,"H");
	     outtextxy(266,301,"T");
	     break;
     case 2: outtextxy(326,21,"I");
	     outtextxy(346,21,"N");
	     outtextxy(366,21,"C");
	     outtextxy(386,21,"E");
	     outtextxy(406,21,"P");
	     outtextxy(426,21,"T");
	     outtextxy(446,21,"I");
	     outtextxy(466,21,"O");
	     outtextxy(486,21,"N");
	     break;
     case 3: outtextxy(346,221,"A");
	     outtextxy(366,221,"V");
	     outtextxy(386,221,"E");
	     outtextxy(406,221,"N");
	     outtextxy(426,221,"G");
	     outtextxy(446,221,"E");
	     outtextxy(466,221,"R");
	     outtextxy(486,221,"S");
	     break;
     case 9: outtextxy(226,181,"T");
	     outtextxy(246,181,"H");
	     outtextxy(266,181,"E");
	     outtextxy(286,181,"F");
	     outtextxy(306,181,"A");
	     outtextxy(326,181,"S");
	     outtextxy(346,181,"T");
	     outtextxy(366,181,"A");
	     outtextxy(386,181,"N");
	     outtextxy(406,181,"D");
	     outtextxy(426,181,"T");
	     outtextxy(446,181,"H");
	     outtextxy(466,181,"E");
	     outtextxy(486,181,"F");
	     outtextxy(506,181,"U");
	     outtextxy(526,181,"R");
	     outtextxy(546,181,"I");
	     outtextxy(566,181,"O");
	     outtextxy(586,181,"U");
	     outtextxy(606,181,"S");
	     break;
     case 10:outtextxy(126,121,"B");
	     outtextxy(146,121,"L");
	     outtextxy(166,121,"A");
	     outtextxy(186,121,"C");
	     outtextxy(206,121,"K");
	     outtextxy(226,121,"P");
	     outtextxy(246,121,"A");
	     outtextxy(266,121,"N");
	     outtextxy(286,121,"T");
	     outtextxy(306,121,"H");
	     outtextxy(326,121,"E");
	     outtextxy(346,121,"R");
	     break;
     case 5: outtextxy(546,21,"B");   //DOWN
	     outtextxy(546,41,"A");
	     outtextxy(546,61,"A");
	     outtextxy(546,81,"H");
	     outtextxy(546,101,"U");
	     outtextxy(546,121,"B");
	     outtextxy(546,141,"A");
	     outtextxy(546,161,"L");
	     outtextxy(546,181,"I");
	     break;
     case 4: outtextxy(386,21,"E");
	     outtextxy(386,41,"N");
	     outtextxy(386,61,"T");
	     outtextxy(386,81,"E");
	     outtextxy(386,101,"R");
	     outtextxy(386,121,"T");
	     outtextxy(386,141,"A");
	     outtextxy(386,161,"I");
	     outtextxy(386,181,"N");
	     outtextxy(386,201,"M");
	     outtextxy(386,221,"E");
	     outtextxy(386,241,"N");
	     outtextxy(386,261,"T");
	     break;
     case 7: outtextxy(606,21,"S");
	     outtextxy(606,41,"T");
	     outtextxy(606,61,"A");
	     outtextxy(606,81,"R");
	     outtextxy(606,101,"W");
	     outtextxy(606,121,"A");
	     outtextxy(606,141,"R");
	     outtextxy(606,161,"S");
	     break;
      case 8:outtextxy(266,41,"S");
	     outtextxy(266,61,"C");
	     outtextxy(266,81,"H");
	     outtextxy(266,101,"I");
	     outtextxy(266,121,"N");
	     outtextxy(266,141,"D");
	     outtextxy(266,161,"L");
	     outtextxy(266,181,"E");
	     outtextxy(266,201,"R");
	     outtextxy(266,221,"S");
	     outtextxy(266,241,"L");
	     outtextxy(266,261,"I");
	     outtextxy(266,281,"S");
	     outtextxy(266,301,"T");
	     break;
     case 6: outtextxy(306,41,"E");
	     outtextxy(306,61,"N");
	     outtextxy(306,81,"T");
	     outtextxy(306,101,"H");
	     outtextxy(306,121,"I");
	     outtextxy(306,141,"R");
	     outtextxy(306,161,"A");
	     outtextxy(306,181,"N");
	     break;
    }
    start:if(j==15)
      j=1;
    else
    {
      if(j==7)
	j++;
      setcolor(j);
      setbkcolor(j);
      rectangle(0,360,638,470);
      setfillstyle(SOLID_FILL,j);
      floodfill(2,361,j);
      j++;
      setcolor(WHITE);
      rectangle(0,0,639,479);
      rectangle(0,0,10,10);
      rectangle(629,0,639,10);
      rectangle(0,469,10,479);
      rectangle(629,469,639,479);
    }
  }
  while(count<10&&a!=-1);
  return count;
}
