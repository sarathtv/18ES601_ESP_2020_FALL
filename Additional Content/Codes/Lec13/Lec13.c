#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MD_9
//#define arr_ptr
//#define p2arr
//#define size_p2arr

#ifdef MD_1


int main()
{
    int i ;
    int matrix[2][3] = {{1,2,3},{4,5,6}};
    for ( i = 0; i < 2; i++) {
 printf("&matrix[%d]: %d  sizeof(matrix[%d]): %d\n",
         i, &matrix[i], i, sizeof(matrix[i]));
       //  printf("&matrix[%d]: %p \n",i,&matrix[i][0] /*(matrix+i)*/  );

    }

    return 0;
}
#endif // 2D_1

#ifdef MD_2
int main()
{
    int i,j ;
    int matrix[2][3] = {{1,2,3},{4,5,6}};
    for ( i = 0; i < 2; i++) {
            for( j=0;j<3;j++)
            {
              printf("&matrix[%d][%d]: %d \n",
                i,j, &matrix[i][j] );
            }

    }

    return 0;
}
#endif // 2D_2



#ifdef MD_4
void main()
{
    int i;
    int *pv = (int*) malloc(5 * sizeof(int));
    //allocate memory from the heap and
    //then treat the memory as if it were an array.
    for( i=0; i<5; i++) {
    //pv[i] = i+1;
    *(pv+i) = i+1;

    //printf("%d \n",pv[i]);
    printf("%d \n",*(pv+i));
    }
}
#endif // MD_4

#ifdef MD_5
void main()
{

int* arr[5]; // array of pointer to int
int i;
for(i=0; i<5; i++) {
arr[i] = (int*)malloc(sizeof(int));
*arr[i] = i; // store the value after usig the derefernce optr
printf("%d\t %d\n",arr[i],*arr[i]);
}
}
#endif // MD_5

#ifdef MD_6
void main()
{

int* arr[5]; // array of pointer to int
int i;
for(i=0; i<5; i++) {
*(arr+i) = (int*)malloc(sizeof(int)); //arr[i] == *(arr+i)
**(arr+i) = i;
printf("%d\t",**(arr+i));

}
}
#endif // MD_6





#ifdef MD_7
void main()
{

    char vector[5] = {1, 2, 3, 4, 5};
    //char *pv = vector;
    printf("%d\n",sizeof(vector));// output??
   // printf("%d",sizeof(pv));

}
#endif

#ifdef p2arr
// C program to understand difference between
// pointer to an integer and pointer to an
// array of integers.
#include<stdio.h>

int main()
{
	// Pointer to an integer
	int *p;

	// Pointer to an array of 5 integers
	int (*ptr)[5]; // new
	int arr[5];

	// Points to 0th element of the arr.
	p = arr;

	// Points to the whole array arr.
	ptr = arr;

	printf("p = %d, ptr = %d\n", p, ptr);

	p++;
	ptr++;

	printf("p = %d, ptr = %d\n", p, ptr);

	return 0;
}

#endif // p2arr

#ifdef size_p2arr
// C program to illustrate sizes of  pointer of array
#include<stdio.h>
int main()
{
	int arr[] = { 3, 5, 6, 7, 9 };
	int *p = arr;
	int (*ptr)[5] = arr;

	printf("**********  p = %d,  ptr = %d**********\n", p, ptr);
	printf("********** *p = %d,       *ptr = %d**********\n", *p, *ptr);

	printf("********** sizeof(p) = %d, sizeof(*p) = %d**********\n", sizeof(p), sizeof(*p));
	printf("**********sizeof(ptr) = %d, sizeof(*ptr) = %d**********\n", sizeof(ptr), sizeof(*ptr));

	return 0;
}


#endif // size_p2arr

#ifdef arr_ptr
void main()
{

    int vector[5] = {1, 2, 3, 4, 5};
    int *pv = vector;
   printf("%d \n",sizeof(vector));
    printf("%d\n",sizeof(pv));
    printf("content of vector=%d\tcontent of pv=%d",vector,pv);

}
#endif // arr_ptr
#ifdef MD_9


int main()
{
    int i,j ;
    int matrix[4][3] = {{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
    int (*ptr)[3];
    ptr=matrix;
    for ( i = 0; i < 4; i++) {
            for( j=0;j<3;j++)
            {
              printf("&matrix[%d][%d]: %d\t %d \n",
                i,j, &matrix[i][j],(*(ptr + i) + j)  );
            }

    }
    //printf("%d\n",matrix[2][1]);
   // printf("%d\n",matrix);
    //printf("%d\n",ptr);
    //printf("%d\n",ptr+1);
   // printf("%d\n",*(*(ptr+1)+1) );

    return 0;
}
#endif // MD_9

#ifdef MD_8


// C program to print the values and
// address of elements of a 2-D array
#include<stdio.h>

int main()
{
int arr[3][4] = {
					{ 10, 11, 12, 13 },
					{ 20, 21, 22, 23 },
					{ 30, 31, 32, 33 }
				};
int i, j;
for (i = 0; i < 3; i++)
{
	printf("Address of %dth array = %p %p\n",
					i, arr[i], *(arr + i));

	for (j = 0; j < 4; j++)
    printf("%p  ",  (*(arr + i) + j));
	//printf("%d %d ", arr[i][j], *(*(arr + i) + j));
	printf("\n");
}

return 0;
}
#endif //MD_8


