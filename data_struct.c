#include <stdio.h>
#include <string.h>

typedef struct

{
    const char *branch;
    const char *model;
    int years;
}Cartype_t;

static void Car_catalog(Cartype_t *car,int carNumber)
{
printf("The branch of the car %d is: %s\n",carNumber, car->branch);
printf("The model of the car is: %s\n",car->model);
printf("The year of the car is: %d\n",car->years);
printf("\n");
}

int main(void)
{
 Cartype_t Cars[]= {
{
    "Chevrolet",
    "Cruze",
    2018
 },

 {
    "Ford",
    "Fusion",
    2014
},

{
    "Jeep",
    "Patriot",
    2015
}
 };

for (int index = 0; index < sizeof(Cars)/ sizeof(Cartype_t); index++)
{
    Car_catalog(&Cars[index],index + 1);
}
return 0;
}
