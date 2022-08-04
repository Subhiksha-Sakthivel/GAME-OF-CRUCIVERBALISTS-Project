#include<iostream.h>
#include<dos.h>
#include<stdio.h>
#include<string.h>
#include<process.h>
#include<conio.h>
#include<graphics.h>
int sports(int &a)
{
 cleardevice();
 a=1;
 setbkcolor(BLACK);
 int i,j,count=0,c[10]={0};
 char ch1;
 cleardevice();
 setbkcolor(BLACK);
 void clues();
 setcolor(9);
 settextstyle(8,0,3);
 outtextxy(370,10,"SPORTS AND GAMES");
 setcolor(15);
 line(370,40,615,40);
 line(370,43,615,43);
do
{
 setcolor(15);
 settextstyle(2,0,3);
 for(i=50;i<=170;i+=20)         //down
 {
  rectangle(70,i,90,i+20); //1
  if(i<=150)
   rectangle(270,i+20,290,i+40);  //3
  }
 for(i=170;i<=270;i+=20)
  rectangle(30,i,50,i+20);  //5
 for(i=70;i<=250;i+=20)
  rectangle(150,i,170,i+20);  //2
 for(i=210;i<=310;i+=20)
  rectangle(110,i,130,i+20);   //6
 for(i=150;i<=290;i+=20)
  rectangle(210,i,230,i+20);  //4
 for(j=30;j<=130;j+=20)         //across
  rectangle(j,170,j+20,190);    //5
 for(j=150;j<=310;j+=20)
  rectangle(j,70,j+20,90);       //2
 for(j=90;j<=270;j+=20)
 {
  rectangle(j,230,j+20,250);    //7
  if(j<=170)
   rectangle(j-20,290,j,310);  //8
 }
 outtextxy(73,50,"1");
 outtextxy(33,170,"5");
 outtextxy(153,70,"2");
 outtextxy(273,70,"3");
 outtextxy(93,230,"7");
 outtextxy(113,210,"6");
 outtextxy(73,290,"8");
 outtextxy(213,150,"4");
 clues();
 char ch1;
 int q,wr;
 int across(int&);
 int down(int&);
 void ans(char [][11],char [][11],char,int,int&,int[10]);
 char ansacr[4][11]={"BADMINTON","CRICKET","VOLLEYBALL","CHESS"};
 char ansdow[6][11]={"KABADDI","BASKETBALL","TENNIS","FOOTBALL","CARROM","HOCKEY"};
 settextstyle(2,0,5);
 setcolor(15);
 setfillstyle(1,1);
 rectangle(0,365,500,440);
 floodfill(100,400,15);
 gotoxy(1,24);
 cout<<"ENTER Y FOR ACROSS";
 gotoxy(1,25);
 cout<<"ENTER N FOR DOWN";
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
 if(ch1=='y'||ch1=='Y')
 {
  wr=across(q);
  if(wr==0)
   ans(ansacr,ansdow,ch1,q,count,c);
  else
   {
    delay(2000);
    cout<<"WRONG CHOICE!";
   }
 }
 if(ch1=='N'||ch1=='n')
 {
  wr=down(q);
  if(wr==0)
   ans(ansacr,ansdow,ch1,q,count,c);
  else
   cout<<"WRONG CHOICE!";
 }
}while(count<10&&a!=-1);
 return count;
}
void clues()
{
 setcolor(15);
 settextstyle(7,0,2);
 outtextxy(350,40,"ACROSS");
 settextstyle(2,0,5);
 setcolor(14);
 outtextxy(350,70,"2.Hit the shuttlecock over the net");
 outtextxy(350,80,"to score points.");
 outtextxy(350,100,"5.Every Indian's love.");
 outtextxy(350,120,"7.You set it in the air,");
 outtextxy(350,130,"and I can hit it anywhere.");
 outtextxy(350,150,"8.Intelligent people like this");
 outtextxy(350,160,"strategic game.");
 settextstyle(7,0,2);
 setcolor(15);
 outtextxy(350,180,"DOWN");
 settextstyle(2,0,5);
 setcolor(12);
 outtextxy(350,210,"1.Touch as many defenders as possible");
 outtextxy(350,220,"while reciting that word.");
 outtextxy(350,240,"2.Shoot the ball in the basket to win.");
 outtextxy(350,260,"3.A Game of Palm.");
 outtextxy(350,280,"4.Kick the ball into the net & goal it.");
 outtextxy(350,300,"5.Pocket the coins to win it.");
 outtextxy(350,320,"6.Hit the puck into the opponent's");
 outtextxy(350,340,"post using a hockey stick to goal.");
 setcolor(15);
}
int across(int &q)
{
 setcolor(10);
 int kl;
 switch(q)
 {
  case 2:
  case 5:
  case 7:
  case 8: kl=0;
  break;
  default:kl=-1;
 }
 return kl;
}
int down(int &q)
{
 setcolor(10);
 int kl;
 switch(q)
 {
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:kl=0;
  break;
  default:kl=-1;
 }
 return kl;
}
void ans(char ansacr[4][11],char ansdow[6][11],char ch1,int q,int &count,int c[10])
{
 void print(char&,int&);
 char sol[11];
 int temq;
 gotoxy(30,25);
 if(ch1=='y'||ch1=='Y')                      //across
 {
  if(q==2)
   temq=0;
  if(q==5)
   temq=1;
  if(q==7)
   temq=2;
  if(q==8)
   temq=3;
  if(c[temq]==1)
  {
   gotoxy(24,27);
   cout<<"ALREADY ENTERED!!";
   delay(2000);
  }
  else
  {
   gets(sol);
   if(strcmpi(sol,ansacr[temq])==0)
   {
    count++;
    c[temq]++;
    print(ch1,temq);
   }
   else
   {
    delay(2000);
    gotoxy(20,24);
    cout<<"WRONG ANSWER!";
    gotoxy(20,25);
   }
  }
 }
 if(ch1=='N'||ch1=='n')                              //down
 {
  if(q==1)
   temq=0;
  if(q==2)
   temq=1;
  if(q==3)
   temq=2;
  if(q==4)
   temq=3;
  if(q==5)
   temq=4;
  if(q==6)
   temq=5;
  if(c[temq+6]==1)
  {
   gotoxy(24,27);
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
    print(ch1,temq);
   }
   else
   {
    gotoxy(20,24);
    delay(2000);
    cout<<"WRONG ANSWER!";
    gotoxy(20,25);
   }
  }
 }
}
void print(char &ch1,int &temq)
{
 settextstyle(2,0,6);
 setcolor(15);
 if(ch1=='y'||ch1=='Y')
 {
  switch(temq)                       //across
  {
   case 0:outtextxy(154,70,"B");
	  outtextxy(174,70,"A");
	  outtextxy(194,70,"D");
	  outtextxy(214,70,"M");
	  outtextxy(234,70,"I");
	  outtextxy(254,70,"N");
	  outtextxy(274,70,"T");
	  outtextxy(294,70,"O");
	  outtextxy(314,70,"N");
   break;
   case 1:outtextxy(34,170,"C");
	  outtextxy(54,170,"R");
	  outtextxy(74,170,"I");
	  outtextxy(94,170,"C");
	  outtextxy(114,170,"K");
	  outtextxy(134,170,"E");
	  outtextxy(154,170,"T");
   break;
   case 2:outtextxy(94,230,"V");
	  outtextxy(114,230,"O");
	  outtextxy(134,230,"L");
	  outtextxy(154,230,"L");
	  outtextxy(174,230,"E");
	  outtextxy(194,230,"Y");
	  outtextxy(214,230,"B");
	  outtextxy(234,230,"A");
	  outtextxy(254,230,"L");
	  outtextxy(274,230,"L");
   break;
   case 3:outtextxy(74,290,"C");
	  outtextxy(94,290,"H");
	  outtextxy(114,290,"E");
	  outtextxy(134,290,"S");
	  outtextxy(154,290,"S");
   break;
  }
 }
 if(ch1=='n'||ch1=='N')        //down
 {
  switch(temq)
  {
   case 0:outtextxy(74,50,"K");
	  outtextxy(74,70,"A");
	  outtextxy(74,90,"B");
	  outtextxy(74,110,"A");
	  outtextxy(74,130,"D");
	  outtextxy(74,150,"D");
	  outtextxy(74,170,"I");
   break;
   case 1:outtextxy(154,70,"B");
	  outtextxy(154,90,"A");
	  outtextxy(154,110,"S");
	  outtextxy(154,130,"K");
	  outtextxy(154,150,"E");
	  outtextxy(154,170,"T");
	  outtextxy(154,190,"B");
	  outtextxy(154,210,"A");
	  outtextxy(154,230,"L");
	  outtextxy(154,250,"L");
   break;
   case 2:outtextxy(274,70,"T");
	  outtextxy(274,90,"E");
	  outtextxy(274,110,"N");
	  outtextxy(274,130,"N");
	  outtextxy(274,150,"I");
	  outtextxy(274,170,"S");
   break;
   case 3:outtextxy(214,150,"F");
	  outtextxy(214,170,"O");
	  outtextxy(214,190,"O");
	  outtextxy(214,210,"T");
	  outtextxy(214,230,"B");
	  outtextxy(214,250,"A");
	  outtextxy(214,270,"L");
	  outtextxy(214,290,"L");
   break;
   case 4:outtextxy(34,170,"C");
	  outtextxy(34,190,"A");
	  outtextxy(34,210,"R");
	  outtextxy(34,230,"R");
	  outtextxy(34,250,"O");
	  outtextxy(34,270,"M");
   break;
   case 5:outtextxy(114,210,"H");
	  outtextxy(114,230,"O");
	  outtextxy(114,250,"C");
	  outtextxy(114,270,"K");
	  outtextxy(114,290,"E");
	  outtextxy(114,310,"Y");
   break;
  }
 }
}
