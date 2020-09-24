#include <stdio.h>

extern int varOne ;

int main()
{
   printf("value of the global variable is = %d\n", varOne);
   return 0;

}


// anotherfile.c
int varOne=48;