#include<iostream.h>
#include<process.h>
#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
int cartoon(int &a)
{
 a=1;
 cleardevice();
 setbkcolor(BLACK);
 int i,j,count=0,c[10]={0};
 char ch1;
 cleardevice();
 setbkcolor(BLACK);
 void clues1();
 do
 {
 settextstyle(8,0,3);
 setcolor(10);
 outtextxy(410,0,"CARTOONS");
 setcolor(15);
 for(i=20;i<=160;i+=20)             //down
 {
  rectangle(30,i,50,i+20);       //1
  if(i<=120)
   rectangle(70,i,90,i+20);   //2
  rectangle(130,i,150,i+20);  //3
 }
 for(i=100;i<=320;i+=20)
  rectangle(190,i,210,i+20); //5
 settextstyle(2,0,3);
 outtextxy(33,20,"1");
 outtextxy(73,20,"2");
 outtextxy(133,20,"3");
 outtextxy(193,100,"5");
 setcolor(15);
 for(j=10;j<=150;j+=20)       //across
  rectangle(j,40,j+20,60);    //4
 for(j=110;j<=310;j+=20)
  rectangle(j,140,j+20,160);  //6
 for(j=50;j<=250;j+=20)
 {
  rectangle(j,200,j+20,220);  //7
  rectangle(j,280,j+20,300); //9
 }
 for(j=150;j<=320;j+=20)
 {
  rectangle(j,240,j+20,260);   //8
  if(j<=290)
   rectangle(j,320,j+20,340);  //10
 }
 outtextxy(13,40,"4");
 outtextxy(113,140,"6");
 outtextxy(53,200,"7");
 outtextxy(153,240,"8");
 outtextxy(53,280,"9");
 outtextxy(153,320,"10");
 clues1();
 settextstyle(2,0,5);
 setcolor(11);
 int q,wr;
 int across1(int&);
 int down1(int&);
 void ans1(char [][13],char[][13],char,int,int&,int [10]);
 char ansacr[6][13]={"POKEAMON","TOMANDJERRY","CHHOTABHEEM","MOTUPATLU","MICKEYMOUSE","SHINCHAN"};
 char ansdow[4][13]={"ROLLNO21","BENTEN","DORAEMON","NINJAHATTORI"};
 setcolor(15);
 settextstyle(2,0,5);
 setfillstyle(1,1);
 rectangle(0,365,500,440);
 floodfill(100,400,15);
 gotoxy(1,24);
 cout<<"ENTER Y FOR ACROSS";
 gotoxy(1,25);
 cout<<"AND N FOR DOWN";
 gotoxy(33,24);
 outtextxy(170,420,"TO EXIT ENTER E");
 cin>>ch1;
 if(ch1=='e'||ch1=='E')
 {
  a=-1;
  break;
 }
 gotoxy(35,24);
 cin>>q;
 if(ch1=='Y'||ch1=='y')
  {
   wr=across1(q);
   if(wr==0)
    ans1(ansacr,ansdow,ch1,q,count,c);
   else
    {
     gotoxy(20,24);
     cout<<"WRONG CHOICE!";
     delay(2000);
     gotoxy(20,25);
    }
  }
 if(ch1=='N'||ch1=='n')
 {
  wr=down1(q);
  if(wr==0)
   ans1(ansacr,ansdow,ch1,q,count,c);
  else
   {
    gotoxy(20,24);
    cout<<"WRONG CHOICE!";
    gotoxy(20,25);
    delay(2000);
   }
 }
}while(count<10&&a!=-1);
return count;
}
void clues1()
{settextstyle(7,0,2);
 outtextxy(335,30,"ACROSS");
 settextstyle(2,0,5);
 setcolor(14);
 outtextxy(335,50,"4.A boy who searches for pocket");
 outtextxy(335,60,"monsters along with his friend pikachu.");
 outtextxy(335,80,"6.A rivalry between a cat and a mouse.");
 outtextxy(335,100,"7.A boy helps King of Dholakpur and ");
 outtextxy(335,110,"from various evil forces");
 outtextxy(335,130,"8.Story about two friends who live");
 outtextxy(335,140,"in Furfuri nagar");
 outtextxy(335,160,"9.An anthropomorphic mouse who typically");
 outtextxy(335,170,"wears red shorts,large yellow shoes");
 outtextxy(335,180,"and white gloves.");
 outtextxy(335,200,"10.Adventures of a 5-year old boy");
 outtextxy(335,210," from Nohara's family.");
 settextstyle(7,0,2);
 setcolor(15);
 outtextxy(335,230,"DOWN");
 settextstyle(2,0,5);
 setcolor(12);
 outtextxy(335,250,"1.A modern take on the rivalry between");
 outtextxy(335,260,"Krishna and Kansa");
 outtextxy(324,280,"2.A boy acquires a watch like alien device");
 outtextxy(335,290,"which allows him to tranform into aliens");
 outtextxy(330,310,"3.A robotic cat from 22nd century travels");
 outtextxy(335,320,"back in time to help an unlucky boy.");
 outtextxy(335,340,"5.A ninja along with his brother helps ");
 outtextxy(335,350,"a 10 year-old boy");
}
int across1(int &q)
{
  setcolor(10);
  int kl;
  switch(q)
  {
   case 4:
   case 6:
   case 7:
   case 8:
   case 9:
   case 10:kl=0;
   break;
   default: kl=-1;
  }
  return kl;
}
int down1(int &q)
{
  setcolor(10);
  int kl;
  switch(q)
  {
   case 1:
   case 2:
   case 3:
   case 5: kl=0;
   break;
   default:kl=-1;
  }
  return kl;
}
void ans1(char ansacr[6][13],char ansdow[4][13],char ch1,int q,int &count,int c[10])
{
 void print1(char&,int&);
 char sol[13];
 int temq;
 gotoxy(30,25);
 if(ch1=='y'||ch1=='Y')
 {
  if(q==4)
   temq=0;
  if(q==6)
   temq=1;
  if(q==7)
   temq=2;
  if(q==8)
   temq=3;
  if(q==9)
   temq=4;
  if(q==10)
   temq=5;
  if(c[temq]==1)
  {
   gotoxy(24,26);
   cout<<" ALREADY ENTERED!";
   delay(2000);
  }
  else
  {
   gets(sol);
   if(strcmpi(sol,ansacr[temq])==0)
   { count++;
     c[temq]++;
     print1(ch1,temq);
   }
   else
   {
    gotoxy(20,24);
    cout<<"WRONG ANSWER!";
    gotoxy(20,25);
   }
  }
 }
 if(ch1=='n'||ch1=='N')
  {
   if(q==1)
    temq=0;
   if(q==2)
    temq=1;
   if(q==3)
    temq=2;
   if(q==5)
    temq=3;
   if(c[temq+6]==1)
   {
    gotoxy(24,26);
    cout<<"  ALREADY ENTERED!";
    delay(2000);
   }
   else
   {
    gets(sol);
    if(strcmpi(sol,ansdow[temq])==0)
    {
     count++;
     c[temq+6]++;
     print1(ch1,temq);
    }
    else
    {
     gotoxy(20,24);
     cout<<"WRONG ANSWER!";
     gotoxy(20,25);
    }
   }
  }
}
void print1(char &ch1,int &temq)
{
 setcolor(12);
 settextstyle(2,0,6);
 if(ch1=='y'||ch1=='Y')
 {                                        //across
  switch(temq)
  {
   case 0: outtextxy(14,40,"P");
	   outtextxy(34,40,"O");
	   outtextxy(54,40,"K");
	   outtextxy(74,40,"E");
	   outtextxy(94,40,"A");
	   outtextxy(114,40,"M");
	   outtextxy(134,40,"O");
	   outtextxy(154,40,"N");
   break;
   case 1: outtextxy(114,140,"T");
	   outtextxy(134,140,"O");
	   outtextxy(154,140,"M");
	   outtextxy(174,140,"A");
	   outtextxy(194,140,"N");
	   outtextxy(214,140,"D");
	   outtextxy(234,140,"J");
	   outtextxy(254,140,"E");
	   outtextxy(274,140,"R");
	   outtextxy(294,140,"R");
	   outtextxy(314,140,"Y");
   break;
   case 2: outtextxy(54,200,"C");
	   outtextxy(74,200,"H");
	   outtextxy(94,200,"H");
	   outtextxy(114,200,"O");
	   outtextxy(134,200,"T");
	   outtextxy(154,200,"A");
	   outtextxy(174,200,"B");
	   outtextxy(194,200,"H");
	   outtextxy(214,200,"E");
	   outtextxy(234,200,"E");
	   outtextxy(254,200,"M");
   break;
   case 3: outtextxy(154,240,"M");
	   outtextxy(174,240,"O");
	   outtextxy(194,240,"T");
	   outtextxy(214,240,"U");
	   outtextxy(234,240,"P");
	   outtextxy(254,240,"A");
	   outtextxy(274,240,"T");
	   outtextxy(294,240,"L");
	   outtextxy(314,240,"U");
   break;
   case 4: outtextxy(54,280,"M");
	   outtextxy(74,280,"I");
	   outtextxy(94,280,"C");
	   outtextxy(114,280,"K");
	   outtextxy(134,280,"E");
	   outtextxy(154,280,"Y");
	   outtextxy(174,280,"M");
	   outtextxy(194,280,"O");
	   outtextxy(214,280,"U");
	   outtextxy(234,280,"S");
	   outtextxy(254,280,"E");
   break;
   case 5: outtextxy(154,320,"S");
	   outtextxy(174,320,"H");
	   outtextxy(194,320,"I");
	   outtextxy(214,320,"N");
	   outtextxy(234,320,"C");
	   outtextxy(254,320,"H");
	   outtextxy(274,320,"A");
	   outtextxy(294,320,"N");
   break;
  }
 }
 if(ch1=='n'||ch1=='N')
 {
  setcolor(10);                        //down
   switch(temq)
   {
    case 0: outtextxy(34,20,"R");
	    outtextxy(34,40,"O");
	    outtextxy(34,60,"L");
	    outtextxy(34,80,"L");
	    outtextxy(34,100,"N");
	    outtextxy(34,120,"O");
	    outtextxy(34,140,"2");
	    outtextxy(34,160,"1");
    break;
    case 1: outtextxy(74,20,"B");
	    outtextxy(74,40,"E");
	    outtextxy(74,60,"N");
	    outtextxy(74,80,"T");
	    outtextxy(74,100,"E");
	    outtextxy(74,120,"N");
    break;
    case 2: outtextxy(134,20,"D");
	    outtextxy(134,40,"O");
	    outtextxy(134,60,"R");
	    outtextxy(134,80,"A");
	    outtextxy(134,100,"E");
	    outtextxy(134,120,"M");
	    outtextxy(134,140,"O");
	    outtextxy(134,160,"N");
    break;
    case 3: outtextxy(194,100,"N");
	    outtextxy(194,120,"I");
	    outtextxy(194,140,"N");
	    outtextxy(194,160,"J");
	    outtextxy(194,180,"A");
	    outtextxy(194,200,"H");
	    outtextxy(194,220,"A");
	    outtextxy(194,240,"T");
	    outtextxy(194,260,"T");
	    outtextxy(194,280,"O");
	    outtextxy(194,300,"R");
	    outtextxy(194,320,"I");
    break;
   }
 }
}