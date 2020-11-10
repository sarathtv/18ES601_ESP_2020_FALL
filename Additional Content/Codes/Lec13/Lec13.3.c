#include <stdio.h>
#include <stdlib.h>

int main()
{

int* arr[5]; // array of pointer to int
int i;
for(i=0; i<5; i++) {
arr[i] = (int*)malloc(sizeof(int));
*arr[i] = i;
printf("%x\t %d\n",arr[i],*arr[i]);
}
return 0;
}