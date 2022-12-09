#include <stdio.h>

static int sum(int *start, int *end)
{
   int Total = 0;
   while(start < end)
   {
      Total += *start;
      start++;
   }
   return Total;
}

int main(void)
{
   int arrayList[] = { 20, 10, 5, 39, 4, 16, 19, 26, 31, 20 };
   int totalResult = 0;
   totalResult = sum(arrayList, arrayList + sizeof(arrayList) / sizeof(int));
   printf("The total sum of my array is %d.\n", totalResult);
   return 0;
}
