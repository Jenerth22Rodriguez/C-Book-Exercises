#include <stdio.h>

struct {
    char *model;
    char *branch;
    int *years;
} car1,car2;



int main()
{
car1.years = 2012;
car2.years = 2016;
car1.branch = "Chevy";
car2.branch = "Ford";
car1. model = "Cruze";
car2.model = "Fusion";
printf("The branch car 1 is : %s and the manufaturing year %d\n",car1.branch,car1.years);
printf("The branch car 2 is :%s and the manufaturing year %d\n",car2.branch,car2.years);
printf("The model car 1 is : %s\n",car1.model);
printf("The model car 1 is : %s\n",car2.model);
return 0;
}
