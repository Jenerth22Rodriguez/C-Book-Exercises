#include <stdio.h>
#include <string.h>

static void PlaceCharacter(char *string, unsigned int SizeOfcharacter)
{
   if(strlen(string) > SizeOfcharacter)
   {
      string[SizeOfcharacter] = '\0';
   }
}

int main(void)
{
   char array[] =
      "Things should be as simple as possible,"
      "but not simpler.";
   puts(array);
   PlaceCharacter(array, 38);
   puts(array);
   puts("Let's look at some more of the string.");
   puts(array + 39);
   return 0;
}
