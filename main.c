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
        case 1: example();//Only case1 executes now;
                break;
        case 2: example1();
                break;
        case 3: example2();
                break;
        case 4: example3();
                break;
        case 5:example4();
                break;
        default:printf("     Invalid Options\n");
    }
}


void main()
{
    char inp;
    system("clear");
    void example1();
    void example2();
    void exapmle3();
    void example();
    printf("~~~~~~A simple Quiz Game~~~~~~~\n\n     ~~~~~Welcome~~~~~\n\n     A C programming Assignment By-\n     Adarsh\n     Akash\n     Cyril\n     Subramaniam\n     Varkey\n\n\n\n\n\n     Start?\n\n     ~Press 'y' and Enter to start the game:");
    scanf("%c",&inp);
    if(inp=='y')
    {start();}
    
}
