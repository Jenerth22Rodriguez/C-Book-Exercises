#include <stdio.h>
#define MAX_TITLE_LENGTH (41)
#define MAX_AUTHOR_LENGTH (31)

// exercise 14.11
enum
{
   ExpensiveBookScore = 84,
};

struct book
{
   char title[MAX_TITLE_LENGTH];
   char author[MAX_AUTHOR_LENGTH];
   float value;
};

int main(void)
{
   struct book read = {
      .author = "Joe",
      .title = "made some tittle",
      .value = 3.99
   };
   struct book read_first;
   int score;

   printf("Enter test score: ");
   scanf("%d", &score);

   if(score >= ExpensiveBookScore)
   {
      read_first = read;
   }
   else
   {
      read_first = (struct book){
         "Mr. Bouncy's Nice Hat",
         "Fred Winsome",
         5.99
      };
   }
   printf("You assigned reading:\n");
   printf("%s by %s: $%.2f\n", read_first.title, read_first.author, read_first.value);

   return 0;
}
