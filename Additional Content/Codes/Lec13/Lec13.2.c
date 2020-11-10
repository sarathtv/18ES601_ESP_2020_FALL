#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i ;
    int matrix[2][3] = {{1,2,3},{4,5,6}};
    for ( i = 0; i < 2; i++) {
 	printf("&matrix[%d]: %d  sizeof(matrix[%d]): %d\n",i, &matrix[i], i, sizeof(matrix[i]));
    //  printf("&matrix[%d]: %p \n",i,&matrix[i][0]  );
 	//  printf("&matrix[%d]: %p \n",i,(matrix+i)  );
 	// run this code by uncommenting the printf statement and try to understand the behaviour.
    }

    return 0;
}