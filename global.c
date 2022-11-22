#include <stdio.h>

int main(void)
{
   int units;
   printf("How many pounds to a firkin of butter?\n");
   scanf("%u", &units);
   while(units != 56)
   {
      printf("No luck, my friend. Try again.\n");
      scanf("%d", &units);
      if(units == 56)
      {
         printf("You must have looked it up!\n");
      }
   }
   return 0;
}
