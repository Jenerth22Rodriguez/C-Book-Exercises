#include <stdio.h>
#include <stdlib.h>

typedef struct flex
{
   size_t numberOfScores;
   double averageScore;
   double scores[];
} Flex_t;

static void PrintStructValue(const struct flex *flexStruct)
{
   printf("Scores : ");
   for(int index = 0; index < flexStruct->numberOfScores; index++)
   {
      printf("%g ", flexStruct->scores[index]);
   }
   printf("\nAverage Score: %g\n", flexStruct->averageScore);
}

static void AssignFlexStructValues(struct flex *flex, double baseValue)
{
   double sumOfScores = 0;

   for(int index = 0; index < flex->numberOfScores; index++)
   {
      flex->scores[index] = baseValue - index;
      sumOfScores += flex->scores[index];
   }
   flex->averageScore = sumOfScores / flex->numberOfScores;
}

int main(void)
{
   struct flex *flexStruct;
   flexStruct = malloc(sizeof(struct flex) + (5 * sizeof(double)));
   flexStruct->numberOfScores = 5;

   AssignFlexStructValues(flexStruct, 20.0);

   PrintStructValue(flexStruct);
   free(flexStruct);

   return 0;
}
