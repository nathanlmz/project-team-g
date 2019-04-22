#include <stdio.h>
int main()
{
   int i, num;
   printf("How many times you want to be greeted? XD\n");
   scanf("%d", &num);
   for(i=0; i<num; i++){
      printf("Hello, World!\n");
   }
   return 0;
}
