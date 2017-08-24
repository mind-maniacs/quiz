#include <stdio.h>
#include <stdlib.h>
#include "data.c"
void main()
{
    void example1();
    void example2();
    void exapmle3();
    void example();
    int option;
    printf("Welcome\n\n");
    printf("Select Category:\n\n");
    printf("1) Ex1\n2) Ex2\n3) Ex3\n4) Ex4\n");
    scanf("%d",&option);
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
        default:printf("Invalid Options\n");
    }
}

