/*

~~~~~~~~~~Main file~~~~~~~~~~

  This is the main file which contains the Start Menu, Topic Selection Menu and Credits page.
It is linked to the file 'data.c' which contains all the questions and answers. The following
code can only be compiled on a GCC compiler.


*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "data.c"  //links the data.c file to this file

void start() //Topic Selection Menu
{
    int option;
    system("clear");
    printf("\n\n\t\t\t\t   ~~~~~Select a Category~~~~~\n\n");
    printf("\t\t\t\t     1) General Knowledge\n\t\t\t\t     2) Science\n\t\t\t\t     3) Technology\n\t\t\t\t     4) Geography\n\t\t\t\t     5) Indian History\n\n\t\t\t     Input any other key to go to Start Menu\n\n\n");
    printf("\t\t\t\t   Enter Category Number = ");
    scanf("%d",&option);
    switch(option) //goes to the corresponding topic in the 'data.c' file
    {
        case 1: topic0();
                break;
        case 2: topic1();
                break;
        case 3: topic2();
                break;
        case 4: topic3();
                break;
        case 5: topic4();
                break;
        default:printf("\n");
    }
}

void credits() //Credits Menu
{
    char a;
    printf("\n\n\n\t\t\t\t  ~~~~~~~~~~~Credits~~~~~~~~~~~\n\n\n\n");
    printf("\t\t\t\t  ~~~~~Database Collection~~~~~\n\t\t\t\t\t   Subramanium\n\t\t\t\t\t     Aadarsh\n\n");
    printf("\t\t\t\t      ~~~~~Programming~~~~~\n\t\t\t\t\t      Cyril\n\t\t\t\t\t      Akash\n\t\t\t\t\t      Varkey\n\n");
    printf("\t\t\t\t     ~~~~~User Interface~~~~~\n\t\t\t\t\t      Akash\n\t\t\t\t\t      Cyril");
    printf("\n\n\n\t\t\t\t ~~~~~Press ENTER to return~~~~~\n");
    getchar(); //Used for 'Press ENTER to return'
    scanf("%c",&a);
}

void main()
{
  char con;
  int inp;
  while(inp!=3) //loops the whole menu until 3 or any number other than 1 or 2 is pressed
  {
    system("clear");
    printf("\n\n");
    printf("\t ▄▄▄           █████   █    ██  ██▓▒███████▒     ▄████  ▄▄▄       ███▄ ▄███▓▓█████ \n");
    printf("\t▒████▄       ▒██▓  ██▒ ██  ▓██▒▓██▒▒ ▒ ▒ ▄▀░    ██▒ ▀█▒▒████▄    ▓██▒▀█▀ ██▒▓█   ▀ \n");
    printf("\t▒██  ▀█▄     ▒██▒  ██░▓██  ▒██░▒██▒░ ▒ ▄▀▒░    ▒██░▄▄▄░▒██  ▀█▄  ▓██    ▓██░▒███   \n");
    printf("\t░██▄▄▄▄██    ░██  █▀ ░▓▓█  ░██░░██░  ▄▀▒   ░   ░▓█  ██▓░██▄▄▄▄██ ▒██    ▒██ ▒▓█  ▄ \n");
    printf("\t ▓█   ▓██▒   ░▒███▒█▄ ▒▒█████▓ ░██░▒███████▒   ░▒▓███▀▒ ▓█   ▓██▒▒██▒   ░██▒░▒████▒\n");
    printf("\t ▒▒   ▓▒█░   ░░ ▒▒░ ▒ ░▒▓▒ ▒ ▒ ░▓  ░▒▒ ▓░▒░▒    ░▒   ▒  ▒▒   ▓▒█░░ ▒░   ░  ░░░ ▒░ ░\n");
    printf("\t  ▒   ▒▒ ░    ░ ▒░  ░ ░░▒░ ░ ░  ▒ ░░░▒ ▒ ░ ▒     ░   ░   ▒   ▒▒ ░░  ░      ░ ░ ░  ░\n");
    printf("\t  ░   ▒         ░   ░  ░░░ ░ ░  ▒ ░░ ░ ░ ░ ░   ░ ░   ░   ░   ▒   ░      ░      ░   \n");
    printf("\t      ░  ░       ░       ░      ░    ░ ░             ░       ░  ░       ░      ░  ░\n");
    printf("\t\t\t\t    A C Programming Assignment\n\n\n\n\t\t\t\t\t    1.Start\n\t\t\t\t\t   2.Credits\n\t\t\t\t\t    3.Exit\n");
    printf("\n\n\n\n\t\t\t\t      Select your Option = ");
    scanf("%d",&inp);
    switch(inp)
    {
      case 1:start(); //goes to Topic Selection Menu
             break;
      case 2:credits(system("clear")); //goes to Credits Menu
             break;
      case 3:return; //exits the program
             break;
      default: printf("\n\t\t\t\t\t Invalid option\n\t\t\t\t\t     Bye Bye\n\n\n"); //exits the program
               return;
    }
  }
  return;
}
