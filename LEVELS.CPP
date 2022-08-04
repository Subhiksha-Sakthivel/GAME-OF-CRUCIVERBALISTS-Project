#include<iostream.h>
#include<conio.h>
#include<process.h>
#include<graphics.h>
#include"CARTOOONS.CPP"
#include"SPORTS.CPP"
#include"LOADING.CPP"
#include"BOOKS.CPP"
#include"MOVIES.CPP"
#include<dos.h>
int lvl(int score,int &a)
{
 cleardevice();
 char ch;
 int s;
 a=1;
 do
 {
 cleardevice();
 setbkcolor(9);
 setcolor(11);
 settextstyle(7,0,3);
 rectangle(75,100,600,150);
 rectangle(75,170,600,230);
 rectangle(75,250,600,300);
 rectangle(75,320,600,370);
 outtextxy(105,110,"Topic 1:Cartoons");
 outtextxy(105,180,"Topic 2:Sports and games");
 outtextxy(105,260,"Topic 3:Books and novels");
 outtextxy(105,330,"Topic 4:Movies");
 settextstyle(7,0,2);
 setcolor(14);
 outtextxy(55,5,"ENTER A CHOICE ACCORDING TO TOPIC NUMBER!");
 outtextxy(55,380,"TO EXIT ENTER E");
 settextstyle(7,0,4);
 gotoxy(35,6);
 cin>>ch;
 if(ch=='e'||ch=='E')
 {
  a=-1;
  break;
 }
 settextstyle(7,0,2);
 outtextxy(150,40,"YOUR CHOICE IS  ");
 switch(ch)
 {
  case '1': outtextxy(350,40,"CARTOONS");
	    delay(1000);
	    loading();
	    s=cartoon(a);
	    score+=s*50;
	    cout<<score;
  break;
  case '2': outtextxy(350,40,"SPORTS AND GAMES");
	    delay(1000);
	    loading();
	    s=sports(a);
	    score+=s*50;
	    cout<<score;
  break;
  case '3': outtextxy(350,40,"BOOKS AND NOVELS");
	    delay(1000);
	    loading();
	    s=books(a);
	    score+=s*50;
	    cout<<score;
  break;
  case '4': outtextxy(350,40,"MOVIES");
	    delay(1000);
	    loading();
	    s=movies(a);
	    score+=s*50;
	    cout<<score;
  break;
  default: outtextxy(350,40,"WRONG CHOICE!");
	   delay(1000);
	   ch='0';
 }
 }while(ch!='0'||a!=-1);
 return score;
}
