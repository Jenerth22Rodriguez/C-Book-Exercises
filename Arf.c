#include <stdio.h>

enum
{
   Size = 5,
};

static void ShowArray(const double arrayList[], int numberInsideArray)
{
   int index;
   for(index = 0; index < numberInsideArray; index++)
   {
      printf("%8.3f", arrayList[index]);
      putchar('\n');
   }
}

static void MultArray(double ArrayList[], int NumberInsideArray, double mult)
{
   int index;
   for(index = 0; index < NumberInsideArray; index++)
   {
      ArrayList[index] *= mult;
   }
}

int main(void)

{
   double dip[Size] = { 20.0, 17.66, 8.2, 15.3, 22.22 };
   printf("The original dip array:\n");
   ShowArray(dip, Size);
   MultArray(dip, Size, 2.5);
   printf("The dip array after calling mult_array():\n");
   ShowArray(dip, Size);
   return 0;
}
