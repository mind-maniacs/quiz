#include <stdio.h>
#include <stdlib.h>
#include "data.c"

void start()
{
    int option;
    system("clear");
    printf("\n\n          ~~~~~Started~~~~~\n\n          Select Category:\n\n");
    printf("          1) General Knowledge\n          2) Science\n          3) Technology\n          4) Geography\n          5) Indian History\n\n\n");
    printf("          Enter Category number: ");
    scanf("          %d",&option);
    switch(option)
    {
        case 1: topic0();//Only case1 executes now;
                break;
        case 2: topic1();
                break;
        case 3: topic2();
                break;
        case 4: topic3();
                break;
        case 5: topic4();
                break;
        default:printf("          Invalid Options\n");
    }
}


void main()
{
    char inp,con;
    void topic0();
    
    void topic1();
    void topic2();
    void topic3();
    void topic4();
    system("clear");
    printf("          ~~~~~~A simple Quiz Game~~~~~~~\n\n               ~~~~~Welcome~~~~~\n\n          A C programming Assignment By-\n\n\n          Adarsh\n\n          Akash\n\n          Cyril\n\n          Subramaniam\n\n          Varkey\n\n\n                           Start?\n\n          ~~~~~Press Enter to start the game~~~~~");
    scanf("%c",&inp);
    system("clear");
    start();
}
