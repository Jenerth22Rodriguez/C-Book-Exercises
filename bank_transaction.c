#include <stdio.h>

int main(void)
{
int source_Account_Current_Balance;
int *ptr_source_Account_Current_Balance = &source_Account_Current_Balance;

int destination_Account_Current_Balance;
int *ptr_destination_Account_Current_Balance = &destination_Account_Current_Balance;

int transfer_Money;
int *ptr_transfer_Money = &transfer_Money;

printf("Please enter amount in source bank account: ");
scanf("%d",ptr_source_Account_Current_Balance);

printf("please enter amount in destination bank account: ");
scanf("%d",ptr_destination_Account_Current_Balance);

printf("Please enter amount to transfer: ");
scanf("%d",ptr_transfer_Money);

source_Account_Current_Balance = *ptr_source_Account_Current_Balance  - *ptr_transfer_Money;
destination_Account_Current_Balance = *ptr_destination_Account_Current_Balance + *ptr_transfer_Money;

printf("The source bank has $%d\n",source_Account_Current_Balance);
printf("The destination bank has $%d\n",destination_Account_Current_Balance);
return 0;

}
