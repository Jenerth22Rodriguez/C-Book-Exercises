#include <stdio.h>

int main()

{
   int list[] = { 7, 4, 1, 5, 3, 2, 7, 6, 4, 2, 9, 1, 2, 6, 8, 2, 3, 4 };

   int sizeOfArray = sizeof(list);

   int elementSize = sizeof(list[0]);

   int lengthOfArray = sizeOfArray / elementSize;

   int evenNumber = 0;

   int oddNumber = 0;

   for(int index = 0; index < lengthOfArray; index++)
   {
      if((index % 2) == 0)
      {
         evenNumber += list[index];
      }
      else
      {
         oddNumber += list[index];
      }

      printf(" %d", list[index]);
   }

   int result = evenNumber - oddNumber;

   printf("\n");

   printf("The alternating sum is: %d\n", result);

   return 0;
}
