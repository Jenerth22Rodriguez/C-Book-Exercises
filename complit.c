#include <stdio.h>
#define MAX_TITLE_LENGTH 41
#define MAX_AUTHOR_LENGTH 31

// exercise 14.11
enum
{
    ExpensiveBookScore = 84,
};

struct book_price
{
    char title[MAX_TITLE_LENGTH];
    char author[MAX_AUTHOR_LENGTH]; // designated Initializer
    float value_of_book;
};

int main(void)
{
    struct book_price read =
    {
        .author = "Joe",
        .title = "made some tittle",
        .value = 3.99
    };
    struct book_price readfirst;
    int score;

    printf("Enter test score: ");
    scanf("%d",&score);

    if(score >= ExpensiveBookScore)
    {

        readfirst = read;
    //     readfirst = (struct book){
    //         "Crime and Punishment",
    //         "Fyodorm Dostoyevsky",
    //         11.25};
    }
    else {
        readfirst = (struct book_price){
            "Mr. Bouncy's Nice Hat",
            "Fred Winsome",
            5.99};
    }
    printf("You assigned reading:\n");
    printf("%s by %s: $%.2f\n",readfirst.title, readfirst.author, readfirst.value_of_book);

    return 0;
}
