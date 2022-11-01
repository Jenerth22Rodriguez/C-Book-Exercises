#include <stdio.h>
#define FUND_NAME_LENGTH (50)

struct funds
{
    char bank[FUND_NAME_LENGTH];
    double bankfund;
    char save[FUND_NAME_LENGTH];
    double savefund;
};

static double Sum_bankfund_and_savefund(double save, double fund)
{
    return(save + fund);
}

int main(void)
{
    struct funds stan ={
        "Garlic-Melon Bank",
        4032.27,
        "Lucky's Saving and Loan",
        8543.94
    };
    printf("Stan has a total of $%.2f.\n",Sum_bankfund_and_savefund(stan.bankfund, stan.savefund));
    return 0;
}
