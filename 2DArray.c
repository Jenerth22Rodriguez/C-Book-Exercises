#include <stdio.h>

#define ROWS 3
#define COLUMNS 4

static void sum_Rows(int ar[][COLUMNS], int rows);
static void sum_columns(int[][COLUMNS], int);
static int sum2dArray(int (*ar)[COLUMNS], int rows);

void sum_Rows(int ar[][COLUMNS], int rows)
{
   int rowings;
   int columns;
   int totalSumRows;
   for(rowings = 0; rowings < rows; rowings++)
   {
      totalSumRows = 0;
      for(columns = 0; columns < COLUMNS; columns++)
      {
         totalSumRows += ar[rowings][columns];
      }
      printf("row %d sum: %d\n\n", rowings, totalSumRows);
   }
}

void sum_columns(int ar[][COLUMNS], int rows)
{
   int rowings;
   int columns;
   int totalSumColumns;
   for(columns = 0; columns < COLUMNS; columns++)
   {
      totalSumColumns = 0;
      for(rowings = 0; rowings < rows; rowings++)
      {
         totalSumColumns += ar[rowings][columns];
      }
      printf("col %d: sum = %d\n\n", columns, totalSumColumns);
   }
}
int sum2dArray(int ar[][COLUMNS], int rows)
{
   int rowings;
   int columns;
   int totalSum2DArray = 0;
   for(rowings = 0; rowings < rows; rowings++)
      for(columns = 0; columns < COLUMNS; columns++)
      {
         totalSum2DArray += ar[rowings][columns];
      }

   return totalSum2DArray;
}

int main(void)
{
   int List[ROWS][COLUMNS] = {
      { 2, 4, 6, 8 },
      { 3, 5, 7, 9 },
      { 12, 10, 8, 6 }
   };
   sum_Rows(List, ROWS);
   sum_columns(List, ROWS);
   printf("Sum of all elements = %d\n", sum2dArray(List, ROWS));
   return 0;
}
