#include <stdio.h>
#define PAGE (336) // constant
#define WORDS (65618)

int main (void)
{
    short num = PAGE;
    short mnum = -PAGE;

    printf("num as short and unsigned short: %hd %hu\n",num,num);
    printf("-m as short and unsigned short: %hd %hu\n", mnum, mnum);
    printf("num as int and char: %d %c\n", num, num);
    printf("Words as int, short, and char: %d %d %c\n",WORDS, WORDS, WORDS);

    return 0;
}
