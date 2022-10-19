#include <stdio.h>
#include <string.h>

typedef struct

{
     char branch[30];
     char model[30];
     int years;
}Cartype_t;

int main(void)
{

 Cartype_t Chevrolet = {
    "Chevrolet",
    "Cruze",
    2018
 };

Cartype_t Ford = {
    "Ford",
    "Fusion",
    2014
};
printf("The branch of the car 1 is : %s\n",Chevrolet.branch);
printf("The model of the car 1 is : %s\n",Chevrolet.model);
printf("The year of the car 1 is : %d\n",Chevrolet.years);
return 0;
}


/*
Working in a struct that is going to print the model, branch and year of the car
I store two type of branch name in my struct for a simple example and then I print them
in my main function. In this exersice I find out that char and string need to be in quation to
print them, but the integer and number not need to be in quation to print them.
*/
