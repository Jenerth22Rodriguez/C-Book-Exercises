#include <stdio.h>

#define ARRAY_SIZE(_array) (sizeof(_array) / sizeof(_array[0]))

static void ShowArray(const double array[], int sizeOfArray)
{
   for(int index = 0; index < sizeOfArray; index++)
   {
      printf("%8.3f", array[index]);
      putchar('\n');
   }
}

static void MultiplyElementsOfArrayByFactor(double array[], int sizeOfArray, double factor)
{
   for(int index = 0; index < sizeOfArray; index++)
   {
      array[index] *= factor;
   }
}

int main(void)

{
   double array[] = { 20.0, 17.66, 8.2, 15.3, 22.22 };
   printf("The original dip array:\n");
   ShowArray(array, ARRAY_SIZE(array));
   MultiplyElementsOfArrayByFactor(array, ARRAY_SIZE(array), 3.5);
   printf("The dip array after calling mult_array():\n");
   ShowArray(array, ARRAY_SIZE(array));
   return 0;
}
