#include <stdio.h>
void pound(int n);

int main()
{
    int times = 8;
    char ch = '!';
    float f = 6.0f;

    pound(times);
    pound(ch);
    pound(f);

    return 0;
}

void pound(int n)
{
    while (n  --> 0)
    printf("#");
    printf("\n");
}
