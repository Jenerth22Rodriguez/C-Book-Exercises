#include <stdio.h>
#include <string.h>

struct Car_type

{
    char model[30];
    char branch[30];
    int years;
};

struct Car_type2
{
    char model[30];
    char branch[30];
    int years;
};

int main(void)
{
struct Car_type Chevy;
struct Car_type2 Ford;
Chevy.years = 2016;
Ford.years = 2013;
strcpy(Chevy.branch, "Chevrolet");
strcpy(Ford.branch, "Ford");
strcpy(Chevy.model, "Cruze");
strcpy(Ford.model, "Fusion");

printf("The branch car 1 is : %s, model %s, with the manufaturing year %d\n", Chevy.branch,Chevy.model, Chevy.years);
printf("The branch car 2 is : %s, model %s, with the manufaturing year %d\n", Ford.branch, Ford.model, Ford.years);
}


/*
Working in a struct that is going to print the model, branch and year of the car
I store two type of branch name in my struct for a simple example and then I print them
in my main function. In this exersice I find out that char and string need to be in quation to
print them, but the integer and number not need to be in quation to print them.
*/
