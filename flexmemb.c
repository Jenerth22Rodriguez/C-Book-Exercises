#include <stdio.h>
#include <stdlib.h>

// chapter 14 exercise 12

typedef struct flex
{
    size_t numberOfScores;
    double averageScore;
    double scores[];
}Flex_t;

static void printStructValue(const struct flex * flexStruct)
{
    printf("Scores : ");
    for(int index = 0; index < flexStruct->numberOfScores; index++)
    {
        printf("%g ", flexStruct->scores[index]);
    }
    printf("\nAverage: %g\n", flexStruct->averageScore);
}

static struct flex * assignFlexStructValues(int numberOfScores, double baseValue)
{
    double sumOfScores = 0;
    struct flex * flexStruct1;

    flexStruct1 = malloc(sizeof(struct flex) +(numberOfScores * sizeof(double)));
    flexStruct1 -> numberOfScores = numberOfScores;

    for (int index = 0; index < flexStruct1->numberOfScores; index++){
        flexStruct1-> scores[index] = baseValue - index;
        sumOfScores += flexStruct1 -> scores[index];
    }
    flexStruct1 -> averageScore = sumOfScores /flexStruct1->numberOfScores;

    return flexStruct1;

}

int main (void)
{
    struct flex * flexStruct1;
    struct flex  * flexStruct2;
    flexStruct1 = assignFlexStructValues(5, 20.0);
    flexStruct2 = assignFlexStructValues(9, 20.0);
    printStructValue(flexStruct1);
    printStructValue(flexStruct2);

    free(flexStruct1);
    free(flexStruct2);

    return 0;
}
