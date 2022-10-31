#include <stdio.h>

int main(void)
{
int current_balance,transfer_amount;
int *ptr_current_balance, *ptr_transfer_amount;
int sum, substact;
int *new_balance,*new_state;
int balance;

printf("Please enter amount in source bank account: "); 
scanf("%d",&current_balance);
 
printf("please enter amount in destination bank account: ");
scanf("%d",&transfer_amount); 

ptr_transfer_amount= &current_balance; 
new_balance= &transfer_amount;
new_state= &balance; 

printf("Please enter amount to transfer: ");
scanf("%d",&balance); 
sum = *new_balance + *new_state;
substact = *ptr_transfer_amount - *new_state;

printf("The source bank has $%d\n",substact); 
printf(" The destination bank has $%d\n",sum);
return 0;
}