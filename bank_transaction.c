#include <stdio.h>

int main(void)
{
int current_balance;
int transfer_amount;
int new_State;
int *ptr_current_balance;
int *ptr_transfer_amount;
int sum;
int subtract;
int *new_balance;
int *new_state;

printf("Please enter amount in source bank account: ");
scanf("%d",ptr_current_balance);

printf("please enter amount in destination bank account: ");
scanf("%d",ptr_transfer_amount);

printf("Please enter amount to transfer: ");
scanf("%d",&new_State);

sum = *ptr_transfer_amount + *new_state;
subtract = *ptr_transfer_amount - *new_state;

printf("The source bank has $%d\n",subtract);
printf(" The destination bank has $%d\n",sum);
return 0;
}
