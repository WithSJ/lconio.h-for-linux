#include <stdio.h>
#include <stdlib.h>
#include<string.h>

#define    Red         "\033[0;31m"
#define    BoldRed     "\033[1;31m"
#define    Green       "\033[0;32m"
#define    BoldGreen   "\033[1;32m"
#define    Yellow      "\033[0;33m"
#define    BoldYellow  "\033[1;33m"
#define    Blue        "\033[0;34m"
#define    BoldBlue    "\033[1;34m"
#define    Magenta     "\033[0;35m"
#define    BoldMagenta "\033[1;35m"
#define    Cyan        "\033[0;36m"
#define    BoldCyan    "\033[1;36m"
#define    Reset       "\033[0m"

#define     black        "\033[0;40m"
#define     red          "\033[0;41m"
#define     green        "\033[0;42m"
#define     yellow       "\033[0;43m"
#define     blue         "\033[0;44m"
#define     magenta      "\033[0;45m"
#define     cyan         "\033[0;46m"
#define     white        "\033[0;47m"


void textbackground(int color_number)
{
      switch (color_number)
      {
      case 0:     printf(Reset);
                  break;

      case 1:   printf(red);
                  break;

      case 2:   printf(green);
                  break;
      
      case 3:   printf(yellow);
                  break;
      
      case 4:   printf(blue);
                  break;
      
      case 5:   printf(magenta);
                  break;

      case 6:   printf(cyan);
                  break;
      
      default:    printf(Reset);    
                  break;
      }
}

void textcolor(int color_number)
{     
      switch (color_number)
      {
      case 0:     printf(Reset);
                  break;
      
      case 1:   printf(Red);
                  break;
      
      case 2:   printf(BoldRed);
                  break;
      case 3:   printf(Green);
                  break;
      case 4:   printf(BoldGreen);
                  break;
      case 5:   printf(Yellow);
                  break;
      case 6:   printf(BoldYellow);
                  break;
      case 7:   printf(Blue);
                  break;
      case 8:   printf(BoldBlue);
                  break;
      case 9:   printf(Magenta);
                  break;
      case 10:   printf(BoldMagenta);
                  break;
      case 11:   printf(Cyan);
                  break;
      case 12:   printf(BoldCyan);
                  break;
      
      default:    printf(Reset);    
                  break;
      }
      
}



void clrscr()
{
     system("clear");
}
 char getch()
{
      char c; // This function should return the keystroke
      system("stty raw");    // Raw input - wait for only a single keystroke
      system("stty -echo");  // Echo off
      c = getchar();
      system("stty cooked"); // Cooked input - reset
      system("stty echo");   // Echo on - Reset
      return c;
}

void gotoxy(int x,int y)
 {
      printf("%c[%d;%df",0x1B,y,x);
 }

