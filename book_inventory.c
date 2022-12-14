#include <stdio.h>
#include <string.h>
#define LENGTH_TITLE (41)
#define LENGTH_AUTHOR (31)
char *s_gets(char *state_book, int number_of_book);
struct book_price
{
   char title[LENGTH_TITLE];
   char author[LENGTH_AUTHOR];
   float value_of_book;
};
int main(void)
{
   struct book_price book;
   printf("Please enter the book title.\n");
   s_gets(book.title, LENGTH_TITLE);
   printf("Now enter the author\n");
   s_gets(book.author, LENGTH_AUTHOR);
   printf("Now enter the value.\n");
   scanf("%f", &book.value_of_book);
   printf("%s by %s: $%.2f\n", book.title, book.author, book.value_of_book);
   printf("%s: \"%s\" ($%.2f)\n", book.author, book.title, book.value_of_book);
   printf("Done.\n");
   return 0;
}

char *s_gets(char *st, int length)
{
   char *return_value;
   char *found_string;
   return_value = fgets(st, length, stdin);
   if(return_value)
   {
      found_string = strchr(st, '\n');
      if(found_string)
      {
         *found_string = '\0';
      }
      else
      {
         while(getchar() != '\n')
         {
            continue;
         }
      }
   }
   return return_value;
}
