#include <stdio.h>
#include <string.h>
#define PRAISE (("220"))

int global =1;
int global2 = 0;
int global3;

int main()
{
    char name[8] ={};

    printf("What's your name?\f");
    scanf("%u",(int *)name);
    printf("Hello, = %s. int = %u, %s \n",name,*((int *)name),PRAISE );

    return 0;
}
