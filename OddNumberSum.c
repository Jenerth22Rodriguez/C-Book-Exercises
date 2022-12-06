#include <stdio.h>

int main()

{
   int list[] = { 7, 4, 1, 5, 3, 2, 7, 6, 4, 2, 9, 1, 2, 6, 8, 2, 3, 4 };

   int array = sizeof(list);

   int Size = sizeof(list[0]);

   int lenghtOfArray = array / Size;

   int evenNumber = 0;

   int oddNumber = 0;

   for(int index = 0; index < lenghtOfArray; index++)
   {
      if((index % 2) == 0)
      {
         evenNumber += list[index];
      }

      else if((index % 2) != 0)
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
