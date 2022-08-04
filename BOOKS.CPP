#include <iostream.h>
#include <stdio.h>
#include <dos.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>
#include <graphics.h>
int books(int &a)
{
  cleardevice();
  a=1;
  int i=0,qno,temq,count=0,j=0,c[10]={0};
  char ch[20],uc;
  do
  {
  settextstyle(2,0,4);
  setcolor(WHITE);
  rectangle(0,0,639,479);
  rectangle(0,0,10,10);
  rectangle(629,0,639,10);
  rectangle(0,469,10,479);
  rectangle(629,469,639,479);
  for(i=0;i<11*20;i+=20)
  {
    rectangle(20+i,118,40+i,138);//5
    rectangle(480,38+i,500,58+i);//1
    rectangle(560,18+i,580,38+i);//4
    rectangle(120,78+i,140,98+i);//8
  }
  for(i=0;i<12*20;i+=20)
  {
    rectangle(220,58+i,240,78+i);//2
    rectangle(320,118+i,340,138+i);//3
    rectangle(360+i,78,380+i,98);//7
  }
  for(i=0;i<13*20;i+=20)
     rectangle(200+i,258,220+i,278);//6
  for(i=0;i<9*20;i+=20)
    rectangle(260,138+i,280,158+i);//9
  for(i=0;i<15*20;i+=20)
    rectangle(440,58+i,460,78+i);//10
  outtextxy(21,119,"5");
  outtextxy(481,39,"1");
  outtextxy(321,119,"3");
  outtextxy(221,59,"2");
  outtextxy(201,259,"6");
  outtextxy(561,19,"4");
  outtextxy(121,79,"8");
  outtextxy(361,79,"7");
  outtextxy(261,139,"9");
  outtextxy(441,59,"10");

    setbkcolor(j);
    gotoxy(10,24);
    cout<<"ENTER Y TO ANSWER ACROSS OR N TO ANSWER DOWN OR E TO EXIT:";
    cin>>uc;
    if(toupper(uc)=='E')
    {
      a=-1;
      break;
    }
    gotoxy(10,25);
    if(toupper(uc)=='Y')
      cout<<"ENTER THE QUESTION NUMBER YOU WANT TO ANSWER?(5,6 OR 7)";
    else
      cout<<"ENTER THE QUESTION NUMBER YOU WANT TO ANSWER?(1,2,3,4,8,9 OR 10)";
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
    setcolor(15);
    switch(qno)
    {
       case 1:
       outtextxy(5,400,"1.series of fantasy novels about the lives of a young wizard and his 2 best friends.");
       break;
       case 2:
       outtextxy(5,400,"2.a female high school student who commits suicide leaving behind recorded tapes.");
       break;
       case 3:
       outtextxy(5,400,"3.pentalogy of fantasy adventure novels about how the protagonist travels to");
       outtextxy(5,410,"recover Zeus's lightening bolt.");
       break;
       case 4:
       outtextxy(5,400,"4.trilogy about a televised battle royale death match in which participants are");
       outtextxy(5,410,"chosen randomly and made to play with compulsion");
       break;
       case 5:
       outtextxy(5,400,"5.mystery thriller by dan brown which concerns holy grail legend.");
       break;
       case 6:
       outtextxy(5,400,"6.best known fictional private detective created by sir arthur conan doyle.");
       break;
       case 7:
       outtextxy(5,400,"7.fantasy re-imagining trilogy of indian deity's life and his adventures by");
       outtextxy(5,410,"amish tripathi");
       break;
       case 8:
       outtextxy(5,400,"8.fictional protagonist of a series of novels under the pen name LEE CHILD.");
       break;
       case 9:
       outtextxy(5,400,"9.female counterpart to hardy boys.");
       break;
       case 10:
       outtextxy(5,400,"10.novel by john green narrated by cancer patient hazel grace.");
       break;
       default:
	 outtextxy(300,400,"WRONG CHOICE");
	 delay(1000);
	 goto start;
    }
    cout<<"\n\n\t\t\tENTER YOUR ANSWER:";
    gets(ch);
    setcolor(WHITE);
    if(strcmpi(ch,"SHIVATRILOGY")==0 && qno==7)
    {
	 temq=7;
	 count++;
	 c[qno-1]++;
    }
    else
      if(strcmpi(ch,"SHERLOCKHOMES")==0 && qno==6)
      {
	   temq=6;
	   count++;
	   c[qno-1]++;
      }
    else
      if(strcmpi(ch,"DAVINCICODE")==0 && qno==5)
      {
	   temq=5;
	   count++;
	   c[qno-1]++;
      }
    else
      if(strcmpi(ch,"HARRYPOTTER")==0 && qno==1)
      {
	   temq=1;
	   count++;
	   c[qno-1]++;
      }
    else
      if(strcmpi(ch,"13REASONSWHY")==0 && qno==2)
      {
	   temq=2;
	   count++;
	   c[qno-1]++;
      }
    else
      if(strcmpi(ch,"PERCYJACKSON")==0 && qno==3)
      {
	   temq=3;
	   count++;
	   c[qno-1]++;
      }
    else
      if(strcmpi(ch,"JACKREACHER")==0 && qno==8)
      {
	   temq=8;
	   count++;
	   c[qno-1]++;
      }
    else
      if(strcmpi(ch,"HUNGERGAMES")==0 && qno==4)
      {
	   temq=4;
	   count++;
	   c[qno-1]++;
      }
    else
      if(strcmpi(ch,"FAULTINOURSTARS")==0 && qno==10)
      {
	   temq=10;
	   count++;
	   c[qno-1]++;
      }
    else
      if(strcmpi(ch,"NANCYDREW")==0 && qno==9)
      {
	   temq=9;
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
     case 7: outtextxy(365,80,"S");   //ACROSS
	     outtextxy(385,80,"H");
	     outtextxy(405,80,"I");
	     outtextxy(425,80,"V");
	     outtextxy(445,80,"A");
	     outtextxy(465,80,"T");
	     outtextxy(485,80,"R");
	     outtextxy(505,80,"I");
	     outtextxy(525,80,"L");
	     outtextxy(545,80,"O");
	     outtextxy(565,80,"G");
	     outtextxy(585,80,"Y");
	     break;
     case 6: outtextxy(205,260,"S");
	     outtextxy(225,260,"H");
	     outtextxy(245,260,"E");
	     outtextxy(265,260,"R");
	     outtextxy(285,260,"L");
	     outtextxy(305,260,"O");
	     outtextxy(325,260,"C");
	     outtextxy(345,260,"K");
	     outtextxy(365,260,"H");
	     outtextxy(385,260,"O");
	     outtextxy(405,260,"M");
	     outtextxy(425,260,"E");
	     outtextxy(445,260,"S");
	     break;
     case 5: outtextxy(25,120,"D");
	     outtextxy(45,120,"A");
	     outtextxy(65,120,"V");
	     outtextxy(85,120,"I");
	     outtextxy(105,120,"N");
	     outtextxy(125,120,"C");
	     outtextxy(145,120,"I");
	     outtextxy(165,120,"C");
	     outtextxy(185,120,"O");
	     outtextxy(205,120,"D");
	     outtextxy(225,120,"E");
	     break;
     case 1: outtextxy(485,40,"H");   //DOWN
	     outtextxy(485,60,"A");
	     outtextxy(485,80,"R");
	     outtextxy(485,100,"R");
	     outtextxy(485,120,"Y");
	     outtextxy(485,140,"P");
	     outtextxy(485,160,"O");
	     outtextxy(485,180,"T");
	     outtextxy(485,200,"T");
	     outtextxy(485,220,"E");
	     outtextxy(485,240,"R");
	     break;
     case 3: outtextxy(325,120,"P");
	     outtextxy(325,140,"E");
	     outtextxy(325,160,"R");
	     outtextxy(325,180,"C");
	     outtextxy(325,200,"Y");
	     outtextxy(325,220,"J");
	     outtextxy(325,240,"A");
	     outtextxy(325,260,"C");
	     outtextxy(325,280,"K");
	     outtextxy(325,300,"S");
	     outtextxy(325,320,"O");
	     outtextxy(325,340,"N");
	     break;
     case 2: outtextxy(225,60,"1");
	     outtextxy(225,80,"3");
	     outtextxy(225,100,"R");
	     outtextxy(225,120,"E");
	     outtextxy(225,140,"A");
	     outtextxy(225,160,"S");
	     outtextxy(225,180,"O");
	     outtextxy(225,200,"N");
	     outtextxy(225,220,"S");
	     outtextxy(225,240,"W");
	     outtextxy(225,260,"H");
	     outtextxy(225,280,"Y");
	     break;
     case 8: outtextxy(125,80,"J");
	     outtextxy(125,100,"A");
	     outtextxy(125,120,"C");
	     outtextxy(125,140,"K");
	     outtextxy(125,160,"R");
	     outtextxy(125,180,"E");
	     outtextxy(125,200,"A");
	     outtextxy(125,220,"C");
	     outtextxy(125,240,"H");
	     outtextxy(125,260,"E");
	     outtextxy(125,280,"R");
	     break;
     case 4: outtextxy(565,20,"H");
	     outtextxy(565,40,"U");
	     outtextxy(565,60,"N");
	     outtextxy(565,80,"G");
	     outtextxy(565,100,"E");
	     outtextxy(565,120,"R");
	     outtextxy(565,140,"G");
	     outtextxy(565,160,"A");
	     outtextxy(565,180,"M");
	     outtextxy(565,200,"E");
	     outtextxy(565,220,"S");
	     break;
     case 10:outtextxy(445,60,"F");
	     outtextxy(445,80,"A");
	     outtextxy(445,100,"U");
	     outtextxy(445,120,"L");
	     outtextxy(445,140,"T");
	     outtextxy(445,160,"I");
	     outtextxy(445,180,"N");
	     outtextxy(445,200,"O");
	     outtextxy(445,220,"U");
	     outtextxy(445,240,"R");
	     outtextxy(445,260,"S");
	     outtextxy(445,280,"T");
	     outtextxy(445,300,"A");
	     outtextxy(445,320,"R");
	     outtextxy(445,340,"S");
	     break;
     case 9: outtextxy(265,140,"N");
	     outtextxy(265,160,"A");
	     outtextxy(265,180,"N");
	     outtextxy(265,200,"C");
	     outtextxy(265,220,"Y");
	     outtextxy(265,240,"D");
	     outtextxy(265,260,"R");
	     outtextxy(265,280,"E");
	     outtextxy(265,300,"W");
	     break;
    }
    start:if(j==15)
	   j=1;
	  else
	  {
	    j++;
	    if(j==7)
	     j++;
	    setcolor(j);
	    setbkcolor(j);
	    rectangle(0,360,638,470);
	    setfillstyle(SOLID_FILL,j);
	    floodfill(2,361,j);
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