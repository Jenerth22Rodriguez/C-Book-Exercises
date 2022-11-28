#include <stdio.h>
#include <limits.h>

static char *convert_number_to_binary(int negative_number, char *ps)
{
   int index;
   const static int size = CHAR_BIT * sizeof(int);
   for(index = size - 1; index >= 0; index--, negative_number >>= 1)
      ps[index] = (01 & negative_number) + '0';
   ps[size] = '\0';
   return ps;
}

static void breakup_bits_into_groups(const char *string)
{
   int index = 0;
   while(string[index])
   {
      putchar(string[index]);
      if(++index % 4 == 0 && string[index])
         putchar(' ');
   }
}

static int invert_number(int number, int bits)
{
   int mask = 0;
   int bit_value = 1;
   while(bits-- > 0)
   {
      mask |= bit_value;
      bit_value <<= 1;
   }
   return number ^ mask;
}


int main(void)
{
   char bin_str_array[CHAR_BIT * sizeof(int) + 1];
   int number;
   puts("Enter integers and see them in binary.");
   puts("Non-numeric input terminates program.");

   while(scanf("%d", &number) == 1)
   {
      convert_number_to_binary(number, bin_str_array);
      printf("%d is \n", number);
      breakup_bits_into_groups(bin_str_array);
      putchar('\n');
      number = invert_number(number, 4);
      printf("Inverting the last 4 bits gives\n");
      breakup_bits_into_groups(convert_number_to_binary(number, bin_str_array));
      putchar('\n');
   }
   puts("Bye!");

   return 0;
}
