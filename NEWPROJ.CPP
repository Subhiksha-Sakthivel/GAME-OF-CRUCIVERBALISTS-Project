#include<graphics.h>
#include<process.h>
#include <stdlib.h>
#include<string.h>
#include<iostream.h>
#include <ctype.h>
#include<fstream.h>
#include<conio.h>
#include<stdio.h>
#include"ABOUTTHE.CPP"
#include"LEVELS.CPP"
#include "TRY.CPP"
class cross
{
  char player[25];
  char status[15];
  char userid[8];
  char password[8];
  int age;
  int score;
  public:
    cross();
    void details();
    void stat();
    void disp();
    char* ret_userid();
    char* ret_password();
    int ret_score();
    void update(int);
    char* ret_stat();
};
char* cross::ret_stat()
{
  return status;
}
void cross::update(int s)
{
  score+=s;
}
cross::cross()
{
  score=0;
}
int cross::ret_score()
{
  return score;
}
char* cross::ret_userid()
{
 return userid;
}
char* cross::ret_password()
{
 return password;
}
void cross::disp()
 {
 cout<<endl<<"DETAILS OF PLAYER";
 cout<<endl<<"name:  "<<player;
 cout<<endl<<"AGE: "<<age;
 cout<<endl<<"userid:  "<<userid;
 cout<<endl<<"password: "<<password;
 cout<<endl<<"status: "<<status;
 cout<<endl<<"score: "<<score;
}
void cross::stat()
{
 if(score<50)
  strcpy(status,"BEGINNER");
 if(score>=50&&score<100)
  strcpy(status,"AMATEUR");
 if(score>=100&&score<200)
  strcpy(status,"BRONZE");
 if(score>=200&&score<350)
  strcpy(status,"SILVER");
 if(score>=350&&score<500)
  strcpy(status,"GOLD");
 if(score>=500&&score<750)
  strcpy(status,"CRYSTAL");
 if(score>=750&&score<950)
  strcpy(status,"CHAMPION");
 if(score>=950&&score>=2000)
  strcpy(status,"LEGENDARY");
 if(score>2000)
  strcpy(status,"GRAND MASTER");
}
void cross::details()
{
 cleardevice();
 gotoxy(10,5);
 setbkcolor(8);
 setcolor(15);
 circle(600,67,7);
 rectangle(450,55,620,95);
 settextstyle(2,0,6);
 setcolor(12);
 outtextxy(460,70,"NS GAMERS & CO.");
 settextstyle(2,0,4);
 outtextxy(597,61,"R");
 setcolor(15);
 settextstyle(7,0,4);
 outtextxy(200,10,"PROFILE DATA");
 cout<<"\n\n\n\n\tENTER PLAYER NAME:";
 gets(player);
 cout<<"\n\n\tENTER AGE: ";
 cin>>age;
 cout<<"\n\n\tENTER USER-ID(MAX 7 CHARACTERS): ";
 gets(userid);
 cout<<"\n\n\tENTER PASSWORD(MAX 7 CHARACTERS): ";
 gets(password);
 stat();
}
void main()
{
 int gdriver=DETECT,gmode;
 initgraph(&gdriver,&gmode,"c:\\turboc3\\bgi");
 cleardevice();
 title();
 cleardevice();
 cross obj;
 char id[8];
 char ps[8];
 int m=0,s=0,ch,pos,j,a=1;
 do
{
 cleardevice();
 rectangle(0,0,638,479);
 setbkcolor(5);
 setcolor(WHITE);
 settextstyle(7,0,4);
 outtextxy(250,50,"MENU");
 outtextxy(250,80,"********");
 outtextxy(170,130,"1. NEW PLAYER");
 outtextxy(170,180,"2. LOGIN");
 outtextxy(170,230,"3. HALL OF FAME");
 outtextxy(170,280,"4. EXIT");
 outtextxy(150,330,"ENTER YOUR CHOICE: ");
 gotoxy(35,25);
 cin>>ch;
 switch(ch)
 {
   case 1:cleardevice();
	  ofstream f1("CROSS.DAT",ios::binary|ios::app);
	  obj.details();
	  f1.write((char*)&obj,sizeof(cross));
	  cout<<"SUCCESSFULL!";
	  pos=f1.tellp();
	  m=1;
	  f1.close();
	  break;
   case 2: cleardevice();
	   gotoxy(3,5);
	   setbkcolor(BLACK);
	   settextstyle(7,0,4);
	   outtextxy(250,40,"LOGIN");
	   outtextxy(250,65,"^^^^^^");
	   ifstream f("CROSS.DAT",ios::binary);
	   f.seekg(0);
	    cout<<"\n\n\n\t\t\tENTER THE USER-ID:";
	    gets(id);
	    cout<<"\n\n\n\t\t\tENTER THE PASSWORD:";
	    gets(ps);
	    while(f.read((char*)&obj,sizeof(cross)))
	    {
	       pos=f.tellg();
	       if(strcmp(obj.ret_userid(),id)==0 && strcmp(obj.ret_password(),ps)==0)
	       {
		m=1;
		break;
	       }
	    }

	    if(m!=1)
	     {
	       cout<<"\n\n\n\t\t\tINVALID ID AND PASSWORD!";
	       cout<<"\n\n\n\t\t\tREDIRECTING TO MENU!!!!";
	       cout<<"\n\n\n\t\t\t*****PLEASE WAIT!!!*****";
	       delay(2000);
	     }
	  f.close();
	  break;
   case 3: ifstream f2("CROSS.DAT",ios::binary);
	   j=0;
	   cross c[20];
	   cleardevice();
	   setbkcolor(6);
	   for(int i=0;i<1000;i+=500,j+=480)
	   {
	       ellipse(100+i,40,0,360,10,30);
	       ellipse(100+i,390,0,360,10,30);
	       fillellipse(100+i,40,10,30);
	       fillellipse(100+i,390,10,30);
	       line(110+j,70,110+j,360);
	   }
	   for(i=0;i<=60;i+=60)
	   {
	       line(100,10+i,600,10+i);
	       line(100,360+i,600,360+i);
	   }
	   settextstyle(7,0,4);
	   outtextxy(220,20,"HALL OF FAME");
	   int l=0,k=49,no=0,co=0;
	   f2.seekg(0);
	   while(f2.read((char*)&obj,sizeof(obj)))
	   {
	       c[no++]=obj;
	   }
	   for(i=0;i<no;i++)
	      for(int j=0;j<no-1-i;j++)
		 if(c[j+1].ret_score()>c[j].ret_score())
		 {
		     obj=c[j];
		     c[j]=c[j+1];
		     c[j+1]=obj;
		 }
	   l=0;
	   if(no>5)
	     no=5;
	   for(int n=0;n<no;n++)
	   {
	       char ch[2],sc[3];
	       int s,m,i=0,p,j;
	       s=c[n].ret_score();
	       m=s;
	       if(s==c[n-1].ret_score())
	       {
		 k--;
		 co=1;
	       }
	       ch[i++]=k;
	       ch[i]='\0';
	       outtextxy(120,70+l,ch);
	       outtextxy(145,70+l,c[n].ret_userid());
	       outtextxy(280,70+l,c[n].ret_stat());
	       for(i=0;m!=0;i++)
	       {
		 m=m/10;
	       }
	       m=s;
	       for(j=0;j<=i;j++)
	       {
		 p=m%10;
		 m=m/10;
		 if(i==0)
		   sc[i++]=p+48;
		 sc[i-j-1]=p+48;
	       }
	       sc[i]='\0';
	       outtextxy(500,70+l,sc);
	       l+=60;
	       if(co==1)
		 k++;
	       k++;
	   }
	   f2.close();
	   getch();
	   break;
   case 4: a=-1;
	   break;
  default: outtextxy(150,400,"*** WRONG CHOICE! ***");
 };
 if(a==-1)
 {
  outtextxy(50,400,"*** YOU HAVE ENTERED EXIT ***");
  delay(2000);
  break;
 }
 if(m==1&&ch!=3)
 {
  fstream f2("CROSS.DAT",ios::binary|ios::ate|ios::in|ios::out);
  cleardevice();
  gotoxy(2,2);
  intro(a);
  s+=lvl(s,a);
  obj.update(s);
  obj.stat();
  f2.seekp(pos-sizeof(cross));
  f2.write((char*)&obj,sizeof(cross));
  f2.close();
 }
 if(a==-1)
 {
  outtextxy(50,400,"*** YOU HAVE ENTERED EXIT ***");
  a=1;
 }
 getch();
 }while(a==1);
 closegraph();
}