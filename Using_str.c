#include <stdio.h>
#include <string.h>

static char *s_gets(char *string, int number)
{
   char *ret_value;
   int index = 0;
   ret_value = fgets(string, number, stdin);
   if(ret_value < 0)
   {
      while(string[index] != '\n' && string[index] != '\0')
      {
         index++;
         if(string[index] == '\n')
         {
            string[index] = '\0';
         }
         else
            while(getchar() != '\n')
            {
               continue;
            }
      }
   }
   return ret_value;
}

int main(void)
{
   char flower[80];
   char AddString[] = "s smell like old shoes.";
   puts("what is your favorite flower?");
   if (s_gets(flower, sizeof(flower)))
   {
      strcat(flower, AddString);
      puts(flower);
      puts(AddString);
   }
   else
      puts("End of file encountered!");
   puts("bye");

   return 0;
}
