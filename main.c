#include <stdio.h>
#include <stdlib.h>
#include "data.c"

void start()
{
    int option;
    system("clear");
    printf("\n\n     ~~~~~Started~~~~~\n\n     Select Category:\n\n");
    printf("     1) Ex1\n     2) Ex2\n     3) Ex3\n     4) Ex4\n");
    printf("     Enter Category number: ");
    scanf("     %d",&option);
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
        default:printf("     Invalid Options\n");
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
    printf("     ~~~~~~A simple Quiz Game~~~~~~~\n\n     ~~~~~Welcome~~~~~\n\n     A C programming Assignment By-\n     Adarsh\n     Akash\n     Cyril\n     Subramaniam\n     Varkey\n\n\n\n\n\n     Start?\n\n     ~~~~~Press Enter to start the game~~~~~");
    scanf("%c",&inp);
    system("clear");
    start();
}
