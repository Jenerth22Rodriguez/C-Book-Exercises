#include <stdio.h>
#include <string.h>

static void placeCharacter(char *string, unsigned int sizeOfcharacter)
{
   if(strlen(string) > sizeOfcharacter)
   {
      string[sizeOfcharacter] = '\0';
   }
}

int main(void)
{
   char array[] =
      "Things should be as simple as possible,"
      "but not simpler.";
   puts(array);
   placeCharacter(array, 38);
   puts(array);
   puts("Let's look at some more of the string.");
   puts(array + 39);
   return 0;
}
