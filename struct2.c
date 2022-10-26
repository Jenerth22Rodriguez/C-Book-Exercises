#include <stdio.h>
#include <string.h>

struct Student
{
   int age;
   int grades[3];
   char name[50];
   char id[11];
};

int main(void)

{

   struct Student myClass[2];
   struct Student Kevin;
   Kevin.age = 40;
   Kevin.grades[0] = 1;
   Kevin.grades[1] = 2;
   Kevin.grades[2] = 3;
   strcpy(Kevin.name, "Kevin");
   strcpy(Kevin.id, " 012323");

   printf("Age: %d\n", Kevin.age);
   printf("Grades:\n ");
   printf("Name: %s\n", Kevin.name);
   printf("ID:%s\n", Kevin.id);

   for(int i = 0; i < 3; i++)
   {
      printf("%d ", Kevin.grades[i]);
   }
   printf("\n");
   return 0;
};
