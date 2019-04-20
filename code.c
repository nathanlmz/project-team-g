/*
** Simple base 10 to base <10 converters.
*/

#include <stdio.h>

main(int argc, char**argv)
   {
   if (argc == 3)
      lastdigit(atoi(*++argv), atoi(*++argv));
   else
      printf("Usage: %s newbase", *argv);
   putchar('\n');
   }

lastdigit(int num, int base)
   {
   if (num >= base)
      lastdigit(num/base, base);
   putchar(num%base + '0');
   }
