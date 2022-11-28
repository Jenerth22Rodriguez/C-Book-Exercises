#include <stdio.h>
#include <limits.h>

char *negative_number(int, char *);
void breakup_bits_into_groups(const char *);
int invert_last_number(int number, int bits);

int main(void)
{
   char bin_str_array[CHAR_BIT * sizeof(int) + 1];
   int number;
   puts("Enter integers and see them in binary.");
   puts("Non-numeric input terminates program.");

   while(scanf("%d", &number) == 1)
   {
      negative_number(number, bin_str_array);
      printf("%d is \n", number);
      breakup_bits_into_groups(bin_str_array);
      putchar('\n');
      number = invert_last_number(number, 4);
      printf("Inverting the last 4 bits gives\n");
      breakup_bits_into_groups(negative_number(number, bin_str_array));
      putchar('\n');
   }
   puts("Bye!");

   return 0;
}

char *negative_number(int negative_number, char *ps)
{
   int index;
   const static int size = CHAR_BIT * sizeof(int);
   for(index = size - 1; index >= 0; index--, negative_number >>= 1)
      ps[index] = (01 & negative_number) + '0';
   ps[size] = '\0';
   return ps;
}

void breakup_bits_into_groups(const char *string)
{
   int index = 0;
   while(string[index])
   {
      putchar(string[index]);
      if(++index % 4 == 0 && string[index])
         putchar(' ');
   }
}

int invert_last_number(int last_number, int bits)
{
   int mask = 0;
   int bit_value = 1;
   while(bits-- > 0)
   {
      mask |= bit_value;
      bit_value <<= 1;
   }
   return last_number ^ mask;
}
