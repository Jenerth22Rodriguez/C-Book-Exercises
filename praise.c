#include <stdio.h>
#include <string.h>
#define Preise "You are awesome"

int main(void)
{
    char name[40];

    printf("What's your name?\n");
    scanf("%s",name);
    printf("Hello,%s. %s \n",name, Preise );

    return 0;
}

/*
In this exercise I try to get familiar with define and how the define work in a function

*/
