#include <stdio.h>

struct funds
{
    const char *bank;
    double bankfund;
    const char *save;
    double savefund;
};



static double sum ( const struct funds * money)
{
    return(money->bankfund + money->savefund);
}
int main(void)
{
    struct funds stan ={
        "Garlic-Melon Bank",
        4032.27,
        "Lucky's Saving and Loan",
        8543.94
    };
    printf("Stan has a total of $%.2f.\n",sum(&stan));
    return 0;
}
