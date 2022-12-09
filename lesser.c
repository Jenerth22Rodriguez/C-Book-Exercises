#include <stdio.h>

static int lesser(int firstNumber, int secondNumber)
{
   int evilNumber;
   if(firstNumber < secondNumber)
   {
      evilNumber = firstNumber;
   }
   else
      (evilNumber = secondNumber);
   return evilNumber;
}

int main(void)
{
   int evilNumber1, evilNumber2;

   printf("Enter a pair of integers (q to quit):\n");
   int numberOfIntegerScan = scanf("%d %d", &evilNumber1, &evilNumber2);

   while(numberOfIntegerScan == 2)
   {
      printf("The lesser of %d and %d is %d.\n", evilNumber1, evilNumber2, lesser(evilNumber1, evilNumber2));
      printf("Enter a pair of integers (q to quit):\n");
      numberOfIntegerScan = scanf("%d %d", &evilNumber1, &evilNumber2);
   }
   printf("Bye.\n");
   return 0;
}
