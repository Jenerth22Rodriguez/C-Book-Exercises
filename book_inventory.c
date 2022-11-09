#include <stdio.h>
#include <string.h>

#define LENGTH_TITLE (41)
#define LENGTH_AUTHOR (31)

char * s_gets(char *state_book, int number_of_book);

struct book_price{
    char tittle [LENGTH_TITLE];
    char author [LENGTH_AUTHOR];
    float value_of_book;
};

int main(void)
{
    struct book_price book;
    printf("Please enter the book tittle.\n");
    s_gets(book.tittle, LENGTH_TITLE);
    printf("Now enter the author\n");
    s_gets(book.author, LENGTH_AUTHOR);
    printf("Now enter the value.\n");
    scanf("%f",&book.value_of_book);
    printf("%s by %s: $%.2f\n",book.tittle, book.author, book.value_of_book);
    printf("%s: \"%s\" ($%.2f)\n",book.author, book.tittle, book.value_of_book);
    printf("Done.\n");

    return 0;
}

char * s_gets(char *st, int number_of_book)
{
    char *return_book_value;
    char *find_book;

    return_book_value = fgets(st, number_of_book,stdin);
    if(return_book_value)
    {
        find_book = strchr(st, '\n');
        if(find_book)
        *find_book = '\0';
        else
        while(getchar() != '\n')
        continue;
    }
    return return_book_value;
}
