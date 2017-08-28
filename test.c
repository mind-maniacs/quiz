 
#include <stdio.h>

int main(void)
{
    int width = 80;
    char str[] = "Hello world";
    int length = sizeof(str) - 1;  // Discount the terminal '\0'
    int pad = (length >= width) ? 0 : (width - length) / 2;

    printf("%*.*s%s\n", pad, pad, " ", str);
    return(0);
}
