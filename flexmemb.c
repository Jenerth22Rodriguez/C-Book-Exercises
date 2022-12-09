#include <stdio.h>
#include <stdlib.h>

typedef struct flex
{
   size_t numberOfScores;
   double averageScore;
   double scores[];
} Flex_t;

static void printStructValue(const struct flex *flexStruct)
{
   printf("Scores : ");
   for(int index = 0; index < flexStruct->numberOfScores; index++)
   {
      printf("%g ", flexStruct->scores[index]);
   }
   printf("\nAverage Score: %g\n", flexStruct->averageScore);
}

static struct flex *assignFlexStructValues(int numberOfScores, double baseValue)
{
   double sumOfScores = 0;
   struct flex *flexStruct;

   flexStruct = malloc(sizeof(struct flex) + (numberOfScores * sizeof(double)));
   flexStruct->numberOfScores = numberOfScores;

   for(int index = 0; index < flexStruct->numberOfScores; index++)
   {
      flexStruct->scores[index] = baseValue - index;
      sumOfScores += flexStruct->scores[index];
   }
   flexStruct->averageScore = sumOfScores / flexStruct->numberOfScores;

   return flexStruct;
   free(flexStruct);
}

int main(void)
{
   struct flex *flexStruct;
   struct flex *secondFlexStruct;
   flexStruct = assignFlexStructValues(5, 20.0);
   flexStruct = assignFlexStructValues(9, 20.0);
   printStructValue(flexStruct);
   printStructValue(flexStruct);

   free(flexStruct);

   return 0;
}
