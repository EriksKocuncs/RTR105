//https://cplusplus.com/reference/cstdio/printf/
/* printf example */
#include <stdio.h>

int main()
{
   printf ("Characters: %c %c \n", 'a', 65); //'a' vai 0x61 -> 0110 0001
   printf ("Decimals: %d %ld\n", 1977, 650000L); // 'a' vai 97 vai 0x61 -> 0110 0001
   printf ("Preceding with blanks: %10d \n", 1977); // 'a' vai 97 vai 0x61  -> 0110 0001
   printf ("Preceding with zeros: %010d \n", 1977); // 'a' vai 97 vai 0x61  -> 0110 0001
   printf ("Some different radices: %d %x %o %#x %#o \n", 100, 100, 100, 100, 100); // 'a' vai 97 vai 0x61  -> 0110 0001
   printf ("floats: %4.2f %+.0e %E \n", 3.1416, 3.1416, 3.1416);
   printf ("Width trick: %*d \n", 5, 10);
   printf ("%s \n", "A string");
   return 0;
}
