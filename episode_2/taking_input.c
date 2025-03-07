#include <stdio.h>

int main()
{
    char name[16];
    printf("Enter your name: ");
    scanf("%s", name); // we dont use this in production because it is not safe

    printf("You are %s, right ?", name);
    return 0;
}