#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<dos.h>
#include<graphics.h>
#include<alloc.h>
#include<process.h>
#include<stdlib.h>

int i,j,c;
//*******************************Star***************************************
void STAR(int x)
{
  setcolor(x);
  setfillstyle(SOLID_FILL,x);
  setlinestyle(SOLID_LINE,0,NORM_WIDTH);
  line(291,194,309,194);
  line(309,194,300,210);
  line(300,210,291,194);
  line(300,190,309,206);
  line(309,206,291,206);
  line(291,206,300,190);
  floodfill(300,200,x);
  floodfill(300,191,x);
  floodfill(300,209,x);
  floodfill(295,197,x);
  floodfill(295,204,x);
  floodfill(305,197,x);
  floodfill(305,204,x);
}

//************************LEVEL1_moving ring********************************
void LEVEL1()
   {	setlinestyle(SOLID_LINE,1,THICK_WIDTH);
    setcolor(LIGHTRED);
    arc(300, 200,i,j,150);
    arc(300, 200,i,j,148);
	delay(0.25);
    setcolor(LIGHTGREEN);
    arc(300,200,i+90,j+90,150);
    arc(300,200,i+90,j+90,148);
	delay(0.25);
    setcolor(LIGHTBLUE);
    arc(300,200,i+180,j+180,150);
    arc(300,200,i+180,j+180,148);
	delay(0.25);
    setcolor(YELLOW);
    arc(300,200,i+270,j+270,150);
    arc(300,200,i+270,j+270,148);
	delay(0.25);
   }

//************************LEVEL2_moving lines*******************************
int k=0,x;
void LEVEL2()
{setlinestyle(SOLID_LINE,1,THICK_WIDTH);
 int c1[6]={5,10,9,14,12,11};
 int c2[6]={11,5,10,9,14,12};
 int c3[6]={14,12,11,5,10,9};
 int c4[6]={9,14,12,11,5,10};
 int temp[6];
 for(i=0,j=50;i<=35;)
    { setcolor(c1[k]);
       line(i,50,j,50);
		delay(2);
       setcolor(c1[k+1]);
       line(i+50,50,j+100,50);
		delay(2);
       setcolor(c1[k+2]);
       line(i+150,50,j+200,50);
		delay(2);
       setcolor(c1[k+3]);
       line(i+250,50,j+300,50);
		delay(2);
       setcolor(c1[k+4]);
       line(i+350,50,j+400,50);
		delay(2);
       setcolor(c1[k+5]);
       line(i+450,50,j+500,50);
		delay(2);
       setcolor(c1[k]);
       line(i+550,50,j+550,50);
		delay(2);


      setcolor(c2[k]);
       line(i,150,j,150);
		delay(2);
       setcolor(c2[k+1]);
       line(i+50,150,j+100,150);
		delay(2);
       setcolor(c2[k+2]);
       line(i+150,150,j+200,150);
		delay(2);
       setcolor(c2[k+3]);
       line(i+250,150,j+300,150);
		delay(2);
       setcolor(c2[k+4]);
       line(i+350,150,j+400,150);
		delay(2);
       setcolor(c2[k+5]);
       line(i+450,150,j+500,150);
		delay(2);
       setcolor(c2[k]);
       line(i+550,150,j+550,150);
		delay(2);

       setcolor(c3[k]);
       line(i,250,j,250);
		delay(2);
       setcolor(c3[k+1]);
       line(i+50,250,j+100,250);
		delay(2);
       setcolor(c3[k+2]);
       line(i+150,250,j+200,250);
		delay(2);
       setcolor(c3[k+3]);
       line(i+250,250,j+300,250);
		delay(2);
       setcolor(c3[k+4]);
       line(i+350,250,j+400,250);
		delay(2);
       setcolor(c3[k+5]);
       line(i+450,250,j+500,250);
		delay(2);
       setcolor(c3[k]);
       line(i+550,250,j+550,250);
		delay(2);


       setcolor(c4[k]);
       line(i,350,j,350);
		delay(2);
       setcolor(c4[k+1]);
       line(i+50,350,j+100,350);
		delay(2);
       setcolor(c4[k+2]);
       line(i+150,350,j+200,350);
		delay(2);
       setcolor(c4[k+3]);
       line(i+250,350,j+300,350);
		delay(2);
       setcolor(c4[k+4]);
       line(i+350,350,j+400,350);
		delay(2);
       setcolor(c4[k+5]);
       line(i+450,350,j+500,350);
		delay(2);
       setcolor(c4[k]);
       line(i+550,350,j+550,350);
		delay(2);

     i++;j++;
     }

 for(i=5;i>0;i--)
  temp[i]=c1[i-1];
 temp[0]=c1[5];
 for(i=0;i<6;i++)
  c1[i]=temp[i];

 for(i=5;i>0;i--)
  temp[i]=c2[i-1];
 temp[0]=c2[5];
 for(i=0;i<6;i++)
  c2[i]=temp[i];

 for(i=5;i>0;i--)
  temp[i]=c3[i-1];
 temp[0]=c3[5];
 for(i=0;i<6;i++)
  c3[i]=temp[i];

 for(i=5;i>0;i--)
  temp[i]=c4[i-1];
 temp[0]=c4[5];
 for(i=0;i<6;i++)
  c4[i]=temp[i];

}


//************************LEVEL3_moving rings*******************************
void LEVEL3()
   {	setlinestyle(SOLID_LINE,1,THICK_WIDTH);
    setcolor(MAGENTA);
    arc(300, 200,i,j,150);
    arc(300, 200,i,j,148);
    setcolor(LIGHTRED);
    arc(300,200,i,j,70);
    arc(300,200,i,j,68);
	delay(0.25);
    setcolor(LIGHTGREEN);
    arc(300,200,i+72,j+72,150);
    arc(300,200,i+72,j+72,148);
    setcolor(MAGENTA);
    arc(300,200,i+72,j+72,70);
    arc(300,200,i+72,j+72,68);
	delay(0.25);
    setcolor(LIGHTBLUE);
    arc(300,200,i+144,j+144,150);
    arc(300,200,i+144,j+144,148);
    setcolor(LIGHTGREEN);
    arc(300,200,i+144,j+144,70);
    arc(300,200,i+144,j+144,68);
	delay(0.25);
    setcolor(YELLOW);
    arc(300,200,i+216,j+216,150);
    arc(300,200,i+216,j+216,148);
    setcolor(LIGHTBLUE);
    arc(300,200,i+216,j+216,70);
    arc(300,200,i+216,j+216,68);
	delay(0.25);
    setcolor(LIGHTRED);
    arc(300,200,i+288,j+288,150);
    arc(300,200,i+288,j+288,148);
    setcolor(YELLOW);
    arc(300,200,i+288,j+288,70);
    arc(300,200,i+288,j+288,68);
	delay(0.25);
   }

//Function for making BALL an image and getting its random colors**********
void *buffer;
int BALL()
 { randomize();
   int area;
   int arr[]={9,10,12,14};
   int r=random(4);
     setcolor(arr[r]);
     circle(300,450,10);
     setfillstyle(SOLID_FILL,arr[r]);
     floodfill(300,450,arr[r]);
     area=imagesize(285,435,315,465);
     buffer=malloc(area);
     getimage(285,435,315,465,buffer);
     setcolor(BLACK);
     putimage(285,435,buffer,XOR_PUT);
    c=arr[r];
    return c;
   }

//*************************************
void *buffer2;
int BALL2()
 {
   randomize();
   int area;
   int arr[]={5,12,10,9,14,11};
   int r=random(6);
     setcolor(arr[r]);
     circle(300,450,10);
     setfillstyle(SOLID_FILL,arr[r]);
     floodfill(300,450,arr[r]);
     area=imagesize(285,435,315,465);
     buffer2=malloc(area);
     getimage(285,435,315,465,buffer2);
     setcolor(BLACK);
     putimage(285,435,buffer2,XOR_PUT);
     c=arr[r];
     return c;
    }

//*************************************
void *buffer3;
int BALL3()
 {
   randomize();
   int area;
   int arr[]={5,12,10,9,14};
   int r=random(5);
     setcolor(arr[r]);
     circle(300,450,10);
     setfillstyle(SOLID_FILL,arr[r]);
     floodfill(300,450,arr[r]);
     area=imagesize(285,435,315,465);
     buffer3=malloc(area);
     getimage(285,435,315,465,buffer3);
     setcolor(BLACK);
     putimage(285,435,buffer3,XOR_PUT);
     c=arr[r];
     return c;
    }


//*************Function to move the ball on input from the user while moving
//*************the ring(1)****
void BALLMOVE()
{cleardevice();
 int c,k=400,lcv,y=400;
 void SCORE1();
 void RETRY(int s);
  c=BALL();
 for(i=0,j=90;;i++,j++)
 {if(kbhit())
     {
	if(getch()==32)
	  {  k-=5;

	       if(k<=480 && k>=210)
		STAR(15);
	       else
		STAR(0);

	       for(lcv=1; lcv<=5; lcv++)
		{ y--;
		  if((y<=351 && y>=347) || (y>=50 && y<=54))
		    if(!(c==getpixel(300,350) || c==getpixel(300,50)))
		      if(k<=480 && k>=210)
		       RETRY(0);
		      else
		       RETRY(1);
		}

	       putimage(285,k,buffer,XOR_PUT);
	       delay(5);
	       setcolor(BLACK);
	       putimage(285,k,buffer,XOR_PUT);
	   }
     }


   if((k<=351 && k>=347) || (k>=50 && k<=54))
    if(!(c==getpixel(300,350) || c==getpixel(300,50)))
    { if(k<=480 && k>=210)
      RETRY(0);
     else
      RETRY(1);
     }

   k++;
   putimage(285,k,buffer,XOR_PUT);
   delay(5);
   setcolor(BLACK);
   putimage(285,k,buffer,XOR_PUT);

   if(k==0)
    SCORE1();

   if(k==480)
   {
    if(k<=480 && k>=210)
      RETRY(0);
     else
      RETRY(1);
   }


   y=k;

 LEVEL1();
 }

}

//*************Function to move the ball on input from the user while moving
//*************the lines(2)****
void BALLMOVE2()
{cleardevice();
 int c,k=400,lcv,y=400;
 void SCORE1();
 void RETRY(int s);
  c=BALL2();
 for(i=0;i<10;i++)
 {if(kbhit())
     {
	if(getch()==32)
	  {  k-=5;

	       if(k<=480 && k>=210)
		STAR(15);
	       else
		STAR(0);

	       for(lcv=1; lcv<=5; lcv++)
		{ y--;
		  if((y==50)||(y==150)||(y==250)||(y==350))
		    if(!(c==getpixel(300,50)||c==getpixel(300,150)||c==getpixel(300,250)||c==getpixel(300,350)))
		      if(k<=480 && k>=210)
		       RETRY(0);
		      else
		       RETRY(1);
		}

	       putimage(285,k,buffer2,XOR_PUT);
	       delay(5);
	       setcolor(BLACK);
	       putimage(285,k,buffer2,XOR_PUT);
	   }
     }


  if((y==50)||(y==150)||(y==250)||(y==350))
   if(!(c==getpixel(300,50)||c==getpixel(300,150)||c==getpixel(300,250)||c==getpixel(300,350)))
    if(k<=480 && k>=210)
      RETRY(0);
     else
      RETRY(1);

   k++;
   putimage(285,k,buffer2,XOR_PUT);
   delay(5);
   setcolor(BLACK);
   putimage(285,k,buffer2,XOR_PUT);

   if(k==0)
    SCORE1();

   y=k;

 LEVEL2();
 }

}


//*************Function to move the ball on input from the user while moving
//*************the ring(3)****
void BALLMOVE3()
{cleardevice();
 int C,k=400,lcv,y=400;
  C=BALL3();
 void SCORE3();
 void RETRY3(int s);
 for(i=0,j=72;;i++,j++)
 {if(kbhit())
     {if(getch()==32)
	  {k-=5;
	       if(k<=480 && k>=210)
		STAR(15);
	       else
		STAR(0);

	       for(lcv=1; lcv<=5; lcv++)
		{
		  y--;
		  if((y<=351 && y>=347) || (y>=50 && y<=54))
		    if(!(C==getpixel(300,350) || C==getpixel(300,50)))
		     { cleardevice();
		      if(k<=480 && k>=210)
		       RETRY3(0);
		      else
		       RETRY3(1);
		     }

		  if((y<=270 && y>=267) || (y<=134 && y>=131))
		    if(!(C==getpixel(300,270) || C==getpixel(300,130)))
		     { cleardevice();
		      if(k<=480 && k>=210)
		       RETRY3(0);
		      else
		       RETRY3(1);
		     }
		}

	       putimage(285,k,buffer2,XOR_PUT);
	       delay(5);
	       setcolor(BLACK);
	       putimage(285,k,buffer2,XOR_PUT);
	  }
     }

     for(lcv=1; lcv<=5; lcv++)
      {y--;
	if((y<=351 && y>=347) || (y>=50 && y<=54))
	  if(!(C==getpixel(300,350) || C==getpixel(300,50)))
	    { cleardevice();
	     if(k<=480 && k>=210)
	      RETRY3(0);
	     else
	      RETRY3(1);
	    }
      }

     if((k<=270 && k>=267) || (k<=134 && k>=131))
       if(!(C==getpixel(300,270) || C==getpixel(300,130)))
	 { cleardevice();
	  if(k<=480 && k>=210)
	   RETRY3(0);
	  else
	   RETRY3(1);
	 }

   k++;
   putimage(285,k,buffer2,XOR_PUT);
   delay(5);
   setcolor(BLACK);
   putimage(285,k,buffer2,XOR_PUT);

    y=k;

   if(k==0)
    SCORE3();

    if(k==480)
   {
    if(k<=480 && k>=210)
      RETRY3(0);
     else
      RETRY3(1);
   }

 LEVEL3();
 }

}

//*************************************************************************
//*************************************************************************
void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\bgi\\");
void INTRO();
void SCREEN();
INTRO();
SCREEN();
getch();
closegraph();
}
//**************************************************************************
//**************************************************************************

//**************************************INTRO SCREEN************************
void INTRO()
{ settextstyle(DEFAULT_FONT,HORIZ_DIR,7);
  setcolor(LIGHTBLUE);
  outtextxy(100,150,"C");
  setcolor(YELLOW);
  outtextxy(170,150,"O");
  setcolor(MAGENTA);
  outtextxy(240,150,"L");
  setcolor(LIGHTGREEN);
  outtextxy(310,150,"O");
  setcolor(CYAN);
  outtextxy(380,150,"U");
  setcolor(RED);
  outtextxy(450,150,"R");
  setcolor(BROWN);
  outtextxy(100,250,"S");
  setcolor(LIGHTCYAN);
  outtextxy(170,250,"W");
  setcolor(LIGHTRED);
  outtextxy(240,250,"I");
  setcolor(BLUE);
  outtextxy(310,250,"T");
  setcolor(LIGHTMAGENTA);
  outtextxy(380,250,"C");
  setcolor(GREEN);
  outtextxy(450,250,"H");

  setcolor(WHITE);
  settextstyle(SANS_SERIF_FONT,HORIZ_DIR,1);
  outtextxy(200,450,"Press ENTER to continue\n");
 getch();
}
//************************************MENU*********************************
void SCREEN()
{ cleardevice();

  //BOX 1: INSTRUCTIONS
  settextstyle(SMALL_FONT,HORIZ_DIR,12);
  setcolor(RED);
  outtextxy(200,90,"I");
  setcolor(LIGHTBLUE);
  outtextxy(220,90,"N");
  setcolor(YELLOW);
  outtextxy(240,90,"S");
  setcolor(MAGENTA);
  outtextxy(260,90,"T");
  setcolor(LIGHTGREEN);
  outtextxy(280,90,"R");
  setcolor(CYAN);
  outtextxy(300,90,"U");
  setcolor(RED);
  outtextxy(320,90,"C");
  setcolor(BROWN);
  outtextxy(340,90,"T");
  setcolor(LIGHTCYAN);
  outtextxy(360,90,"I");
  setcolor(LIGHTRED);
  outtextxy(380,90,"O");
  setcolor(BLUE);
  outtextxy(400,90,"N");
  setcolor(LIGHTMAGENTA);
  outtextxy(420,90,"S");
  settextstyle(SMALL_FONT,HORIZ_DIR,5);
  setcolor(WHITE);
  outtextxy(290,125,"Enter (I)");
  setcolor(LIGHTGRAY);
  setlinestyle(SOLID_LINE,0,THICK_WIDTH);
  rectangle(190,85,446,150);

  //BOX 3: EXIT
  settextstyle(SMALL_FONT,HORIZ_DIR,12);
  setcolor(LIGHTCYAN);
  outtextxy(280,350,"E ");
  setcolor(LIGHTRED);
  outtextxy(300,350,"X ");
  setcolor(YELLOW);
  outtextxy(320,350,"I");
  setcolor(LIGHTMAGENTA);
  outtextxy(330,350,"T ");
  settextstyle(SMALL_FONT,HORIZ_DIR,5);
  setcolor(WHITE);
  outtextxy(280,385,"Enter (E)");
  setcolor(LIGHTGRAY);
  setlinestyle(SOLID_LINE,0,THICK_WIDTH);
  rectangle(190,345,446,410);

  //CIRCLE 2: PLAY
  i=0;j=90;
  setlinestyle(SOLID_LINE,1,THICK_WIDTH);
  //first circle
    setcolor(LIGHTRED);
    arc(320, 245,i,j,50);
    arc(320, 245,i,j,48);
    setcolor(LIGHTGREEN);
    arc(320,245,i+90,j+90,50);
    arc(320,245,i+90,j+90,48);
    setcolor(LIGHTBLUE);
    arc(320,245,i+180,j+180,50);
    arc(320,245,i+180,j+180,48);
    setcolor(YELLOW);
    arc(320,245,i+270,j+270,50);
    arc(320,245,i+270,j+270,48);
  //second circle
    setcolor(LIGHTBLUE);
    arc(320, 245,i+45,j+45,59);
    arc(320, 245,i+45,j+45,57);
    setcolor(YELLOW);
    arc(320,245,i+135,j+135,59);
    arc(320,245,i+135,j+135,57);
    setcolor(LIGHTRED);
    arc(320,245,i+225,j+225,59);
    arc(320,245,i+225,j+225,57);
    setcolor(LIGHTGREEN);
    arc(320,245,i+315,j+315,59);
    arc(320,245,i+315,j+315,57);
  //third circle
    setcolor(LIGHTRED);
    arc(320,245,i,j,68);
    arc(320,245,i,j,66);
    setcolor(LIGHTGREEN);
    arc(320,245,i+90,j+90,68);
    arc(320,245,i+90,j+90,66);
    setcolor(LIGHTBLUE);
    arc(320,245,i+180,j+180,68);
    arc(320,245,i+180,j+180,66);
    setcolor(YELLOW);
    arc(320,245,i+270,j+270,68);
    arc(320,245,i+270,j+270,66);
  //PLAY triangle
  setcolor(WHITE);
  setlinestyle(SOLID_LINE,1,THICK_WIDTH);
  line(300,210,300,266);
  line(300,210,355,238);
  line(355,238,300,266);
  settextstyle(SMALL_FONT,HORIZ_DIR,4);
  setcolor(LIGHTGRAY);
  outtextxy(297,270,"Enter (P)");

//*******************************

  if(getch()==105||getch()==73)
   {void INSTRUCTIONS();
    INSTRUCTIONS();}
  else if(getch()==112||getch()==80)
    BALLMOVE();
  else if(getch()==101||getch()==69)
   exit(0);

}

//**********************************instructions*****************************
void INSTRUCTIONS()
{cleardevice();
 settextstyle(SMALL_FONT,HORIZ_DIR,12);
  setcolor(RED);
  outtextxy(200,60,"I");
  setcolor(LIGHTBLUE);
  outtextxy(220,60,"N");
  setcolor(YELLOW);
  outtextxy(240,60,"S");
  setcolor(MAGENTA);
  outtextxy(260,60,"T");
  setcolor(LIGHTGREEN);
  outtextxy(280,60,"R");
  setcolor(CYAN);
  outtextxy(300,60,"U");
  setcolor(RED);
  outtextxy(320,60,"C");
  setcolor(BROWN);
  outtextxy(340,60,"T");
  setcolor(LIGHTCYAN);
  outtextxy(360,60,"I");
  setcolor(LIGHTRED);
  outtextxy(380,60,"O");
  setcolor(BLUE);
  outtextxy(400,60,"N");
  setcolor(LIGHTMAGENTA);
  outtextxy(420,60,"S");

  cout<<"\n\n\n\n\n\n\n\nPRESS SPACE BAR TO MOVE THE BALL"
      <<"\n\n\nDO NOT LET THE BALL DROP TOO LOW (UNDER THE SCREEN)"
      <<"\n\n\nPASS THROUGH WHEN THE COLOUR OF THE BALL AND THE COLOUR OF THE OBSTACLE LINES UP"
      <<"\n\nMOVE THE BALL TILL THE TOP END OF THE SCREEN"
      <<"\n\n\nEVERY STAR COLLECTED ON THE WAY, ADDS UP TO YOUR SCORE"
      <<"\n\n\nDO NOT PRESS SPACE BAR ONCE THE BALL EXITS THE TOP SCREEN";

 settextstyle(SMALL_FONT,HORIZ_DIR,5);
 setcolor(LIGHTMAGENTA);
 outtextxy(195,420,"PRESS ");
 setcolor(LIGHTBLUE);
 outtextxy(243,420,"ENTER ");
 setcolor(LIGHTCYAN);
 outtextxy(291,420,"TO ");
 setcolor(LIGHTGREEN);
 outtextxy(315,420,"RETURN ");
 setcolor(YELLOW);
 outtextxy(371,420,"TO ");
 setcolor(BROWN);
 outtextxy(395,420,"HOME ");
 setcolor(LIGHTRED);
 outtextxy(435,420,"PAGE");

 if(getch()==13)
  SCREEN();
}

//************************************************************************
//**************************************score_star************************
 void *buffer1;
 void SCORESTAR()
 {int area1,c;

  c=BALL2();

  setcolor(c);
  setfillstyle(SOLID_FILL,c);
  setlinestyle(SOLID_LINE,0,NORM_WIDTH);
  line(191,94,209,94);
  line(209,94,200,110);
  line(200,110,191,94);
  line(200,90,209,106);
  line(209,106,191,106);
  line(191,106,200,90);
  floodfill(200,100,c);
  floodfill(200,91,c);
  floodfill(200,109,c);
  floodfill(195,97,c);
  floodfill(195,104,c);
  floodfill(205,97,c);
  floodfill(205,104,c);

 area1=imagesize(186,85,214,115);
 buffer1=malloc(area1);
 getimage(186,85,214,115,buffer1);
 setcolor(BLACK);
 putimage(186,85,buffer1,XOR_PUT);

 }

//****************************************retry_screen***********************
void RETRY(int s)
{cleardevice();

 settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
 setcolor(WHITE);
 outtextxy(267,125,"SCORE: ");

 if(s==1)
  {SCORESTAR();
   putimage(316,110,buffer1,XOR_PUT);
  }
 else
  {settextstyle(DEFAULT_FONT,HORIZ_DIR,3);
   outtextxy(316,114,"0");
  }

 setcolor(WHITE);
 setlinestyle(SOLID_LINE,1,NORM_WIDTH);
 rectangle(254,105,349,142);

 settextstyle(DEFAULT_FONT,HORIZ_DIR,3);
 setcolor(LIGHTMAGENTA);
 outtextxy(185,200,"L");
 setcolor(LIGHTBLUE);
 outtextxy(205,200,"E");
 setcolor(GREEN);
 outtextxy(225,200,"V");
 setcolor(YELLOW);
 outtextxy(245,200,"E");
 setcolor(RED);
 outtextxy(265,200,"L");
 setcolor(BLUE);
 outtextxy(325,200,"F");
 setcolor(LIGHTGREEN);
 outtextxy(345,200,"A");
 setcolor(LIGHTRED);
 outtextxy(365,200,"I");
 setcolor(MAGENTA);
 outtextxy(385,200,"L");
 setcolor(CYAN);
 outtextxy(405,200,"E");
 setcolor(BROWN);
 outtextxy(425,200,"D");

 settextstyle(SMALL_FONT,HORIZ_DIR,6);
 setcolor(WHITE);
 outtextxy(220,255,"PRESS ENTER TO RETRY");
 outtextxy(235,280,"PRESS (E) TO EXIT");

 if(getch()==13)
  BALLMOVE();
 else if(getch()==101||getch()==69)
  exit(0);

}

//********************************************
void RETRY2(int s)
{cleardevice();

 settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
 setcolor(WHITE);
 outtextxy(246,125,"SCORE: ");

 if(s==1)
  {SCORESTAR();
   putimage(297,110,buffer1,XOR_PUT);
   SCORESTAR();
   putimage(330,110,buffer1,XOR_PUT);
  }
 else
  {SCORESTAR();
   putimage(313,110,buffer1,XOR_PUT);
  }

 setcolor(WHITE);
 setlinestyle(SOLID_LINE,1,NORM_WIDTH);
 rectangle(236,105,364,142);

 settextstyle(DEFAULT_FONT,HORIZ_DIR,3);
 setcolor(LIGHTMAGENTA);
 outtextxy(185,200,"L");
 setcolor(LIGHTBLUE);
 outtextxy(205,200,"E");
 setcolor(GREEN);
 outtextxy(225,200,"V");
 setcolor(YELLOW);
 outtextxy(245,200,"E");
 setcolor(RED);
 outtextxy(265,200,"L");
 setcolor(BLUE);
 outtextxy(325,200,"F");
 setcolor(LIGHTGREEN);
 outtextxy(345,200,"A");
 setcolor(LIGHTRED);
 outtextxy(365,200,"I");
 setcolor(MAGENTA);
 outtextxy(385,200,"L");
 setcolor(CYAN);
 outtextxy(405,200,"E");
 setcolor(BROWN);
 outtextxy(425,200,"D");

 settextstyle(SMALL_FONT,HORIZ_DIR,6);
 setcolor(WHITE);
 outtextxy(220,255,"PRESS ENTER TO RETRY");
 outtextxy(235,280,"PRESS (E) TO EXIT");

 if(getch()==13)
  BALLMOVE2();
 else if(getch()==101||getch()==69)
  exit(0);

}

//********************************************
void RETRY3(int s)
{cleardevice();

 settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
 setcolor(WHITE);
 outtextxy(232,125,"SCORE: ");

 if(s==1)
  {SCORESTAR();
   putimage(281,110,buffer1,XOR_PUT);
   SCORESTAR();
   putimage(314,110,buffer1,XOR_PUT);
   SCORESTAR();
   putimage(347,110,buffer1,XOR_PUT);
  }
 else
  {SCORESTAR();
   putimage(306,110,buffer1,XOR_PUT);
   SCORESTAR();
   putimage(339,110,buffer1,XOR_PUT);
  }

 setcolor(WHITE);
 setlinestyle(SOLID_LINE,3,NORM_WIDTH);
 rectangle(219,105,380,142);

 settextstyle(DEFAULT_FONT,HORIZ_DIR,3);
 setcolor(LIGHTMAGENTA);
 outtextxy(185,200,"L");
 setcolor(LIGHTBLUE);
 outtextxy(205,200,"E");
 setcolor(GREEN);
 outtextxy(225,200,"V");
 setcolor(YELLOW);
 outtextxy(245,200,"E");
 setcolor(RED);
 outtextxy(265,200,"L");
 setcolor(BLUE);
 outtextxy(325,200,"F");
 setcolor(LIGHTGREEN);
 outtextxy(345,200,"A");
 setcolor(LIGHTRED);
 outtextxy(365,200,"I");
 setcolor(MAGENTA);
 outtextxy(385,200,"L");
 setcolor(CYAN);
 outtextxy(405,200,"E");
 setcolor(BROWN);
 outtextxy(425,200,"D");

 settextstyle(SMALL_FONT,HORIZ_DIR,6);
 setcolor(WHITE);
 outtextxy(220,255,"PRESS ENTER TO RETRY");
 outtextxy(235,280,"PRESS (E) TO EXIT");

 if(getch()==13)
  BALLMOVE3();
 else if(getch()==101||getch()==69)
  exit(0);

}

//******************************************score_screen********************
void SCORE1()
{cleardevice();

 settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
 setcolor(WHITE);
 outtextxy(267,125,"SCORE: ");

 SCORESTAR();
 putimage(316,110,buffer1,XOR_PUT);

 setcolor(LIGHTGRAY);
 setlinestyle(SOLID_LINE,1,THICK_WIDTH);
 rectangle(254,105,349,142);

 settextstyle(DEFAULT_FONT,HORIZ_DIR,3);
 setcolor(LIGHTMAGENTA);
 outtextxy(165,200,"L");
 setcolor(LIGHTBLUE);
 outtextxy(185,200,"E");
 setcolor(GREEN);
 outtextxy(205,200,"V");
 setcolor(YELLOW);
 outtextxy(225,200,"E");
 setcolor(RED);
 outtextxy(245,200,"L");
 setcolor(BLUE);
 outtextxy(305,200,"C");
 setcolor(LIGHTGREEN);
 outtextxy(325,200,"O");
 setcolor(LIGHTRED);
 outtextxy(345,200,"M");
 setcolor(MAGENTA);
 outtextxy(365,200,"P");
 setcolor(CYAN);
 outtextxy(385,200,"L");
 setcolor(YELLOW);
 outtextxy(405,200,"E");
 setcolor(RED);
 outtextxy(425,200,"T");
 setcolor(LIGHTBLUE);
 outtextxy(445,200,"E");
 setcolor(BROWN);
 outtextxy(465,200,"!");

 settextstyle(SMALL_FONT,HORIZ_DIR,6);
 setcolor(WHITE);
 outtextxy(200,275,"PRESS ENTER TO CONTINUE");
 outtextxy(245,290,"PRESS (E) TO EXIT");

 if(getch()==13)
  BALLMOVE3();
 else if(getch()==101||getch()==69)
  exit(0);
}
//*********************************************
void SCORE2()
{cleardevice();

 settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
 setcolor(WHITE);
 outtextxy(246,125,"SCORE: ");

 SCORESTAR();
 putimage(297,110,buffer1,XOR_PUT);
 SCORESTAR();
 putimage(330,110,buffer1,XOR_PUT);

 setcolor(LIGHTGRAY);
 setlinestyle(SOLID_LINE,1,THICK_WIDTH);
 rectangle(236,105,364,142);

 settextstyle(DEFAULT_FONT,HORIZ_DIR,3);
 setcolor(LIGHTMAGENTA);
 outtextxy(165,200,"L");
 setcolor(LIGHTBLUE);
 outtextxy(185,200,"E");
 setcolor(GREEN);
 outtextxy(205,200,"V");
 setcolor(YELLOW);
 outtextxy(225,200,"E");
 setcolor(RED);
 outtextxy(245,200,"L");
 setcolor(BLUE);
 outtextxy(305,200,"C");
 setcolor(LIGHTGREEN);
 outtextxy(325,200,"O");
 setcolor(LIGHTRED);
 outtextxy(345,200,"M");
 setcolor(MAGENTA);
 outtextxy(365,200,"P");
 setcolor(CYAN);
 outtextxy(385,200,"L");
 setcolor(YELLOW);
 outtextxy(405,200,"E");
 setcolor(RED);
 outtextxy(425,200,"T");
 setcolor(LIGHTBLUE);
 outtextxy(445,200,"E");
 setcolor(BROWN);
 outtextxy(465,200,"!");

 settextstyle(SMALL_FONT,HORIZ_DIR,6);
 setcolor(WHITE);
 outtextxy(200,275,"PRESS ENTER TO CONTINUE");
 outtextxy(245,290,"PRESS (E) TO EXIT");

 if(getch()==13)
  BALLMOVE3();
 else if(getch()==101||getch()==69)
  exit(0);
}

//*********************************************
void SCORE3()
{cleardevice();

 settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
 setcolor(WHITE);
 outtextxy(232,125,"SCORE: ");

 SCORESTAR();
 putimage(281,110,buffer1,XOR_PUT);
 SCORESTAR();
 putimage(314,110,buffer1,XOR_PUT);
 SCORESTAR();
 putimage(347,110,buffer1,XOR_PUT);

 setcolor(LIGHTGRAY);
 setlinestyle(SOLID_LINE,1,THICK_WIDTH);
 rectangle(219,105,380,142);

 settextstyle(DEFAULT_FONT,HORIZ_DIR,3);
 setcolor(LIGHTMAGENTA);
 outtextxy(165,200,"G");
 setcolor(LIGHTBLUE);
 outtextxy(185,200,"A");
 setcolor(GREEN);
 outtextxy(205,200,"M");
 setcolor(YELLOW);
 outtextxy(225,200,"E");
 setcolor(RED);
 outtextxy(285,200,"C");
 setcolor(BLUE);
 outtextxy(305,200,"O");
 setcolor(LIGHTGREEN);
 outtextxy(325,200,"M");
 setcolor(LIGHTRED);
 outtextxy(345,200,"P");
 setcolor(MAGENTA);
 outtextxy(365,200,"L");
 setcolor(CYAN);
 outtextxy(385,200,"E");
 setcolor(YELLOW);
 outtextxy(405,200,"T");
 setcolor(RED);
 outtextxy(425,200,"E");
 setcolor(LIGHTBLUE);
 outtextxy(445,200,"D");
 setcolor(BROWN);
 outtextxy(465,200,"!");

 settextstyle(SMALL_FONT,HORIZ_DIR,6);
 setcolor(WHITE);
 outtextxy(200,275,"PRESS ENTER TO CONTINUE");
 outtextxy(245,290,"PRESS (E) TO EXIT");

 if(getch()==13)
  BALLMOVE3();
 else if(getch()==101||getch()==69)
  exit(0);
}

//**************************************************************************
//*********************************COLORSWITCH******************************
//**************************************************************************
