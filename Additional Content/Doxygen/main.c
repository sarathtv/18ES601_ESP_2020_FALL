/** @file main.c
 *  @brief Application code.
 *
 *  @author Sarath T.V
 *  @bug No know bugs.
 */
#include <stdio.h>
#include <stdlib.h>
#include"operations.h"

#define PI 3.1415 /**< Mathematical symbols */
#define SomeOtherMacro 123  ///< ANother way for writing commnets to be extracted.

/// This is a test string.
char *stringVar=" Hello world";
/**
* This is the main function.
*/

int main()
{
    printf("Hello world!\n");
    printf("%d",add(10,9));
    return 0;
}
