#include <stdio.h>

enum
{
   Rows = 3,
   Columns = 4,
};

static void SumRows(int array[][Columns])
{
   for(int rowings = 0; rowings < Rows; rowings++)
   {
      int totalSumRows = 0;
      for(int columns = 0; columns < Columns; columns++)
      {
         totalSumRows += array[rowings][columns];
      }
      printf("row %d sum: %d\n\n", rowings, totalSumRows);
   }
}

static void SumColumns(int array[][Columns])
{
   for(int columns = 0; columns < Columns; columns++)
   {
      int totalSumColumns = 0;
      for(int rowings = 0; rowings < Rows; rowings++)
      {
         totalSumColumns += array[rowings][columns];
      }
      printf("col %d: sum = %d\n\n", columns, totalSumColumns);
   }
}

static int Sum2dArray(int array[][Columns])
{
   int totalSum2DArray = 0;

   for(int rowings = 0; rowings < Rows; rowings++)
   {
      for(int columns = 0; columns < Columns; columns++)
      {
         totalSum2DArray += array[rowings][columns];
      }
   }
   return totalSum2DArray;
}

int main(void)
{
   int list[Rows][Columns] = {
      { 2, 4, 6, 8 },
      { 3, 5, 7, 9 },
      { 12, 10, 8, 6 }
   };
   SumRows(list);
   SumColumns(list);
   printf("Sum of all elements = %d\n", Sum2dArray(list));
   return 0;
}
