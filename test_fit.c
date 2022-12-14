#include <stdio.h>
#include <string.h>

static void PlaceNullCharacter(char *string, unsigned int sizeOfCharacter)
{
   if(strlen(string) > sizeOfCharacter)
   {
      string[sizeOfCharacter] = '\0';
   }
}

int main(void)
{
   char array[] =
      "Things should be as simple as possible,"
      "but not simpler.";
   puts(array);
   PlaceNullCharacter(array, 38);
   puts(array);
   puts("Let's look at some more of the string.");
   puts(array + 39);
   return 0;
}
