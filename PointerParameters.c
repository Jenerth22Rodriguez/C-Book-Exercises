#include <stdio.h>
#define Size 10

int sum(int *start, int *end)
{
   int initialization = 0;
   while(start < end)
   {
      initialization += *start;
   }
   return initialization;
}

int main(void)
{

int Array[Size]= {20,10,5,39,4,16,19,26,31,20};
long size;

size = sum(Array, Array + Size);

printf("The total size of my array is %ld.\n",size);
    return 0;
}
