#include <stdio.h>
#define FUNDELEN (50)
#define  N (2)


struct funds
{
char bank[FUNDELEN];
double bankfunds;
char save[FUNDELEN];
double savefunds;
};

double sum(const struct funds money[], int n);

int main(void)
{
struct funds jones[N]= {
{
    "Garlic-Melon Bank",
    4032.27,
    "Lucky's Saving and Loan",
    8543.94
},
{   "Honest Jack's Bank",
    3620.88,
    "Party Time Savings",
    3802.91
}
};

printf("The Joneses have a total of $%.2f.\n", sum(jones,N));

return 0;
}

double sum(const struct funds money[], int n)
{
    double total;

    for(int index = 0, total = 0; index < n; index++ )

        total += money[index].bankfunds + money[index].savefunds;
    return(total);
}
