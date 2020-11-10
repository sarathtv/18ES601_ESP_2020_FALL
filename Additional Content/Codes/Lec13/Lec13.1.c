#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i;
    int *pv = (int*) malloc(5 * sizeof(int));
    //allocate memory from the heap and
    //then treat the memory as if it were an array.
    for( i=0; i<5; i++) {
    //pv[i] = i+1;  
    *(pv+i) = i+1;
    //first execute directly then comment  the pointer notations and uncomment array notation.
    //do the same for printf statement also
    //printf("%d \n",pv[i]);
    printf("%d \n",*(pv+i));
    }
    return 0;
}