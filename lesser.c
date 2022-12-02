#include <stdio.h>

static int lesser(int name, int name2);

int main(void)
{
int evil1, evil2;

   printf("Enter a pair of integers (q to quit):\n");
   while(scanf("%d %d", &evil1, &evil2) == 2)
   {
      printf("The lesser of %d and %d is %d.\n", evil1, evil2, lesser(evil1, evil2));
      printf("Enter a pair of integers (q to quit):\n");
   }
   printf("Bye.\n");
   return 0;
}

int lesser(int firstNumber, int secondNumber)
{
   int evilNumber;
   if(firstNumber < secondNumber)
      evilNumber = firstNumber;
   else
      evilNumber = secondNumber;
   return evilNumber;
}
